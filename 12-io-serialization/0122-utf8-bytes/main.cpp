#include <iostream>
#include <string>

int main() {
    const std::string s = "Hi";

    bool first = true;
    for (unsigned char c : s) {
        if (!first) std::cout << ' ';
        std::cout << static_cast<int>(c);
        first = false;
    }
    std::cout << '\n';
    return 0;
}
