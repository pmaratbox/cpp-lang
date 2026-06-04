#include <iostream>

int sign(int x) {
    return (x > 0) - (x < 0);
}

int main() {
    std::cout << sign(-5) << ' ' << sign(0) << ' ' << sign(5) << '\n';
}
