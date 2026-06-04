#include <iostream>
#include <string>

int main() {
    std::string program = "+++";
    int cell = 0;
    for (char c : program) {
        if (c == '+') ++cell;
        else if (c == '-') --cell;
    }
    std::cout << cell << '\n';
}
