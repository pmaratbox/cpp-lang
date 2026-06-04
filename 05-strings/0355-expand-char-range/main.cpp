#include <iostream>
#include <string>

int main() {
    const std::string spec = "a-e";
    char start = spec.front();
    char end = spec.back();
    std::string out;
    for (char c = start; c <= end; ++c) out += c;
    std::cout << out << '\n';
}
