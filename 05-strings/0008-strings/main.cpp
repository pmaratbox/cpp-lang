#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
    std::string name = "world";

    std::cout << "Hello, " << name << "!\n";

    std::string upper = name;
    std::transform(upper.begin(), upper.end(), upper.begin(),
                   [](unsigned char c) { return static_cast<char>(std::toupper(c)); });
    std::cout << upper << '\n';

    std::cout << "length: " << name.size() << '\n';
    return 0;
}
