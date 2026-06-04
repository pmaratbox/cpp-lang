#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string data = "Hi";
    bool first = true;
    for (unsigned char c : data) {
        if (!first) std::cout << ' ';
        std::cout << std::hex << std::nouppercase << std::setw(2)
                  << std::setfill('0') << static_cast<int>(c);
        first = false;
    }
    std::cout << '\n';
    return 0;
}
