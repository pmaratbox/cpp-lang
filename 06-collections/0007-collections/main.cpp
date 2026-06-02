#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::cout << "count: " << nums.size() << '\n';
    std::cout << "first: " << nums.front() << '\n';
    std::cout << "last: " << nums.back() << '\n';
    return 0;
}
