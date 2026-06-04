#include <iostream>

int main() {
    const int n = 5;
    int prev = 1, cur = 1;
    for (int i = 2; i <= n; ++i) {
        int next = prev + cur;
        prev = cur;
        cur = next;
    }
    std::cout << cur << '\n';
}
