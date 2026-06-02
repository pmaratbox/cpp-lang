#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    size_t size = 2;
    for (size_t i = 0; i + size <= nums.size(); i++) {
        for (size_t j = i; j < i + size; j++) {
            if (j > i) std::cout << ' ';
            std::cout << nums[j];
        }
        std::cout << '\n';
    }
    return 0;
}
