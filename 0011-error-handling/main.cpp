#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("division by zero");
    }
    return a / b;
}

int main() {
    std::cout << "10 / 2 = " << divide(10, 2) << '\n';

    try {
        divide(10, 0);
    } catch (const std::runtime_error &e) {
        std::cout << "error: " << e.what() << '\n';
    }
    return 0;
}
