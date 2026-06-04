#include <iostream>
#include <iomanip>

int main() {
    int total = 10 * 60 + 45 + 90;
    int h = (total / 60) % 24;
    int m = total % 60;
    std::cout << std::setfill('0')
              << std::setw(2) << h << ':'
              << std::setw(2) << m << '\n';
}
