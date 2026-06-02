#include <functional>
#include <iostream>

int inc(int x) { return x + 1; }
int twice(int x) { return x * 2; }

std::function<int(int)> compose(std::function<int(int)> f, std::function<int(int)> g) {
    return [f, g](int x) { return f(g(x)); };
}

int main() {
    std::cout << compose(inc, twice)(3) << '\n';
    return 0;
}
