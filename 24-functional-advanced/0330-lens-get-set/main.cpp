#include <functional>
#include <iostream>

struct Inner { int b; };
struct Outer { Inner a; };

template <typename S, typename A>
struct Lens {
    std::function<A(const S&)> get;
    std::function<S(const S&, A)> set;
};

int main() {
    Lens<Outer, int> bLens{
        [](const Outer& o) { return o.a.b; },
        [](const Outer& o, int v) { Outer copy = o; copy.a.b = v; return copy; }};

    Outer original{{1}};
    int got = bLens.get(original);
    Outer updated = bLens.set(original, 2);

    std::cout << got << ' ' << bLens.get(updated) << '\n';
}
