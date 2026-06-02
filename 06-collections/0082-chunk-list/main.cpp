#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    size_t size = 3;
    for (size_t i = 0; i < nums.size(); i += size) {
        for (size_t j = i; j < i + size && j < nums.size(); j++) {
            if (j > i) std::cout << ' ';
            std::cout << nums[j];
        }
        std::cout << '\n';
    }
    return 0;
}
