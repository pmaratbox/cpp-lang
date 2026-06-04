#include <iostream>
#include <string>

int main() {
    long hex = std::stol("ff", nullptr, 16);
    long bin = std::stol("101", nullptr, 2);
    std::cout << hex << ' ' << bin << '\n';
}
