#include <iostream>

struct MathUtil {
    static int square(int n) {
        return n * n;
    }
};

int main() {
    std::cout << MathUtil::square(6) << '\n';
    return 0;
}
