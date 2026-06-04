#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> next{
        {"A", "B"},
        {"B", "C"},
        {"C", "A"},
    };
    std::string state = "A";
    for (int i = 0; i < 3; ++i) {
        state = next[state];
        std::cout << state;
        if (i < 2) std::cout << ' ';
    }
    std::cout << '\n';
    return 0;
}
