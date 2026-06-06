#include <iostream>
#include <deque>
#include <functional>

// A push-based Observable built from scratch.
// An observer is just a callback receiving the next value.
struct Observable {
    std::function<void(const std::function<void(int)>&)> subscribe_fn;
    void subscribe(const std::function<void(int)>& on_next) const {
        subscribe_fn(on_next);
    }
};

Observable of(std::initializer_list<int> values) {
    std::deque<int> data(values);
    return Observable{[data](const std::function<void(int)>& on_next) {
        for (int v : data) on_next(v);
    }};
}

// zip: pair values by index, combining with x + y.
// Buffer each source in a per-source queue; whenever both queues are
// non-empty, dequeue one from each and emit combine(x, y).
Observable zip(const Observable& a, const Observable& b,
               const std::function<int(int, int)>& combine) {
    return Observable{[a, b, combine](const std::function<void(int)>& on_next) {
        auto qa = std::make_shared<std::deque<int>>();
        auto qb = std::make_shared<std::deque<int>>();
        auto drain = [qa, qb, combine, &on_next]() {
            while (!qa->empty() && !qb->empty()) {
                int x = qa->front(); qa->pop_front();
                int y = qb->front(); qb->pop_front();
                on_next(combine(x, y));
            }
        };
        a.subscribe([qa, &drain](int x) { qa->push_back(x); drain(); });
        b.subscribe([qb, &drain](int y) { qb->push_back(y); drain(); });
    }};
}

int main() {
    Observable a = of({1, 2, 3});
    Observable b = of({10, 20, 30});

    zip(a, b, [](int x, int y) { return x + y; })
        .subscribe([](int v) { std::cout << v << "\n"; });

    return 0;
}
