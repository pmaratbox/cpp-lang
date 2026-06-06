#include <iostream>
#include <functional>
#include <queue>
#include <vector>
#include <memory>

// Virtual-time scheduler: deterministic, no real time.
struct Task {
    long time;
    long seq;
    std::function<void()> cb;
    bool dead = false;
};

class Scheduler {
public:
    long now = 0;

    // A token lets us cancel a scheduled task.
    std::shared_ptr<Task> schedule(long t, std::function<void()> cb) {
        auto task = std::make_shared<Task>();
        task->time = t;
        task->seq = next_seq_++;
        task->cb = std::move(cb);
        queue_.push(task);
        return task;
    }

    static void cancel(const std::shared_ptr<Task>& token) {
        if (token) token->dead = true;
    }

    void run() {
        while (!queue_.empty()) {
            auto task = queue_.top();
            queue_.pop();
            if (task->dead) continue;
            now = task->time;
            task->cb();
        }
    }

private:
    struct Cmp {
        bool operator()(const std::shared_ptr<Task>& a,
                        const std::shared_ptr<Task>& b) const {
            if (a->time != b->time) return a->time > b->time;
            return a->seq > b->seq; // ties broken by insertion order
        }
    };
    std::priority_queue<std::shared_ptr<Task>,
                        std::vector<std::shared_ptr<Task>>, Cmp> queue_;
    long next_seq_ = 0;
};

int main() {
    Scheduler sched;

    // Track the current inner subscription's pending emissions so a new
    // outer value can cancel them (the essence of switchMap).
    std::vector<std::shared_ptr<Task>> current_inner;

    // inner(n): schedules (now+5 -> n), (now+30 -> n*10).
    auto start_inner = [&](int n) {
        // Cancel the previous inner subscription's still-pending emissions.
        for (auto& tok : current_inner) Scheduler::cancel(tok);
        current_inner.clear();

        long base = sched.now;
        current_inner.push_back(sched.schedule(base + 5, [n]() {
            std::cout << n << "\n";
        }));
        current_inner.push_back(sched.schedule(base + 30, [n]() {
            std::cout << (n * 10) << "\n";
        }));
    };

    // outer: (10 -> 1), (20 -> 2). Each outer value switches to a new inner.
    sched.schedule(10, [&]() { start_inner(1); });
    sched.schedule(20, [&]() { start_inner(2); });

    sched.run();
    return 0;
}
