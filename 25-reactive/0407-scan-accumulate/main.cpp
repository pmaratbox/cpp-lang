#include <functional>
#include <iostream>
#include <vector>

// A minimal push-based Observable: subscribe wires a producer to an observer.
template <typename T>
struct Observer {
    std::function<void(const T&)> next;
    std::function<void()> complete;
};

template <typename T>
struct Observable {
    std::function<void(Observer<T>)> subscribe;
};

// Emit a fixed sequence of values, then complete.
template <typename T>
Observable<T> of(std::vector<T> values) {
    return Observable<T>{[values](Observer<T> obs) {
        for (const auto& v : values) obs.next(v);
        obs.complete();
    }};
}

// scan: emit the running accumulation seeded with acc.
template <typename T, typename A>
Observable<A> scan(Observable<T> source, A acc, std::function<A(A, T)> f) {
    return Observable<A>{[source, acc, f](Observer<A> obs) {
        auto state = std::make_shared<A>(acc);
        source.subscribe(Observer<T>{
            [state, f, obs](const T& v) {
                *state = f(*state, v);
                obs.next(*state);
            },
            [obs]() { obs.complete(); }});
    }};
}

int main() {
    auto source = of<int>({1, 2, 3, 4});
    auto sums = scan<int, int>(source, 0,
                               [](int a, int v) { return a + v; });
    sums.subscribe(Observer<int>{
        [](const int& s) { std::cout << s << "\n"; },
        []() {}});
    return 0;
}
