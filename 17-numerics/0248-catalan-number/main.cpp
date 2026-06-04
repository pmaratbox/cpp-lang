#include <iostream>

int main() {
    long long c = 1;
    for (int n = 0; n < 5; ++n) {
        std::cout << c;
        std::cout << (n == 4 ? '\n' : ' ');
        c = c * 2 * (2 * n + 1) / (n + 2);
    }
    return 0;
}
