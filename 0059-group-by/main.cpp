#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words = {"one", "two", "three"};
    std::map<std::size_t, std::vector<std::string>> groups;
    for (const auto& w : words) {
        groups[w.size()].push_back(w);
    }

    bool first = true;
    for (const auto& [len, ws] : groups) {
        if (!first) std::cout << ' ';
        std::cout << len << ":[";
        for (std::size_t i = 0; i < ws.size(); i++) {
            if (i > 0) std::cout << ',';
            std::cout << ws[i];
        }
        std::cout << ']';
        first = false;
    }
    std::cout << '\n';
    return 0;
}
