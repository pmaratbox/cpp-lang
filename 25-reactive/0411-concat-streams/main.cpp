#include <functional>
#include <iostream>
#include <vector>

// A minimal push-based Observable implemented from scratch.
struct Observer {
    std::function<void(int)> next;
    std::function<void()> complete;
};

struct Observable {
    std::function<void(const Observer&)> subscribe;
};

// Emits the given values synchronously, then completes.
Observable of(std::vector<int> values) {
    return Observable{[values](const Observer& obs) {
        for (int v : values) obs.next(v);
        obs.complete();
    }};
}

// concat(a, b): subscribe to a; on a.complete, subscribe to b;
// on b.complete, complete.
Observable concat(Observable a, Observable b) {
    return Observable{[a, b](const Observer& obs) {
        a.subscribe(Observer{
            obs.next,
            [b, &obs]() {
                b.subscribe(Observer{obs.next, obs.complete});
            }});
    }};
}

int main() {
    Observable a = of({1, 2});
    Observable b = of({3, 4});

    concat(a, b).subscribe(Observer{
        [](int v) { std::cout << v << '\n'; },
        []() {}});

    return 0;
}
