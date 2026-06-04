#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string text = "a b\nc";
    long chars = static_cast<long>(text.size());
    long lines = 1;
    long words = 0;
    bool in_word = false;
    for (char c : text) {
        if (c == '\n') ++lines;
        if (std::isspace(static_cast<unsigned char>(c))) {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            ++words;
        }
    }
    std::cout << words << ' ' << lines << ' ' << chars << '\n';
}
