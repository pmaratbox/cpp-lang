#include <iostream>

int main() {
    for (int c : {100, 0}) {
        int f = c * 9 / 5 + 32;
        std::cout << c << "C = " << f << "F\n";
    }
    return 0;
}
