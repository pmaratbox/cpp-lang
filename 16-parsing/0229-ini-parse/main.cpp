#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string ini = "[s]\nk=v\n";
    std::istringstream in(ini);
    std::string line, section;
    while (std::getline(in, line)) {
        if (line.empty()) continue;
        if (line.front() == '[' && line.back() == ']') {
            section = line.substr(1, line.size() - 2);
        } else {
            auto eq = line.find('=');
            std::string key = line.substr(0, eq);
            std::string val = line.substr(eq + 1);
            std::cout << section << '.' << key << '=' << val << '\n';
        }
    }
}
