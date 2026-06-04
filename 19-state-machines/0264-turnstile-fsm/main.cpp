#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string state = "locked";
    std::vector<std::string> events{"coin", "push", "push"};
    for (size_t i = 0; i < events.size(); ++i) {
        const auto& ev = events[i];
        if (state == "locked" && ev == "coin") {
            state = "unlocked";
        } else if (state == "unlocked" && ev == "push") {
            state = "locked";
        }
        // locked + push -> locked (no change)
        std::cout << state;
        if (i + 1 < events.size()) std::cout << ' ';
    }
    std::cout << '\n';
    return 0;
}
