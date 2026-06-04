#include <iostream>
#include <set>
#include <string>

int main() {
    std::string text = "aabbcc";
    std::set<char> seen;
    std::string result;
    for (char c : text) {
        if (seen.insert(c).second) {
            result += c;
        }
    }
    std::cout << result << '\n';
    return 0;
}
