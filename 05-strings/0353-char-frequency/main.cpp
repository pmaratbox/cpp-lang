#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

int main() {
    const std::string s = "aab";
    std::vector<char> order;
    std::unordered_map<char, int> counts;
    for (char c : s) {
        if (counts.find(c) == counts.end()) order.push_back(c);
        ++counts[c];
    }
    bool first = true;
    for (char c : order) {
        if (!first) std::cout << ' ';
        std::cout << c << ':' << counts[c];
        first = false;
    }
    std::cout << '\n';
}
