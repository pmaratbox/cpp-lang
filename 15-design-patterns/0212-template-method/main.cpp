#include <iostream>
#include <string>

struct Algorithm {
    virtual ~Algorithm() = default;
    virtual std::string step() const = 0;
    void run() const {
        std::cout << "start " << step() << " end" << '\n';
    }
};

struct ConcreteAlgorithm : Algorithm {
    std::string step() const override { return "work"; }
};

int main() {
    ConcreteAlgorithm a;
    a.run();
}
