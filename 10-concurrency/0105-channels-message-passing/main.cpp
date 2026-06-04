#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <optional>

// A minimal closeable channel built from a queue + mutex + condition_variable.
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
        ch.send(1);
        ch.send(2);
        ch.send(3);
        ch.close();
    });
    bool first = true;
    while (auto v = ch.recv()) {
        if (!first) std::cout << ' ';
        std::cout << *v;
        first = false;
    }
    std::cout << '\n';
    producer.join();
}
