#include <iostream>
#include <bit>

int main() {
    unsigned x = 8;
    int tz = std::countr_zero(x);
    std::cout << tz << '\n';
}
