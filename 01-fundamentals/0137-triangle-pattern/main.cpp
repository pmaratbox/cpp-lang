#include <iostream>
#include <string>

int main() {
    for (int i = 1; i <= 3; ++i) {
        std::cout << std::string(i, '*') << '\n';
    }
}
