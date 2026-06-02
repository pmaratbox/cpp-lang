#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::map<std::string, int> scores = {{"a", 3}, {"b", 1}, {"c", 2}};
    std::vector<std::pair<std::string, int>> entries(scores.begin(), scores.end());
    std::sort(entries.begin(), entries.end(), [](auto& x, auto& y) { return x.second < y.second; });
    bool first = true;
    for (auto& [k, v] : entries) {
        if (!first) std::cout << ' ';
        std::cout << k << ':' << v;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
