#include <iostream>

int main() {
    int n = 1234, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    std::cout << reversed << '\n';
}
