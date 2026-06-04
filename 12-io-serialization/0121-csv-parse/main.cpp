#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    const std::vector<std::string> rows = {"alice,30", "bob,25"};

    std::vector<std::string> pairs;
    for (const auto& row : rows) {
        std::istringstream ss(row);
        std::string name, value;
        std::getline(ss, name, ',');
        std::getline(ss, value, ',');
        pairs.push_back(name + "=" + value);
    }

    for (std::size_t i = 0; i < pairs.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << pairs[i];
    }
    std::cout << '\n';
    return 0;
}
