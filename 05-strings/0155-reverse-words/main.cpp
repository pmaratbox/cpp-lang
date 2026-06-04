#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string text = "hello world";
    std::istringstream ss(text);
    std::vector<std::string> words;
    std::string word;
    while (ss >> word) {
        words.push_back(word);
    }
    for (std::size_t i = words.size(); i-- > 0;) {
        std::cout << words[i];
        if (i > 0) {
            std::cout << ' ';
        }
    }
    std::cout << '\n';
    return 0;
}
