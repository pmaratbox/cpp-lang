#include <iostream>

int main() {
    // Linear congruential generator: next = (5 * x + 3) mod 16, seeded at 1.
    unsigned x = 1;
    for (int i = 0; i < 3; ++i) {
        x = (5 * x + 3) % 16;
        std::cout << x << (i < 2 ? " " : "\n");
    }
    return 0;
}
