#include <iostream>

struct A {
    void a() const { std::cout << "a"; }
};

struct B {
    void b() const { std::cout << "b"; }
};

struct AB : A, B {};

int main() {
    AB ab;
    ab.a();
    std::cout << ' ';
    ab.b();
    std::cout << '\n';
}
