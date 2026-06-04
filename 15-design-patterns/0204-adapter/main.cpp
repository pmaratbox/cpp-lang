#include <iostream>

struct CelsiusSource {
    double celsius() const { return 100.0; }
};

struct Fahrenheit {
    virtual ~Fahrenheit() = default;
    virtual double fahrenheit() const = 0;
};

struct CelsiusToFahrenheit : Fahrenheit {
    CelsiusSource src;
    double fahrenheit() const override { return src.celsius() * 9.0 / 5.0 + 32.0; }
};

int main() {
    CelsiusToFahrenheit adapter;
    std::cout << static_cast<int>(adapter.fahrenheit()) << '\n';
}
