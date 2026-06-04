#include <iostream>

template <typename F>
int applyTwice(F f, int x) {
    return f(f(x));
}

int main() {
    auto inc = [](int x) { return x + 1; };
    std::cout << applyTwice(inc, 3) << '\n';
}
