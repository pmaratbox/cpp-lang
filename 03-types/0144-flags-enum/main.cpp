#include <iostream>

enum Permission : unsigned {
    Read = 1,
    Write = 2,
};

int main() {
    unsigned flags = Read | Write;
    std::cout << flags << ' ' << ((flags & Write) != 0 ? "yes" : "no") << '\n';
    return 0;
}
