#include <iostream>
#include <string>

int main() {
    std::string text = "aaabbc";
    std::string result;
    size_t i = 0;
    while (i < text.size()) {
        char ch = text[i];
        int count = 0;
        while (i < text.size() && text[i] == ch) {
            count++;
            i++;
        }
        result += ch + std::to_string(count);
    }
    std::cout << result << '\n';
    return 0;
}
