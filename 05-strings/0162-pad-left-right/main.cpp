#include <format>
#include <iostream>
#include <string>

int main() {
    std::string s = "5";
    std::string left = std::format("{:>3}", s);
    std::string right = std::format("{:<3}", s);
    std::cout << left << '|' << right << '\n';
    return 0;
}
