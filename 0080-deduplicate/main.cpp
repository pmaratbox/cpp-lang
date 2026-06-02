#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 1};
    std::unordered_set<int> seen;
    std::vector<int> unique;
    for (int n : nums) {
        if (seen.insert(n).second) unique.push_back(n);
    }
    bool first = true;
    for (int x : unique) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
