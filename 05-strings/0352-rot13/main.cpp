#include <iostream>
#include <string>

std::string rot13(std::string s) {
    for (char& c : s) {
        if (c >= 'a' && c <= 'z') c = 'a' + (c - 'a' + 13) % 26;
        else if (c >= 'A' && c <= 'Z') c = 'A' + (c - 'A' + 13) % 26;
    }
    return s;
}

int main() {
    std::string once = rot13("hello");
    std::string twice = rot13(once);
    std::cout << once << ' ' << twice << '\n';
}
