#include <iostream>

int main() {
    int ar = 1, ai = 2, br = 3, bi = 4;
    int re = ar * br - ai * bi;
    int im = ar * bi + ai * br;
    std::cout << re << ' ' << im << '\n';
    return 0;
}
