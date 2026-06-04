#include <iostream>
#include <stdexcept>

void check(int arg) {
    // Precondition: arg must be positive.
    if (arg > 0) {
        std::cout << "ok\n";
    } else {
        throw std::invalid_argument("must be positive");
    }
}

int main() {
    check(5);
    try {
        check(-1);
    } catch (const std::exception& e) {
        std::cout << "error: " << e.what() << "\n";
    }
    return 0;
}
