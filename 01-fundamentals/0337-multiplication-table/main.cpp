#include <iostream>

int main() {
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            std::cout << i * j;
            if (j < 3) std::cout << ' ';
        }
        std::cout << '\n';
    }
}
