#include <iostream>

bool is_leap(int y) {
    return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

int main() {
    std::cout << (is_leap(2000) ? "yes" : "no") << ' '
              << (is_leap(1900) ? "yes" : "no") << ' '
              << (is_leap(2024) ? "yes" : "no") << '\n';
}
