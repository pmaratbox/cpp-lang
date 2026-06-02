#include <iostream>
#include <string>

bool is_palindrome(const std::string& s) {
    std::string reversed(s.rbegin(), s.rend());
    return s == reversed;
}

int main() {
    for (std::string word : {std::string("level"), std::string("hello")}) {
        std::cout << word << ": " << (is_palindrome(word) ? "yes" : "no") << '\n';
    }
    return 0;
}
