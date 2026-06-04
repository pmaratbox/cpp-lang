#include <iostream>

int main() {
    int r = 1, g = 2, b = 3;
    int packed = (r << 16) | (g << 8) | b;
    int ur = (packed >> 16) & 0xff;
    int ug = (packed >> 8) & 0xff;
    int ub = packed & 0xff;
    std::cout << ur << ' ' << ug << ' ' << ub << '\n';
}
