#include <iostream>

int main() {
    int a = 6, b = 3;
    std::cout << "and: " << (a & b) << '\n';
    std::cout << "or: " << (a | b) << '\n';
    std::cout << "xor: " << (a ^ b) << '\n';
    std::cout << "shift: " << (a << 1) << '\n';
    return 0;
}
