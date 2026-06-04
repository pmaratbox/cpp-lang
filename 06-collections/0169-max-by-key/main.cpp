#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> words{"a", "bbb", "cc"};
    auto it = std::max_element(words.begin(), words.end(),
                               [](const std::string& l, const std::string& r) {
                                   return l.size() < r.size();
                               });
    std::cout << *it << '\n';
}
