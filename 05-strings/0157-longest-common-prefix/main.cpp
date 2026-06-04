#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words = {"flower", "flow", "flight"};
    std::string prefix = words.front();
    for (std::size_t i = 1; i < words.size(); ++i) {
        std::size_t j = 0;
        while (j < prefix.size() && j < words[i].size() && prefix[j] == words[i][j]) {
            ++j;
        }
        prefix = prefix.substr(0, j);
    }
    std::cout << prefix << '\n';
    return 0;
}
