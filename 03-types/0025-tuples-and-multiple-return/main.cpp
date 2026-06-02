#include <iostream>
#include <utility>

std::pair<int, int> min_max(int a, int b) {
    if (a < b) {
        return {a, b};
    }
    return {b, a};
}

int main() {
    auto [lo, hi] = min_max(3, 7);
    std::cout << "min: " << lo << '\n';
    std::cout << "max: " << hi << '\n';
    return 0;
}
