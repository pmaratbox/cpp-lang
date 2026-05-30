#include <iostream>
#include <string>
#include <vector>

template <typename T>
T first(const std::vector<T> &items) {
    return items[0];
}

int main() {
    std::vector<int> ints = {1, 2, 3};
    std::vector<std::string> strs = {"a", "b", "c"};

    std::cout << "first int: " << first(ints) << '\n';
    std::cout << "first string: " << first(strs) << '\n';
    return 0;
}
