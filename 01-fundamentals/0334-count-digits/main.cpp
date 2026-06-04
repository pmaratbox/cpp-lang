#include <iostream>

int main() {
    int n = 90210;
    int count = 0;
    do {
        ++count;
        n /= 10;
    } while (n != 0);
    std::cout << count << '\n';
}
