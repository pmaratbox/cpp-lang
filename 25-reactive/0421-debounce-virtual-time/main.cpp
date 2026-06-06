#include <cstdint>
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

// Virtual-time scheduler: a priority queue of (time, seq, callback).
class Scheduler {
public:
    using Task = std::function<void()>;

    int64_t schedule(int64_t time, Task cb) {
        int64_t token = next_token_++;
        queue_.push(Entry{time, seq_++, token, std::move(cb)});
        return token;
    }

    void cancel(int64_t token) { cancelled_.push_back(token); }

    void run() {
        while (!queue_.empty()) {
            Entry e = queue_.top();
            queue_.pop();
            if (is_cancelled(e.token)) continue;
            now_ = e.time;
            e.cb();
        }
    }

    int64_t now() const { return now_; }

private:
    struct Entry {
        int64_t time;
        int64_t seq;
        int64_t token;
        Task cb;
    };
    struct Compare {
        bool operator()(const Entry& a, const Entry& b) const {
            if (a.time != b.time) return a.time > b.time;
            return a.seq > b.seq;
        }
    };

    bool is_cancelled(int64_t token) const {
        for (int64_t t : cancelled_)
            if (t == token) return true;
        return false;
    }

    std::priority_queue<Entry, std::vector<Entry>, Compare> queue_;
    std::vector<int64_t> cancelled_;
    int64_t seq_ = 0;
    int64_t next_token_ = 0;
    int64_t now_ = 0;
};

int main() {
    Scheduler sched;

    // Source schedules ("a"@10), ("b"@20), ("c"@100).
    std::vector<std::pair<int64_t, std::string>> source{
        {10, "a"}, {20, "b"}, {100, "c"}};

    const int64_t window = 30;

    // debounce(window): on each value, cancel any pending emit and schedule
    // this value to fire at now + window.
    int64_t pending = -1;
    bool has_pending = false;

    auto on_value = [&](const std::string& value) {
        if (has_pending) sched.cancel(pending);
        pending = sched.schedule(sched.now() + window,
                                 [value]() { std::cout << value << "\n"; });
        has_pending = true;
    };

    for (const auto& [time, value] : source) {
        sched.schedule(time, [value, &on_value]() { on_value(value); });
    }

    sched.run();
    return 0;
}
