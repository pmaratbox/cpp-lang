#include <iostream>

long long binomial(int n, int k) {
    if (k > n - k) k = n - k;
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result = result * (n - i) / (i + 1);
    }
    return result;
}

int main() {
    std::cout << binomial(5, 2) << '\n';
    return 0;
}
