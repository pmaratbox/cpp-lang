#include <iostream>

bool is_leap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int feb_days(int y) {
    return is_leap(y) ? 29 : 28;
}

int main() {
    std::cout << feb_days(2000) << ' ' << feb_days(2001) << '\n';
}
