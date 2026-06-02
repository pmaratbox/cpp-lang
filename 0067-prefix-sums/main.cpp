#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> sums(nums.size());
    std::partial_sum(nums.begin(), nums.end(), sums.begin());

    bool first = true;
    for (int x : sums) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
