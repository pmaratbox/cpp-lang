#include <iostream>

int main() {
    auto naturals = [n = 0]() mutable { return ++n; };
    int taken = 0;
    bool first = true;
    while (taken < 3) {
        int x = naturals();
        if (x % 2 == 0) {
            if (!first) std::cout << ' ';
            std::cout << x;
            first = false;
            ++taken;
        }
    }
    std::cout << '\n';
}
