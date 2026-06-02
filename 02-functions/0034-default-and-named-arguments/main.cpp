#include <iostream>
#include <string>

std::string greet(const std::string &name, const std::string &greeting = "Hello") {
    return greeting + ", " + name;
}

int main() {
    std::cout << greet("Ada") << '\n';
    std::cout << greet("Ada", "Hi") << '\n';
    return 0;
}
