#include <iostream>
#include <string>
#include <vector>
#include <utility>

int main() {
    std::string json = "{\"x\":1,\"y\":2}";
    std::vector<std::pair<std::string, std::string>> entries;
    size_t i = 0;
    while (i < json.size()) {
        if (json[i] == '"') {
            size_t end = json.find('"', i + 1);
            std::string key = json.substr(i + 1, end - i - 1);
            i = json.find(':', end) + 1;
            size_t vstart = i;
            while (i < json.size() && json[i] != ',' && json[i] != '}') ++i;
            std::string val = json.substr(vstart, i - vstart);
            entries.emplace_back(key, val);
        } else {
            ++i;
        }
    }
    bool first = true;
    for (const auto& [k, v] : entries) {
        if (!first) std::cout << ' ';
        std::cout << k << '=' << v;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
