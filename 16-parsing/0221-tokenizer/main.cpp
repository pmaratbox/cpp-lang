#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main() {
    std::string src = "1 + 2";
    std::vector<std::string> tokens;
    for (size_t i = 0; i < src.size(); ++i) {
        char c = src[i];
        if (std::isspace(static_cast<unsigned char>(c))) continue;
        if (std::isdigit(static_cast<unsigned char>(c))) tokens.push_back("NUM");
        else if (c == '+') tokens.push_back("PLUS");
    }
    for (size_t i = 0; i < tokens.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << tokens[i];
    }
    std::cout << '\n';
}
