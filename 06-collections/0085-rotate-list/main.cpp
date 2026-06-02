#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::rotate(nums.begin(), nums.begin() + 2, nums.end());
    bool first = true;
    for (int x : nums) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
