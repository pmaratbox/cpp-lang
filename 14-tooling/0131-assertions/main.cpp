#include <iostream>
#include <stdexcept>
#include <string>

void check(bool cond, const std::string& what) {
    if (!cond) {
        throw std::logic_error("assertion failed: " + what);
    }
}

int main() {
    check(1 + 1 == 2, "1 + 1 == 2");
    check(2 * 3 == 6, "2 * 3 == 6");
    check(std::string("ab") + "c" == "abc", "string concat");
    std::cout << "all passed" << '\n';
    return 0;
}
