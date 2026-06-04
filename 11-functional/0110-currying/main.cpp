#include <iostream>
#include <functional>

int main() {
    auto add = [](int a) {
        return [a](int b) { return a + b; };
    };
    std::cout << add(2)(3) << '\n';
}
