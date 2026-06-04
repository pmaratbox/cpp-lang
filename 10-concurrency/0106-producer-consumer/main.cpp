#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <optional>

class Channel {
    std::queue<int> q;
    std::mutex m;
    std::condition_variable cv;
    bool closed = false;
public:
    void send(int v) {
        std::lock_guard<std::mutex> lock(m);
        q.push(v);
        cv.notify_one();
    }
    void close() {
        std::lock_guard<std::mutex> lock(m);
        closed = true;
        cv.notify_all();
    }
    std::optional<int> recv() {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, [&] { return !q.empty() || closed; });
        if (q.empty()) return std::nullopt;
        int v = q.front();
        q.pop();
        return v;
    }
};

int main() {
    Channel ch;
    std::thread producer([&] {
        for (int i = 1; i <= 5; ++i) ch.send(i);
        ch.close();
    });
    int sum = 0;
    while (auto v = ch.recv()) sum += *v;
    producer.join();
    std::cout << sum << '\n';
}
