#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    std::vector<int> evens, odds;
    for (int n : nums) {
        (n % 2 == 0 ? evens : odds).push_back(n);
    }
    std::cout << "evens:";
    for (int x : evens) std::cout << ' ' << x;
    std::cout << '\n';
    std::cout << "odds:";
    for (int x : odds) std::cout << ' ' << x;
    std::cout << '\n';
    return 0;
}
