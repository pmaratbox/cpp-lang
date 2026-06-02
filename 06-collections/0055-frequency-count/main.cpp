#include <iostream>
#include <map>
#include <string>

int main() {
    std::string word = "banana";
    std::map<char, int> counts;
    for (char ch : word) {
        counts[ch]++;
    }

    bool first = true;
    for (const auto& [ch, n] : counts) {
        if (!first) std::cout << ' ';
        std::cout << ch << ':' << n;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
