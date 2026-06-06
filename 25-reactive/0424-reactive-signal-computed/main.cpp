#include <functional>
#include <iostream>
#include <vector>

// A writable signal: holds a value and a list of subscriber callbacks.
class Signal {
public:
    explicit Signal(int value) : value_(value) {}

    int operator()() const { return value_; }

    void set(int value) {
        value_ = value;
        for (const auto& sub : subscribers_) sub();
    }

    void subscribe(std::function<void()> cb) {
        subscribers_.push_back(std::move(cb));
    }

private:
    int value_;
    std::vector<std::function<void()>> subscribers_;
};

// A derived computed: recomputes via a callback registered on its dependencies,
// caching the result until a dependency notifies it.
class Computed {
public:
    Computed(std::function<int()> compute, std::vector<Signal*> deps)
        : compute_(std::move(compute)) {
        recompute();
        for (Signal* dep : deps) dep->subscribe([this] { recompute(); });
    }

    int operator()() const { return cached_; }

private:
    void recompute() { cached_ = compute_(); }

    std::function<int()> compute_;
    int cached_ = 0;
};

int main() {
    Signal a(2), b(3);
    Computed sum([&] { return a() + b(); }, {&a, &b});

    std::cout << sum() << "\n";  // 5
    a.set(10);                   // notifies subscribers -> sum recomputes
    std::cout << sum() << "\n";  // 13

    return 0;
}
