#include <iostream>
#include <cstdint>

std::uint8_t rol8(std::uint8_t x, int n) {
    return static_cast<std::uint8_t>((x << n) | (x >> (8 - n)));
}

int main() {
    std::cout << static_cast<int>(rol8(1, 1)) << ' '
              << static_cast<int>(rol8(128, 1)) << '\n';
}
