#include <iostream>
#include <string>

int main() {
    int n = std::stoi("42");
    double f = std::stod("3.5");
    std::string s = std::to_string(n);
    std::cout << "int: " << n << '\n';
    std::cout << "float: " << f << '\n';
    std::cout << "str: " << s << '\n';
    return 0;
}
