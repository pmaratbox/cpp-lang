#include <nlohmann/json.hpp>
#include <iostream>
#include <vector>
using json = nlohmann::json;

int main() {
    std::vector<int> numbers = {1, 2, 3};
    json arr = numbers;
    std::cout << arr.dump() << "\n";
}
