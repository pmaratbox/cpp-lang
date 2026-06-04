#include <iostream>
#include <numeric>

int main() {
    int a = 4, b = 6;
    int result = a / std::gcd(a, b) * b;
    std::cout << result << '\n';
}
