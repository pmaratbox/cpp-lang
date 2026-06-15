#include <Eigen/Dense>
#include <iostream>
int main() {
    Eigen::VectorXi a(3); a << 1, 2, 3;
    Eigen::VectorXi b(3); b << 4, 5, 6;
    int d = a.dot(b);
    std::cout << d << "\n";
}
