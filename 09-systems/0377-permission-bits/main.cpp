#include <iostream>

int main() {
    unsigned bits = 0b101;
    std::cout << ((bits & 0b100) ? 'r' : '-')
              << ((bits & 0b010) ? 'w' : '-')
              << ((bits & 0b001) ? 'x' : '-')
              << "\n";
}
