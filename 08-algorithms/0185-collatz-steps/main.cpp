#include <iostream>

int main() {
    int n = 6, steps = 0;
    while (n != 1) {
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
        ++steps;
    }
    std::cout << steps << '\n';
}
