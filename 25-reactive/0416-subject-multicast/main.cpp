#include <functional>
#include <iostream>
#include <vector>

// A Subject multicasts each emission to every current observer.
class Subject {
    std::vector<std::function<void(int)>> observers_;

public:
    void subscribe(std::function<void(int)> obs) {
        observers_.push_back(std::move(obs));
    }

    void next(int value) {
        for (auto& obs : observers_) {
            obs(value);
        }
    }
};

int main() {
    Subject subject;

    subject.subscribe([](int v) { std::cout << "obs1: " << v << '\n'; });
    subject.subscribe([](int v) { std::cout << "obs2: " << v << '\n'; });

    subject.next(1);
    subject.next(2);

    return 0;
}
