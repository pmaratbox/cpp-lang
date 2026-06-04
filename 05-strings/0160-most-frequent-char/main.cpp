#include <iostream>
#include <map>
#include <string>

int main() {
    std::string text = "hello";
    std::map<char, int> counts;
    for (char c : text) {
        ++counts[c];
    }
    char best = text.front();
    int bestCount = 0;
    for (char c : text) {
        if (counts[c] > bestCount) {
            bestCount = counts[c];
            best = c;
        }
    }
    std::cout << best << '\n';
    return 0;
}
