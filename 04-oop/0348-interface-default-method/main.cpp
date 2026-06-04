#include <iostream>
#include <string>

struct Greeter {
    virtual ~Greeter() = default;
    virtual std::string greet() const { return "hi"; }
};

struct Casual : Greeter {
    std::string greet() const override { return "hey"; }
};

int main() {
    Greeter base;
    Casual derived;
    std::cout << base.greet() << ' ' << derived.greet() << '\n';
}
