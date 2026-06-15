#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::MatrixXi a(2, 3);
    a << 1, 2, 3,
         4, 5, 6;

    Eigen::MatrixXi t = a.transpose();

    for (int i = 0; i < t.rows(); ++i) {
        for (int j = 0; j < t.cols(); ++j) {
            std::cout << t(i, j);
            if (j < t.cols() - 1) std::cout << ' ';
        }
        std::cout << '\n';
    }
}
