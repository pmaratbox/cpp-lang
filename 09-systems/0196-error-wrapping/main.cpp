#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    try {
        try {
            throw std::runtime_error("inner");
        } catch (const std::exception& inner) {
            // Wrap the inner error with outer context.
            throw std::runtime_error(std::string("outer: ") + inner.what());
        }
    } catch (const std::exception& outer) {
        std::cout << outer.what() << "\n";
    }
    return 0;
}
