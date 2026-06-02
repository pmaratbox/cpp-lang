#include <iostream>

int inc(int x) {
    return x + 1;
}

int dbl(int x) {
    return x * 2;
}

int apply(int (*f)(int), int x) {
    return f(x);
}

int main() {
    std::cout << "inc 5 = " << apply(inc, 5) << '\n';
    std::cout << "double 5 = " << apply(dbl, 5) << '\n';
    return 0;
}
