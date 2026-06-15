#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::VectorXi a(3); a << 1, 2, 3;
    Eigen::VectorXi b(3); b << 10, 20, 30;
    Eigen::VectorXi c = a + b;
    for (int i = 0; i < c.size(); i++) {
        std::cout << c(i);
        if (i < c.size() - 1) std::cout << " ";
    }
    std::cout << "\n";
}
