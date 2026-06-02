#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

bool anagram(std::string a, std::string b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::pair<std::string, std::string> pairs[] = {{"listen", "silent"}, {"hello", "world"}};
    for (auto& [a, b] : pairs) {
        std::cout << a << "/" << b << ": " << (anagram(a, b) ? "yes" : "no") << '\n';
    }
    return 0;
}
