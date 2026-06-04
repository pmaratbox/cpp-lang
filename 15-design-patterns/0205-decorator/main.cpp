#include <iostream>
#include <memory>

struct Coffee {
    virtual ~Coffee() = default;
    virtual int cost() const = 0;
};

struct BaseCoffee : Coffee {
    int cost() const override { return 2; }
};

struct CoffeeDecorator : Coffee {
    std::unique_ptr<Coffee> inner;
    int extra;
    CoffeeDecorator(std::unique_ptr<Coffee> c, int e) : inner(std::move(c)), extra(e) {}
    int cost() const override { return inner->cost() + extra; }
};

int main() {
    std::unique_ptr<Coffee> c = std::make_unique<BaseCoffee>();
    c = std::make_unique<CoffeeDecorator>(std::move(c), 1); // milk
    c = std::make_unique<CoffeeDecorator>(std::move(c), 1); // sugar
    std::cout << c->cost() << '\n';
}
