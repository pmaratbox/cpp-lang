#include <functional>
#include <iostream>

using Fn = std::function<int(int)>;
using Gen = std::function<Fn(Fn)>;

// fix g = g (fix g): the fixed point of a non-recursive generator.
Fn fix(Gen g) {
    return [g](int n) { return g(fix(g))(n); };
}

int main() {
    // Non-recursive generator: given "self", returns factorial.
    Gen factGen = [](Fn self) -> Fn {
        return [self](int n) { return n == 0 ? 1 : n * self(n - 1); };
    };

    Fn factorial = fix(factGen);
    std::cout << factorial(5) << '\n';
}
