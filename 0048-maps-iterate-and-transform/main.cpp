#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> scores = {{"a", 1}, {"b", 2}, {"c", 3}};
    int total = 0;
    for (const auto &[key, value] : scores) {
        total += value;
    }
    std::cout << "sum: " << total << '\n';
    return 0;
}
