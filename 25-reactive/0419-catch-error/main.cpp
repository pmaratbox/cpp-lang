#include <functional>
#include <initializer_list>
#include <iostream>
#include <vector>

// A push-based Observable implemented from scratch.
struct Observer {
    std::function<void(int)> next;
    std::function<void()> error;
    std::function<void()> complete;
};

// An Observable is a function that wires a producer to an observer.
using Observable = std::function<void(const Observer &)>;

static Observable of(std::initializer_list<int> values, bool fail) {
    std::vector<int> vs(values);
    return [vs, fail](const Observer &o) {
        for (int v : vs) o.next(v);
        if (fail)
            o.error();
        else
            o.complete();
    };
}

// On an error from the source, switch to the fallback stream.
static Observable catchError(Observable source, Observable fallback) {
    return [source, fallback](const Observer &o) {
        Observer relay{
            o.next,
            [&]() { fallback(o); },
            o.complete,
        };
        source(relay);
    };
}

int main() {
    Observable source = of({1, 2}, true);
    Observable fallback = of({9}, false);

    catchError(source, fallback)(Observer{
        [](int v) { std::cout << v << "\n"; },
        []() { std::cout << "error\n"; },
        []() {},
    });

    return 0;
}
