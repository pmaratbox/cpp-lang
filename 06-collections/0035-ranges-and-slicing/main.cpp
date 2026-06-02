#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {10, 20, 30, 40, 50};
    std::cout << "slice:";
    for (auto it = nums.begin() + 1; it != nums.begin() + 4; ++it) {
        std::cout << " " << *it;
    }
    std::cout << "\n";
    return 0;
}
