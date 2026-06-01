#include <bitset>
#include <iostream>

int main() {
    int n = 255;
    std::cout << "hex: " << std::hex << n << '\n';
    std::cout << "oct: " << std::oct << n << '\n';
    std::cout << "bin: " << std::bitset<8>(n) << '\n';
    return 0;
}
