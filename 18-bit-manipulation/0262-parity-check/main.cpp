#include <iostream>
#include <bit>

int parity(unsigned n) {
    return std::popcount(n) & 1;
}

int main() {
    std::cout << parity(7) << ' ' << parity(5) << '\n';
}
