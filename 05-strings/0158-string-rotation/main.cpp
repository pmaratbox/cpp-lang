#include <iostream>
#include <string>

int main() {
    std::string a = "abcd";
    std::string b = "cdab";
    bool rotation = a.size() == b.size() && (a + a).find(b) != std::string::npos;
    std::cout << (rotation ? "yes" : "no") << '\n';
    return 0;
}
