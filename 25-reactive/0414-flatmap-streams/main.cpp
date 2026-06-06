#include <cstdint>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>

// Virtual-time scheduler: deterministic, no real threads/timers/clock.
class Scheduler {
    struct Task {
        std::int64_t time;
        std::uint64_t seq;
        std::function<void()> cb;
        bool operator>(const Task& other) const {
            if (time != other.time) return time > other.time;
            return seq > other.seq;
        }
    };
    std::priority_queue<Task, std::vector<Task>, std::greater<Task>> queue_;
    std::uint64_t next_seq_ = 0;

public:
    std::int64_t now = 0;

    void schedule(std::int64_t at, std::function<void()> cb) {
        queue_.push(Task{at, next_seq_++, std::move(cb)});
    }

    void run() {
        while (!queue_.empty()) {
            Task t = queue_.top();
            queue_.pop();
            now = t.time;
            t.cb();
        }
    }
};

int main() {
    Scheduler sched;

    auto observer = [](int value) { std::cout << value << "\n"; };

    // flatMap: each outer value maps to an inner timed stream; all inners
    // merge concurrently with no cancellation.
    auto flat_map = [&](int n) {
        sched.schedule(sched.now + 5, [observer, n]() { observer(n); });
        sched.schedule(sched.now + 30, [observer, n]() { observer(n * 10); });
    };

    // Outer stream emits at virtual times 10 -> 1, 20 -> 2.
    sched.schedule(10, [&]() { flat_map(1); });
    sched.schedule(20, [&]() { flat_map(2); });

    sched.run();
    return 0;
}
