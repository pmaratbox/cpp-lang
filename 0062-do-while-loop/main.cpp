#include <iostream>

int main() {
    int i = 1;
    bool first = true;
    do {
        if (!first) std::cout << ' ';
        std::cout << i;
        first = false;
        i++;
    } while (i <= 3);
    std::cout << '\n';
    return 0;
}
