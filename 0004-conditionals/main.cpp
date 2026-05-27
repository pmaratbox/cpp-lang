#include <iostream>

int main() {
    int n = 7;

    if (n < 10) {
        std::cout << n << " is less than 10\n";
    } else if (n == 10) {
        std::cout << n << " is equal to 10\n";
    } else {
        std::cout << n << " is greater than 10\n";
    }
    return 0;
}
