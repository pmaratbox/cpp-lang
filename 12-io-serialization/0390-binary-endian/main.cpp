#include <iostream>
#include <cstdint>

int main() {
    uint16_t value = 258;
    uint8_t high = static_cast<uint8_t>((value >> 8) & 0xFF);
    uint8_t low = static_cast<uint8_t>(value & 0xFF);
    uint16_t decoded = static_cast<uint16_t>(high * 256 + low);
    std::cout << static_cast<int>(high) << ' '
              << static_cast<int>(low) << ' '
              << decoded << '\n';
    return 0;
}
