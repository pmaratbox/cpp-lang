#include <format>
#include <iostream>
#include <string>

int main() {
    std::string name = "Ada";
    int age = 36;
    std::cout << std::format("{} is {}", name, age) << '\n';
    return 0;
}
