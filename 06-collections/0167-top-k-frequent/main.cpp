#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

int main() {
    std::vector<std::string> items{"a", "b", "a", "c", "b", "a"};
    std::map<std::string, int> counts;
    for (const auto& x : items) ++counts[x];

    std::vector<std::pair<std::string, int>> entries(counts.begin(), counts.end());
    std::stable_sort(entries.begin(), entries.end(),
                     [](const auto& l, const auto& r) { return l.second > r.second; });

    for (std::size_t i = 0; i < 2 && i < entries.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << entries[i].first;
    }
    std::cout << '\n';
}
