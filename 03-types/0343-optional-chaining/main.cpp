#include <iostream>
#include <optional>

struct C {
    int value;
};

struct B {
    std::optional<C> c;
};

struct A {
    std::optional<B> b;
};

int get(const A& a) {
    if (a.b && a.b->c) {
        return a.b->c->value;
    }
    return 0;
}

int main() {
    A present{B{C{5}}};
    A absent{B{std::nullopt}};
    std::cout << get(present) << ' ' << get(absent) << '\n';
}
