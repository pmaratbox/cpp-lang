#include <iostream>

long factorial(long n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    std::cout << "factorial(5) = " << factorial(5) << '\n';
    return 0;
}
