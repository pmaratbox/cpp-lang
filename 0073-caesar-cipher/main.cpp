#include <iostream>
#include <string>

int main() {
    std::string text = "abc";
    int shift = 1;
    for (char& ch : text) {
        ch = (char)((ch - 'a' + shift) % 26 + 'a');
    }
    std::cout << text << '\n';
    return 0;
}
