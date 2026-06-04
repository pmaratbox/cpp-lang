#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> data = {3, 1, 2};
    for (int n : data)
        std::cout << std::string(n, '#') << '\n';
    return 0;
}
