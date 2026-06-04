#include <iostream>

void countdown(int n) {
    std::cout << n;
    if (n > 1) {
        std::cout << ' ';
        countdown(n - 1);
    }
}

int main() {
    countdown(5);
    std::cout << '\n';
}
