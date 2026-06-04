#include <iostream>

int main() {
    long result = 1;
    for (int i = 2; i <= 5; ++i) {
        result *= i;
    }
    std::cout << result << '\n';
}
