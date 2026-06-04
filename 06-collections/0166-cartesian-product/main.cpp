#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> xs{1, 2};
    std::vector<std::string> ys{"a", "b"};
    bool first = true;
    for (int x : xs) {
        for (const auto& y : ys) {
            if (!first) std::cout << ' ';
            std::cout << x << y;
            first = false;
        }
    }
    std::cout << '\n';
}
