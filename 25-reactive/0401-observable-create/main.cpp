#include <functional>
#include <iostream>

struct Observer {
    std::function<void(int)> next;
    std::function<void()> complete;
};

// An Observable is a function taking an observer.
using Observable = std::function<void(const Observer&)>;

int main() {
    Observable observable = [](const Observer& obs) {
        obs.next(1);
        obs.next(2);
        obs.next(3);
        obs.complete();
    };

    Observer observer{
        [](int value) { std::cout << value << '\n'; },
        []() { std::cout << "done" << '\n'; },
    };

    observable(observer);
    return 0;
}
