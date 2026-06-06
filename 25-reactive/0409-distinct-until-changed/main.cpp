#include <functional>
#include <iostream>
#include <optional>
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

// Source emitting a fixed sequence of values synchronously.
template <typename T>
Observable<T> from(std::vector<T> values) {
    return Observable<T>{[values](Observer<T> obs) {
        for (const auto& v : values) obs.next(v);
        obs.complete();
    }};
}

// distinctUntilChanged: forward a value only when it differs from the last
// emitted one.
template <typename T>
Observable<T> distinctUntilChanged(Observable<T> source) {
    return Observable<T>{[source](Observer<T> obs) {
        auto last = std::make_shared<std::optional<T>>();
        source.subscribe(Observer<T>{
            [obs, last](const T& v) {
                if (!last->has_value() || last->value() != v) {
                    *last = v;
                    obs.next(v);
                }
            },
            [obs]() { obs.complete(); }});
    }};
}

int main() {
    auto source = from<int>({1, 1, 2, 2, 2, 3, 1});
    distinctUntilChanged(source).subscribe(Observer<int>{
        [](const int& v) { std::cout << v << "\n"; },
        []() {}});
    return 0;
}
