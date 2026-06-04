#include <iostream>

int main() {
    int mask = 5;
    int sub = mask;
    while (true) {
        std::cout << sub;
        if (sub == 0) break;
        std::cout << ' ';
        sub = (sub - 1) & mask;
    }
    std::cout << '\n';
}
