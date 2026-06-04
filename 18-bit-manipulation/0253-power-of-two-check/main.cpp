#include <iostream>

bool is_power_of_two(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    std::cout << (is_power_of_two(16) ? "yes" : "no") << ' '
              << (is_power_of_two(18) ? "yes" : "no") << '\n';
}
