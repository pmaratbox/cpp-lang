#include <iostream>
#include <iomanip>

int main() {
    int y = 2026, m = 6, d = 4;
    std::cout << std::setfill('0')
              << std::setw(4) << y << '-'
              << std::setw(2) << m << '-'
              << std::setw(2) << d << '\n';
}
