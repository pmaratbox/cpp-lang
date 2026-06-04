#include <iostream>

int main() {
    int pos = 1;
    int set = 0 | (1 << pos);
    int clear = 2 & ~(1 << pos);
    int toggle = 0 ^ (1 << pos);
    std::cout << set << ' ' << clear << ' ' << toggle << '\n';
}
