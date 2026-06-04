#include <functional>
#include <iostream>
#include <string>
#include <variant>

using Either = std::variant<std::string, int>;  // Left = error string, Right = int

Either divide(int a, int b) {
    if (b == 0) return Either{std::in_place_index<0>, "err"};
    return Either{std::in_place_index<1>, a / b};
}

Either ebind(const Either& e, std::function<Either(int)> f) {
    if (e.index() == 0) return e;
    return f(std::get<1>(e));
}

int main() {
    Either ok = ebind(divide(8, 2), [](int x) { return divide(x, 2); });   // 8/2=4, 4/2=2
    Either bad = ebind(divide(8, 0), [](int x) { return divide(x, 2); });  // err short-circuits

    if (ok.index() == 1) std::cout << std::get<1>(ok); else std::cout << std::get<0>(ok);
    std::cout << ' ';
    if (bad.index() == 1) std::cout << std::get<1>(bad); else std::cout << std::get<0>(bad);
    std::cout << '\n';
}
