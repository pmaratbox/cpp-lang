#include <iostream>

int main() {
    int n = 0;
    auto next_square = [&n]() {
        n++;
        return n * n;
    };
    int a = next_square();
    int b = next_square();
    int c = next_square();
    std::cout << a << " " << b << " " << c << '\n';
    return 0;
}
