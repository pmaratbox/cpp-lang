#include <iostream>

int main() {
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month = 3, day = 1;
    int doy = day;
    for (int m = 0; m < month - 1; ++m) doy += days[m];
    std::cout << doy << '\n';
}
