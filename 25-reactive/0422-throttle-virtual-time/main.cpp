#include <cstdint>
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

// Virtual-time scheduler: a priority queue of (time, seq, callback).
class Scheduler {
public:
    using Callback = std::function<void()>;

    struct Task {
        std::int64_t time;
        std::uint64_t seq;
        Callback cb;
        bool cancelled = false;
    };

    std::int64_t now() const { return now_; }

    std::size_t schedule(std::int64_t time, Callback cb) {
        tasks_.push_back({time, next_seq_++, std::move(cb), false});
        std::size_t token = tasks_.size() - 1;
        order_.push({time, tasks_[token].seq, token});
        return token;
    }

    void cancel(std::size_t token) {
        if (token < tasks_.size()) tasks_[token].cancelled = true;
    }

    void run() {
        while (!order_.empty()) {
            Entry e = order_.top();
            order_.pop();
            Task &t = tasks_[e.token];
            if (t.cancelled) continue;
            now_ = t.time;
            t.cb();
        }
    }

private:
    struct Entry {
        std::int64_t time;
        std::uint64_t seq;
        std::size_t token;
    };
    struct EntryCmp {
        bool operator()(const Entry &a, const Entry &b) const {
            if (a.time != b.time) return a.time > b.time;
            return a.seq > b.seq;
        }
    };

    std::int64_t now_ = 0;
    std::uint64_t next_seq_ = 0;
    std::vector<Task> tasks_;
    std::priority_queue<Entry, std::vector<Entry>, EntryCmp> order_;
};

// A push-based observer: just a "next" sink for this lesson.
using Observer = std::function<void(const std::string &)>;

// throttle(window), leading edge: emit a value, then suppress further
// values for `window` ticks.
Observer throttle(Scheduler &sched, std::int64_t window, Observer downstream) {
    auto block_until = std::make_shared<std::int64_t>(0);
    return [&sched, window, block_until, downstream](const std::string &v) {
        std::int64_t t = sched.now();
        if (t >= *block_until) {
            *block_until = t + window;
            downstream(v);
        }
    };
}

int main() {
    Scheduler sched;

    Observer print = [](const std::string &v) { std::cout << v << "\n"; };
    Observer sink = throttle(sched, 30, print);

    // Source schedules its events at the given virtual times.
    struct Event { std::int64_t time; std::string value; };
    std::vector<Event> source = {
        {10, "a"}, {20, "b"}, {100, "c"}, {110, "d"},
    };
    for (const auto &ev : source) {
        sched.schedule(ev.time, [&sink, ev]() { sink(ev.value); });
    }

    sched.run();
    return 0;
}
