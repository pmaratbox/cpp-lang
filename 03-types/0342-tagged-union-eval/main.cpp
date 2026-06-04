#include <iostream>
#include <memory>
#include <variant>

struct Num;
struct Add;
using Expr = std::variant<Num, Add>;

struct Num {
    int value;
};

struct Add {
    std::shared_ptr<Expr> lhs;
    std::shared_ptr<Expr> rhs;
};

int eval(const Expr& e) {
    return std::visit([](const auto& node) -> int {
        using T = std::decay_t<decltype(node)>;
        if constexpr (std::is_same_v<T, Num>) {
            return node.value;
        } else {
            return eval(*node.lhs) + eval(*node.rhs);
        }
    }, e);
}

int main() {
    Expr expr = Add{
        std::make_shared<Expr>(Num{1}),
        std::make_shared<Expr>(Num{2}),
    };
    std::cout << eval(expr) << '\n';
}
