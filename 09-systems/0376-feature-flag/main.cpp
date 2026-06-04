#include <iostream>

const char* describe(bool flag) {
    return flag ? "enabled" : "disabled";
}

int main() {
    std::cout << describe(true) << " " << describe(false) << "\n";
}
