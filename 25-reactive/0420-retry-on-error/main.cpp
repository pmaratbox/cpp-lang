#include <functional>
#include <iostream>
#include <string>

// A minimal push-based Observable implemented from scratch.
struct Observer {
    std::function<void(const std::string&)> next;
    std::function<void()> error;
    std::function<void()> complete;
};

struct Observable {
    std::function<void(const Observer&)> subscribe;
};

// retry(n): on error, resubscribe to the source up to n more times.
Observable retry(const Observable& source, int n) {
    return Observable{[source, n](const Observer& obs) {
        std::function<void(int)> attempt = [&](int remaining) {
            Observer relay{
                obs.next,
                [&, remaining]() {
                    if (remaining > 0) {
                        attempt(remaining - 1);
                    } else {
                        obs.error();
                    }
                },
                obs.complete};
            source.subscribe(relay);
        };
        attempt(n);
    }};
}

int main() {
    int count = 0;

    // Source: each subscription increments the attempt counter, prints it,
    // errors for k<3 and succeeds (emits "ok", completes) for k==3.
    Observable source{[&count](const Observer& obs) {
        ++count;
        std::cout << "attempt " << count << "\n";
        if (count < 3) {
            obs.error();
        } else {
            obs.next("ok");
            obs.complete();
        }
    }};

    Observable retried = retry(source, 2);

    retried.subscribe(Observer{
        [](const std::string& v) { std::cout << v << "\n"; },
        []() { std::cout << "error\n"; },
        []() {}});

    return 0;
}
