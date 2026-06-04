#include <iostream>
#include <functional>

int main() {
    std::function<int(int)> f = [](int x) { return x * 3; };
    int x = 1;
    for (int i = 0; i < 4; ++i) {
        if (i != 0) std::cout << " ";
        std::cout << x;
        x = f(x);
    }
    std::cout << "\n";
}
