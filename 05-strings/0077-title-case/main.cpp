#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string text = "hello world";
    bool start = true;
    for (char& ch : text) {
        if (ch == ' ') {
            start = true;
        } else if (start) {
            ch = (char)std::toupper((unsigned char)ch);
            start = false;
        }
    }
    std::cout << text << '\n';
    return 0;
}
