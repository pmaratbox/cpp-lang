#include <iostream>
#include <vector>

int main() {
    std::vector<int> xs{1, 2, 3, 4};
    int acc = 1;
    bool first = true;
    for (int x : xs) {
        acc *= x;
        if (!first) std::cout << " ";
        std::cout << acc;
        first = false;
    }
    std::cout << "\n";
}
