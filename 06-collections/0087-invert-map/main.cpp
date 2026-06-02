#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> m = {{"a", 1}, {"b", 2}, {"c", 3}};
    std::map<int, std::string> inverted;
    for (auto& [k, v] : m) {
        inverted[v] = k;
    }
    bool first = true;
    for (auto& [k, v] : inverted) {
        if (!first) std::cout << ' ';
        std::cout << k << ':' << v;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
