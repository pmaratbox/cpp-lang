#include <functional>
#include <iostream>

int factCPS(int n, std::function<int(int)> k) {
    if (n == 0) return k(1);
    return factCPS(n - 1, [n, k](int acc) { return k(n * acc); });
}

int main() {
    std::cout << factCPS(5, [](int x) { return x; }) << '\n';
}
