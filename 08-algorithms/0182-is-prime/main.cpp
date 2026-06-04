#include <iostream>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int main() {
    std::cout << (is_prime(7) ? "yes" : "no") << ' '
              << (is_prime(9) ? "yes" : "no") << '\n';
}
