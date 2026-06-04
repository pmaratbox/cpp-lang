#include <iostream>
#include <stdexcept>

struct BaseError : std::runtime_error {
    using std::runtime_error::runtime_error;
};

struct SpecificError : BaseError {
    SpecificError() : BaseError("specific") {}
};

int main() {
    try {
        throw SpecificError{};
    } catch (const BaseError&) {
        std::cout << "caught base\n";
    }
}
