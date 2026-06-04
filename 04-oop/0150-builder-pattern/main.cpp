#include <iostream>
#include <string>

class Pizza {
    std::string size;
    std::string topping;

public:
    Pizza(std::string size, std::string topping)
        : size(std::move(size)), topping(std::move(topping)) {}

    std::string str() const {
        return "Pizza(" + size + ", " + topping + ")";
    }
};

class PizzaBuilder {
    std::string size;
    std::string topping;

public:
    PizzaBuilder& setSize(const std::string& s) {
        size = s;
        return *this;
    }

    PizzaBuilder& addTopping(const std::string& t) {
        topping = t;
        return *this;
    }

    Pizza build() const { return Pizza(size, topping); }
};

int main() {
    Pizza pizza = PizzaBuilder().setSize("M").addTopping("cheese").build();
    std::cout << pizza.str() << '\n';
}
