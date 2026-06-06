#include <deque>
#include <functional>
#include <iostream>
#include <vector>

// A minimal ReplaySubject keeping the last `capacity` values. New
// subscribers immediately receive the buffered values, then any future
// emissions, all synchronously and deterministically.
class ReplaySubject {
public:
    using Observer = std::function<void(int)>;

    explicit ReplaySubject(std::size_t capacity) : capacity_(capacity) {}

    void next(int value) {
        buffer_.push_back(value);
        if (buffer_.size() > capacity_) {
            buffer_.pop_front();
        }
        for (auto &obs : observers_) {
            obs(value);
        }
    }

    void subscribe(Observer obs) {
        for (int v : buffer_) {
            obs(v);
        }
        observers_.push_back(std::move(obs));
    }

private:
    std::size_t capacity_;
    std::deque<int> buffer_;
    std::vector<Observer> observers_;
};

int main() {
    ReplaySubject subject(2);

    subject.next(1);
    subject.next(2);
    subject.next(3); // buffer now [2, 3]

    // Late subscriber: immediately replays 2, 3.
    subject.subscribe([](int v) { std::cout << v << '\n'; });

    subject.next(4); // subscriber also receives 4

    return 0;
}
