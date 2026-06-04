#include <iostream>
#include <functional>

int main() {
    std::function<int(int, int)> strategy;

    strategy = [](int a, int b) { return a + b; };
    int r1 = strategy(3, 4);

    strategy = [](int a, int b) { return a * b; };
    int r2 = strategy(3, 4);

    std::cout << r1 << ' ' << r2 << '\n';
}
