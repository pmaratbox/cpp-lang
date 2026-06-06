#include <functional>
#include <iostream>
#include <vector>

// A minimal push-based Observable implemented from scratch.
template <typename T>
struct Observer {
    std::function<void(T)> next;
};

template <typename T>
struct Observable {
    std::function<void(const Observer<T>&)> subscribe;
};

// map(source, f) returns a new Observable whose next forwards f(value).
template <typename T, typename F>
Observable<T> map(const Observable<T>& source, F f) {
    return Observable<T>{[source, f](const Observer<T>& obs) {
        source.subscribe(Observer<T>{[obs, f](T value) { obs.next(f(value)); }});
    }};
}

int main() {
    // Source emits 1, 2, 3, 4.
    Observable<int> source{[](const Observer<int>& obs) {
        for (int v : {1, 2, 3, 4}) obs.next(v);
    }};

    // f = *2.
    auto doubled = map(source, [](int x) { return x * 2; });

    doubled.subscribe(Observer<int>{[](int v) { std::cout << v << "\n"; }});

    return 0;
}
