#include <iostream>

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    std::cout << (isPerfect(6) ? "yes" : "no") << ' '
              << (isPerfect(8) ? "yes" : "no") << '\n';
    return 0;
}
