#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> next{
        {"red", "green"},
        {"green", "yellow"},
        {"yellow", "red"},
    };
    std::string state = "red";
    for (int i = 0; i < 4; ++i) {
        state = next[state];
        std::cout << state;
        if (i < 3) std::cout << ' ';
    }
    std::cout << '\n';
    return 0;
}
