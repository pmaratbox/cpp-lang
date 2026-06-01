#include <iostream>

template <typename... Args>
int total(Args... nums) {
    return (nums + ... + 0);
}

int main() {
    std::cout << "sum: " << total(1, 2, 3) << '\n';
    return 0;
}
