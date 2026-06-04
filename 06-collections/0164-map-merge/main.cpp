#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> result{{"a", 1}, {"b", 2}};
    std::map<std::string, int> right{{"b", 3}, {"c", 4}};
    for (const auto& [k, v] : right) result[k] = v;  // right wins

    bool first = true;
    for (const auto& [k, v] : result) {
        if (!first) std::cout << ' ';
        std::cout << k << ':' << v;
        first = false;
    }
    std::cout << '\n';
}
