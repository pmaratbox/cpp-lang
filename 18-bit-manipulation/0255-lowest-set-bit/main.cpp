#include <iostream>

int main() {
    int x = 12;
    int low = x & (-x);
    std::cout << low << '\n';
}
