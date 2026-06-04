#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    const std::vector<int> nums{10, 9, 2, 5, 3, 7, 101, 18};
    std::vector<int> tails;
    for (int x : nums) {
        auto it = std::lower_bound(tails.begin(), tails.end(), x);
        if (it == tails.end())
            tails.push_back(x);
        else
            *it = x;
    }
    std::cout << tails.size() << '\n';
}
