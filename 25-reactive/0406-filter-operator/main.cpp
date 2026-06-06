#include <functional>
#include <iostream>
#include <vector>

// A push-based Observable implemented from scratch: subscribe wires a
// producer to an observer's next/complete callbacks.
struct Observer {
    std::function<void(int)> next;
    std::function<void()> complete;
};

using Observable = std::function<void(const Observer&)>;

Observable from(std::vector<int> values) {
    return [values = std::move(values)](const Observer& obs) {
        for (int v : values) obs.next(v);
        obs.complete();
    };
}

Observable filter(Observable source, std::function<bool(int)> pred) {
    return [source = std::move(source), pred = std::move(pred)](const Observer& obs) {
        source(Observer{
            [&](int v) { if (pred(v)) obs.next(v); },
            [&]() { obs.complete(); },
        });
    };
}

int main() {
    auto source = from({1, 2, 3, 4, 5, 6});
    auto evens = filter(source, [](int v) { return v % 2 == 0; });

    evens(Observer{
        [](int v) { std::cout << v << '\n'; },
        []() {},
    });

    return 0;
}
