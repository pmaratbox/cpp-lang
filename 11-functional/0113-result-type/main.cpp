#include <iostream>
#include <string>
#include <expected>

std::expected<int, std::string> safeDiv(int a, int b) {
    if (b == 0) return std::unexpected("divide by zero");
    return a / b;
}

void show(const std::expected<int, std::string>& r) {
    if (r) std::cout << "ok: " << *r << '\n';
    else std::cout << "err: " << r.error() << '\n';
}

int main() {
    show(safeDiv(10, 2));
    show(safeDiv(1, 0));
}
