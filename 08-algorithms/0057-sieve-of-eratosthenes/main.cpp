#include <iostream>
#include <vector>

int main() {
    int n = 10;
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    bool first = true;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            if (!first) std::cout << ' ';
            std::cout << i;
            first = false;
        }
    }
    std::cout << '\n';
    return 0;
}
