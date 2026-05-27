#include <iostream>
#include <string>

int main() {
    int n = 42;
    double pi = 3.14;
    std::string greeting = "hello";
    bool flag = true;

    std::cout << "int: " << n << '\n';
    std::cout << "float: " << pi << '\n';
    std::cout << "string: " << greeting << '\n';
    std::cout << std::boolalpha << "bool: " << flag << '\n';
    return 0;
}
