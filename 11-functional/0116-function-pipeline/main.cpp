#include <iostream>
#include <functional>

using Fn = std::function<int(int)>;

Fn pipe(Fn f, Fn g, Fn h) {
    return [f, g, h](int x) { return h(g(f(x))); };
}

int main() {
    Fn inc = [](int x) { return x + 1; };
    Fn dbl = [](int x) { return x * 2; };
    Fn neg = [](int x) { return -x; };
    std::cout << pipe(inc, dbl, neg)(3) << '\n';
}
