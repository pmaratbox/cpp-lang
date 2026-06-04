#include <functional>
#include <iostream>
#include <variant>

struct Done { int value; };
struct More;
using Result = std::variant<Done, More>;

struct More {
    std::function<Result()> next;
};

int trampoline(Result r) {
    while (std::holds_alternative<More>(r)) {
        r = std::get<More>(r).next();
    }
    return std::get<Done>(r).value;
}

Result sumTo(int n, int acc) {
    if (n == 0) return Done{acc};
    return More{[n, acc] { return sumTo(n - 1, acc + n); }};
}

int main() {
    std::cout << trampoline(sumTo(100, 0)) << '\n';
}
