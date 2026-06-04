#include <iostream>
#include <numeric>

int main() {
    int n1 = 1, d1 = 2, n2 = 1, d2 = 3;
    int num = n1 * d2 + n2 * d1;
    int den = d1 * d2;
    int g = std::gcd(num, den);
    std::cout << num / g << '/' << den / g << '\n';
    return 0;
}
