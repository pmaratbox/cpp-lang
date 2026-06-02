#include <iostream>

struct Calc {
    int value;
    Calc& add(int n) {
        value += n;
        return *this;
    }
    Calc& multiply(int n) {
        value *= n;
        return *this;
    }
};

int main() {
    Calc c{5};
    std::cout << c.add(3).multiply(2).value << '\n';
    return 0;
}
