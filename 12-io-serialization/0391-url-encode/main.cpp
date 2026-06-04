#include <iostream>
#include <string>
#include <cctype>

static bool is_unreserved(unsigned char c) {
    return std::isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~';
}

int main() {
    std::string input = "a b&c";
    const char* hex = "0123456789ABCDEF";
    std::string out;
    for (unsigned char c : input) {
        if (is_unreserved(c)) {
            out += static_cast<char>(c);
        } else {
            out += '%';
            out += hex[(c >> 4) & 0xF];
            out += hex[c & 0xF];
        }
    }
    std::cout << out << '\n';
    return 0;
}
