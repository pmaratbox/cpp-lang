#include <iostream>

long long fastPow(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

int main() {
    std::cout << fastPow(2, 10) << '\n';
    return 0;
}
