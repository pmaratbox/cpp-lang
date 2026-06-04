#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 1};
    bool first = true;
    for (int n : nums) {
        if (n >= 3) break;
        if (!first) std::cout << ' ';
        std::cout << n;
        first = false;
    }
    std::cout << '\n';
}
