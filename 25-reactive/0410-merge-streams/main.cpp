#include <functional>
#include <iostream>
#include <queue>
#include <vector>

// Virtual-time scheduler: deterministic, no real time/threads.
struct Event {
    long time;
    long seq;
    std::function<void()> cb;
};

struct EventCompare {
    bool operator()(const Event& a, const Event& b) const {
        if (a.time != b.time) return a.time > b.time; // smaller time first
        return a.seq > b.seq;                         // ties: insertion order
    }
};

class Scheduler {
public:
    void schedule(long time, std::function<void()> cb) {
        queue_.push(Event{time, next_seq_++, std::move(cb)});
    }

    void run() {
        while (!queue_.empty()) {
            Event e = queue_.top();
            queue_.pop();
            clock_ = e.time;
            e.cb();
        }
    }

private:
    std::priority_queue<Event, std::vector<Event>, EventCompare> queue_;
    long next_seq_ = 0;
    long clock_ = 0;
};

// A push-based Observable built from scratch.
using Observer = std::function<void(int)>;

class Observable {
public:
    explicit Observable(std::function<void(const Observer&)> producer)
        : producer_(std::move(producer)) {}

    void subscribe(const Observer& observer) const { producer_(observer); }

private:
    std::function<void(const Observer&)> producer_;
};

// A timed source: emits each value by scheduling it at its virtual time.
Observable timed(Scheduler& sched, std::vector<std::pair<long, int>> events) {
    return Observable([&sched, events](const Observer& observer) {
        for (const auto& [t, v] : events) {
            sched.schedule(t, [observer, v]() { observer(v); });
        }
    });
}

// merge: subscribe to both sources onto the same observer.
Observable merge(const Observable& a, const Observable& b) {
    return Observable([a, b](const Observer& observer) {
        a.subscribe(observer);
        b.subscribe(observer);
    });
}

int main() {
    Scheduler sched;

    Observable a = timed(sched, {{10, 1}, {30, 3}, {50, 5}});
    Observable b = timed(sched, {{20, 2}, {40, 4}, {60, 6}});

    merge(a, b).subscribe([](int v) { std::cout << v << '\n'; });

    sched.run();
    return 0;
}
