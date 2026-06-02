#include <iostream>
#include <stdexcept>

class TooLargeError : public std::runtime_error {
public:
    TooLargeError() : std::runtime_error("value too large") {}
};

void check(int n) {
    if (n > 100) {
        throw TooLargeError();
    }
}

int main() {
    try {
        check(200);
    } catch (const TooLargeError &e) {
        std::cout << "error: " << e.what() << '\n';
    }
    return 0;
}
