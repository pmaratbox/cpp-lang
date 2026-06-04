#include <iostream>
#include <map>
#include <string>

int main() {
    const std::map<int, std::string> messages{
        {0, "ok"},
        {1, "denied"},
        {2, "not found"},
    };
    std::cout << messages.at(2) << "\n";
}
