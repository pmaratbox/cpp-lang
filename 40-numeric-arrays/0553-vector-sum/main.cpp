#include <Eigen/Dense>
#include <iostream>
int main() {
    Eigen::VectorXi v(4); v << 1, 2, 3, 4;
    int total = v.sum();
    std::cout << total << "\n";
}
