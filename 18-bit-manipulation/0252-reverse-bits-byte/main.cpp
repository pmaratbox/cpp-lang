#include <iostream>
#include <cstdint>

std::uint8_t reverse(std::uint8_t x) {
    std::uint8_t r = 0;
    for (int i = 0; i < 8; ++i) {
        r = static_cast<std::uint8_t>((r << 1) | (x & 1));
        x >>= 1;
    }
    return r;
}

int main() {
    std::cout << static_cast<int>(reverse(1)) << '\n';
}
