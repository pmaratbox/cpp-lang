#include <iostream>
#include <string>

int main() {
    std::string word = "hello";
    std::string vowels = "aeiou";
    int count = 0;
    for (char ch : word) {
        if (vowels.find(ch) != std::string::npos) count++;
    }
    std::cout << count << '\n';
    return 0;
}
