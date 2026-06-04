#include <iostream>

int main() {
    int a = 3, b = 5;
    a ^= b;
    b ^= a;
    a ^= b;
    std::cout << a << ' ' << b << '\n';
}
