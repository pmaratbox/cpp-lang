#include <iostream>
#include <sstream>

int main() {
    int nums[] = {1, 2, 3};
    std::ostringstream sb;
    for (int i = 0; i < 3; i++) {
        if (i > 0) sb << '-';
        sb << nums[i];
    }
    std::cout << sb.str() << '\n';
    return 0;
}
