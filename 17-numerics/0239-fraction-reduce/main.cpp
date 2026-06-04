#include <iostream>
#include <numeric>

int main() {
    int num = 6, den = 8;
    int g = std::gcd(num, den);
    std::cout << num / g << '/' << den / g << '\n';
    return 0;
}
