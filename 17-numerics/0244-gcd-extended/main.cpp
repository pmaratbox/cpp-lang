#include <iostream>
#include <tuple>

std::tuple<int, int, int> extgcd(int a, int b) {
    if (b == 0) return {a, 1, 0};
    auto [g, x1, y1] = extgcd(b, a % b);
    return {g, y1, x1 - (a / b) * y1};
}

int main() {
    auto [g, x, y] = extgcd(30, 12);
    std::cout << g << ' ' << x << ' ' << y << '\n';
    return 0;
}
