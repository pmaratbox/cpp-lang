#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::MatrixXi a(2, 2);
    a << 1, 2,
         3, 4;
    Eigen::MatrixXi b(2, 2);
    b << 5, 6,
         7, 8;

    Eigen::MatrixXi c = a * b;

    for (int i = 0; i < c.rows(); ++i) {
        for (int j = 0; j < c.cols(); ++j) {
            std::cout << c(i, j);
            if (j < c.cols() - 1) std::cout << ' ';
        }
        std::cout << '\n';
    }
}
