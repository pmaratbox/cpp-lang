#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> nums = {1, 2, 2, 3};
    std::cout << "size: " << nums.size() << '\n';
    std::cout << "has 2: " << (nums.contains(2) ? "yes" : "no") << '\n';
    std::cout << "has 5: " << (nums.contains(5) ? "yes" : "no") << '\n';
    return 0;
}
