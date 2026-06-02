#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string input = "a,b,c";
    std::vector<std::string> parts;
    std::stringstream ss(input);
    std::string part;
    while (std::getline(ss, part, ',')) {
        for (char &c : part) {
            c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
        }
        parts.push_back(part);
    }
    std::string result;
    for (size_t i = 0; i < parts.size(); i++) {
        if (i > 0) result += "-";
        result += parts[i];
    }
    std::cout << result << '\n';
    return 0;
}
