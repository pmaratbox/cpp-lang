#include <functional>
#include <iostream>
#include <string>
#include <vector>

// A minimal push-based Observer: just a callback for the next value.
using Observer = std::function<void(int)>;

// Cold observable: subscribing re-runs the producer for each subscriber.
struct ColdObservable {
    std::function<void(const Observer &)> producer;
    void subscribe(const Observer &obs) const { producer(obs); }
};

// Hot observable: a single shared producer, multicast to current subscribers.
// Late subscribers only receive values emitted after they subscribe.
struct HotObservable {
    std::vector<Observer> observers;
    void subscribe(const Observer &obs) { observers.push_back(obs); }
    void emit(int value) {
        for (const auto &obs : observers) obs(value);
    }
};

static std::string join(const std::vector<int> &xs) {
    std::string out;
    for (size_t i = 0; i < xs.size(); ++i) {
        if (i) out += ' ';
        out += std::to_string(xs[i]);
    }
    return out;
}

int main() {
    // COLD: each subscriber triggers an independent run of the producer.
    ColdObservable cold{[](const Observer &obs) {
        obs(1);
        obs(2);
        obs(3);
    }};

    std::vector<int> coldA, coldB;
    cold.subscribe([&](int v) { coldA.push_back(v); });
    cold.subscribe([&](int v) { coldB.push_back(v); });

    std::cout << "cold A: " << join(coldA) << '\n';
    std::cout << "cold B: " << join(coldB) << '\n';

    // HOT: one shared execution; B subscribes after 1 was already emitted.
    HotObservable hot;
    std::vector<int> hotA, hotB;

    hot.subscribe([&](int v) { hotA.push_back(v); });
    hot.emit(1);
    hot.subscribe([&](int v) { hotB.push_back(v); });
    hot.emit(2);
    hot.emit(3);

    std::cout << "hot A: " << join(hotA) << '\n';
    std::cout << "hot B: " << join(hotB) << '\n';

    return 0;
}
