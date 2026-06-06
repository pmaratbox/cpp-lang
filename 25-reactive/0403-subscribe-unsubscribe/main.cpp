#include <functional>
#include <iostream>
#include <memory>

// A Subscription shares a "closed" flag; unsubscribe() sets it.
struct Subscription {
    std::shared_ptr<bool> closed = std::make_shared<bool>(false);
    void unsubscribe() { *closed = true; }
};

struct Observer {
    std::function<void(int)> next;
};

// An Observable wraps a producer that pushes values into an observer,
// checking the subscription's closed flag before each delivery.
struct Observable {
    std::function<void(const Observer&, const std::shared_ptr<bool>&)> producer;

    // The Subscription is created first so the observer can capture it and
    // call unsubscribe() during synchronous delivery.
    Subscription subscribe(std::function<Observer(const Subscription&)> make) const {
        Subscription sub;
        Observer observer = make(sub);
        producer(observer, sub.closed);
        return sub;
    }
};

int main() {
    Observable source{[](const Observer& obs, const std::shared_ptr<bool>& closed) {
        for (int value : {1, 2, 3, 4}) {
            if (*closed) return;  // stop delivering once unsubscribed
            obs.next(value);
        }
    }};

    source.subscribe([](const Subscription& sub) {
        return Observer{[sub](int value) {
            std::cout << value << "\n";
            if (value == 2) {
                Subscription copy = sub;
                copy.unsubscribe();  // no later values delivered
            }
        }};
    });

    return 0;
}
