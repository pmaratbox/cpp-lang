#include <iostream>
#include <array>

int main() {
    std::array<int, 3> coeffs{2, 3, 1};
    int x = 2;
    int result = 0;
    for (int c : coeffs) {
        result = result * x + c;
    }
    std::cout << result << '\n';
    return 0;
}
