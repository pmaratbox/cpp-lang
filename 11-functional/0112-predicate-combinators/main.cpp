#include <iostream>
#include <functional>

using Pred = std::function<bool(int)>;

Pred andP(Pred a, Pred b) {
    return [a, b](int x) { return a(x) && b(x); };
}

int main() {
    Pred isEven = [](int x) { return x % 2 == 0; };
    Pred isPositive = [](int x) { return x > 0; };
    auto p = andP(isEven, isPositive);
    std::cout << (p(4) ? "yes" : "no") << ' '
              << (p(-4) ? "yes" : "no") << '\n';
}
