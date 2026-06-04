#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

int main() {
    std::vector<std::pair<std::string, std::string>> rows = {
        {"a", "1"}, {"bb", "22"}
    };

    std::size_t w = 0;
    for (const auto& [c1, c2] : rows)
        w = std::max(w, c1.size());

    for (const auto& [c1, c2] : rows) {
        std::string padded = c1;
        padded.resize(w, ' ');
        std::cout << padded << " | " << c2 << '\n';
    }
    return 0;
}
