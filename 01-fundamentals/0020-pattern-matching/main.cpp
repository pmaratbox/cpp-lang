#include <iostream>
#include <string_view>

std::string_view word(int n) {
    switch (n) {
        case 1: return "one";
        case 2: return "two";
        default: return "many";
    }
}

int main() {
    for (int n : {1, 2, 5}) {
        std::cout << n << ": " << word(n) << '\n';
    }
    return 0;
}
