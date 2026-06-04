#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

int main() {
    std::vector<std::string> words = {"eat", "tea", "tan", "ate", "nat"};
    std::unordered_set<std::string> keys;
    for (std::string w : words) {
        std::sort(w.begin(), w.end());
        keys.insert(w);
    }
    std::cout << keys.size() << "\n";
}
