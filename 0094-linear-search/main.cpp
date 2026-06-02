#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {4, 2, 7, 1, 9};
    int target = 7;
    auto it = std::find(nums.begin(), nums.end(), target);
    int index = (int)(it - nums.begin());
    std::cout << "found " << target << " at index " << index << '\n';
    return 0;
}
