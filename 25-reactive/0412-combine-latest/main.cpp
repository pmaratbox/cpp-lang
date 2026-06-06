#include <cstdint>
#include <functional>
#include <iostream>
#include <optional>
#include <queue>
#include <string>
#include <vector>

// ---- Virtual-time scheduler -------------------------------------------------
struct Scheduler {
    struct Event {
        std::int64_t time;
        std::int64_t seq;
        std::function<void()> cb;
        bool dead = false;
    };
    // Min-heap by (time, seq); compare returns true when a has lower priority.
    struct Cmp {
        bool operator()(const Event* a, const Event* b) const {
            if (a->time != b->time) return a->time > b->time;
            return a->seq > b->seq;
        }
    };

    std::int64_t clock = 0;
    std::int64_t next_seq = 0;
    std::vector<Event*> owned;
    std::priority_queue<Event*, std::vector<Event*>, Cmp> pq;

    Event* schedule(std::int64_t t, std::function<void()> cb) {
        auto* e = new Event{t, next_seq++, std::move(cb), false};
        owned.push_back(e);
        pq.push(e);
        return e;
    }

    void cancel(Event* token) {
        if (token) token->dead = true;
    }

    void run() {
        while (!pq.empty()) {
            Event* e = pq.top();
            pq.pop();
            if (e->dead) continue;
            clock = e->time;
            e->cb();
        }
        for (auto* e : owned) delete e;
        owned.clear();
    }
};

// ---- Push-based Observable (built from scratch) -----------------------------
template <typename T>
struct Observer {
    std::function<void(const T&)> next;
};

template <typename T>
using Observable = std::function<void(Observer<T>)>;

// A timed source emits each (time, value) by scheduling it on the scheduler.
template <typename T>
Observable<T> timed(Scheduler& sched, std::vector<std::pair<std::int64_t, T>> events) {
    return [&sched, events](Observer<T> obs) {
        for (const auto& [t, v] : events) {
            sched.schedule(t, [obs, v]() { obs.next(v); });
        }
    };
}

// combineLatest of two sources: emit pair of latest values whenever either
// emits, once both have produced at least one value.
template <typename A, typename B>
Observable<std::pair<A, B>> combineLatest(Observable<A> sa, Observable<B> sb) {
    return [sa, sb](Observer<std::pair<A, B>> obs) {
        auto latestA = std::make_shared<std::optional<A>>();
        auto latestB = std::make_shared<std::optional<B>>();

        auto emit = [obs, latestA, latestB]() {
            if (latestA->has_value() && latestB->has_value()) {
                obs.next({**latestA, **latestB});
            }
        };

        sa(Observer<A>{[latestA, emit](const A& v) {
            *latestA = v;
            emit();
        }});
        sb(Observer<B>{[latestB, emit](const B& v) {
            *latestB = v;
            emit();
        }});
    };
}

int main() {
    Scheduler sched;

    // A schedules (1->1),(3->2); B schedules (2->10).
    Observable<int> a = timed<int>(sched, {{1, 1}, {3, 2}});
    Observable<int> b = timed<int>(sched, {{2, 10}});

    auto combined = combineLatest<int, int>(a, b);

    combined(Observer<std::pair<int, int>>{[](const std::pair<int, int>& p) {
        std::cout << "(" << p.first << ", " << p.second << ")\n";
    }});

    sched.run();
    return 0;
}
