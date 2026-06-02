#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
    std::cout << "sqrt: " << static_cast<int>(std::sqrt(16)) << '\n';
    std::cout << "pow: " << static_cast<int>(std::pow(2, 10)) << '\n';
    std::cout << "abs: " << std::abs(-5) << '\n';
    std::cout << "max: " << std::max(3, 9) << '\n';
    return 0;
}
