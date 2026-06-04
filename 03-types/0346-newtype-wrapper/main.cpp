#include <iostream>

struct UserId {
    int value;
};

struct ProductId {
    int value;
};

int main() {
    UserId u{1};
    ProductId p{2};
    std::cout << "user-" << u.value << ' ' << "prod-" << p.value << '\n';
}
