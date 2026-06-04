#include <iostream>

int main() {
    int x = 1;
    for (int i = 0; i < 5; ++i) {
        if (i != 0) std::cout << " ";
        std::cout << x;
        x *= 2;
    }
    std::cout << "\n";
}
