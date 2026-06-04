#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string text = "[1,2,3]";
    std::string inner = text.substr(1, text.size() - 2);
    std::istringstream in(inner);
    std::string item;
    long sum = 0;
    while (std::getline(in, item, ',')) {
        sum += std::stol(item);
    }
    std::cout << sum << '\n';
}
