#include <iostream>

void inc(int &n) {
    n++;
}

int main() {
    int n = 1;
    std::cout << "before: " << n << '\n';
    inc(n);
    std::cout << "after: " << n << '\n';
    return 0;
}
