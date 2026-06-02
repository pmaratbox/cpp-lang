#include <iostream>
#include <tuple>
#include <utility>

int main() {
    int a = 1, b = 2;
    std::tie(a, b) = std::make_tuple(b, a);
    std::cout << a << ' ' << b << '\n';

    auto pair = std::make_pair(3, 4);
    auto [x, y] = pair;
    std::cout << x << ' ' << y << '\n';
    return 0;
}
