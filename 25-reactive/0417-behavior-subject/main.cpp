#include <functional>
#include <iostream>
#include <memory>
#include <vector>

// An observer is just a callback receiving the next value.
using Observer = std::function<void(int)>;

// A BehaviorSubject holds a current value and replays it to each new subscriber.
class BehaviorSubject {
public:
    explicit BehaviorSubject(int seed) : current_(seed) {}

    void subscribe(Observer obs) {
        obs(current_);                  // replay the current value immediately
        observers_.push_back(std::move(obs));
    }

    void next(int value) {
        current_ = value;
        for (auto& obs : observers_) {
            obs(value);
        }
    }

private:
    int current_;
    std::vector<Observer> observers_;
};

int main() {
    BehaviorSubject subject(0);

    subject.subscribe([](int v) { std::cout << "A: " << v << '\n'; });
    subject.next(1);
    subject.subscribe([](int v) { std::cout << "B: " << v << '\n'; });
    subject.next(2);

    return 0;
}
