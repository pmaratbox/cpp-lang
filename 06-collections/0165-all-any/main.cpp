#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{2, 4, 6};
    bool all_even = std::all_of(nums.begin(), nums.end(),
                                [](int n) { return n % 2 == 0; });
    bool any_odd = std::any_of(nums.begin(), nums.end(),
                               [](int n) { return n % 2 != 0; });
    std::cout << (all_even ? "yes" : "no") << ' '
              << (any_odd ? "yes" : "no") << '\n';
}
