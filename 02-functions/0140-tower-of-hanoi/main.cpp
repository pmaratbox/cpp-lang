#include <iostream>

int moves(int n) {
    if (n == 0) return 0;
    return 2 * moves(n - 1) + 1;
}

int main() {
    std::cout << moves(3) << '\n';
}
