#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> nums = {
        {"one", 1},
        {"two", 2},
        {"three", 3},
    };

    std::cout << "two: " << nums["two"] << '\n';
    std::cout << "size: " << nums.size() << '\n';
    return 0;
}
