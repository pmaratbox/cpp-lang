#include <functional>
#include <iostream>

// A minimal push-based Observable: subscribe wires a producer to an observer.
// The producer returns an "unsubscribe" function; calling it stops the source.
using Unsubscribe = std::function<void()>;

// A push-based observer: next receives a value plus a handle to unsubscribe
// the source synchronously, so an operator can stop an unbounded producer.
struct Observer {
    std::function<void(int, const Unsubscribe&)> next;
    std::function<void()> complete;
};

using Observable = std::function<Unsubscribe(Observer)>;

// Unbounded source of the natural numbers 1,2,3,... A shared running flag is
// flipped false by the unsubscribe lambda, which the observer can call from
// inside next() to break the producer loop synchronously.
Observable naturals() {
    return [](Observer obs) -> Unsubscribe {
        auto running = std::make_shared<bool>(true);
        Unsubscribe stop = [running]() { *running = false; };
        int value = 1;
        while (*running) {
            obs.next(value++, stop);
        }
        return stop;
    };
}

// take(n): count emissions; after the nth, complete and unsubscribe the source.
Observable take(Observable source, int n) {
    return [source, n](Observer obs) -> Unsubscribe {
        auto count = std::make_shared<int>(0);
        Observer inner;
        inner.next = [obs, n, count](int v, const Unsubscribe& stop) {
            if (*count >= n) return;
            obs.next(v, stop);
            if (++(*count) >= n) {
                obs.complete();
                stop();  // unsubscribe so the infinite source stops being driven
            }
        };
        inner.complete = [obs]() { obs.complete(); };
        return source(inner);
    };
}

int main() {
    Observer printer;
    printer.next = [](int v, const Unsubscribe&) { std::cout << v << "\n"; };
    printer.complete = []() { std::cout << "completed\n"; };

    take(naturals(), 3)(printer);
    return 0;
}
