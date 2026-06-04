#include <iostream>
#include <bit>

int main() {
    unsigned a = 1, b = 4;
    int dist = std::popcount(a ^ b);
    std::cout << dist << '\n';
}
