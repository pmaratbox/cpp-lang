#include <functional>
#include <iostream>

int main() {
    auto naturals = [n = 0]() mutable { return ++n; };
    for (int i = 0; i < 5; ++i) {
        std::cout << naturals();
        if (i < 4) std::cout << ' ';
    }
    std::cout << '\n';
}
