#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("boom");
    } catch (const std::exception&) {
        std::cout << "caught\n";
    }
    // C++ has no `finally`; an explicit cleanup block (or RAII) emulates it.
    std::cout << "cleanup\n";
    return 0;
}
