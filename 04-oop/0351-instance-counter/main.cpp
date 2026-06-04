#include <iostream>

struct Widget {
    static inline int count = 0;
    Widget() { ++count; }
};

int main() {
    Widget a, b, c;
    (void)a; (void)b; (void)c;
    std::cout << Widget::count << '\n';
}
