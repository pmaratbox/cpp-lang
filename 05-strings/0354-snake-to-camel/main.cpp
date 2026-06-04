#include <iostream>
#include <string>
#include <cctype>

int main() {
    const std::string s = "hello_world";
    std::string out;
    bool capNext = false;
    for (char c : s) {
        if (c == '_') {
            capNext = true;
        } else if (capNext) {
            out += static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
            capNext = false;
        } else {
            out += c;
        }
    }
    std::cout << out << '\n';
}
