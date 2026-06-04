#include <iostream>

int main() {
    for (int n = 0; n < 4; ++n) {
        int g = n ^ (n >> 1);
        std::cout << g << (n < 3 ? " " : "\n");
    }
}
