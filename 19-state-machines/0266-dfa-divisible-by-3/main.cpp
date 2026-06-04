#include <iostream>
#include <string>

bool divisibleBy3(const std::string& bits) {
    int state = 0;
    for (char c : bits) {
        int b = c - '0';
        state = (state * 2 + b) % 3;
    }
    return state == 0;
}

int main() {
    std::cout << (divisibleBy3("110") ? "yes" : "no") << ' '
              << (divisibleBy3("100") ? "yes" : "no") << '\n';
    return 0;
}
