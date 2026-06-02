#include <iostream>

int main() {
    int a = 0, b = 1;
    for (int i = 0; i < 7; i++) {
        if (i > 0) std::cout << ' ';
        std::cout << a;
        int t = a + b;
        a = b;
        b = t;
    }
    std::cout << '\n';
    return 0;
}
