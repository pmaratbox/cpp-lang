#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::MatrixXi a(2, 2);
    a << 1, 2,
         3, 4;
    int scalar = 3;
    Eigen::MatrixXi c = scalar * a;
    for (int i = 0; i < c.rows(); i++) {
        for (int j = 0; j < c.cols(); j++) {
            std::cout << c(i, j);
            if (j < c.cols() - 1) std::cout << " ";
        }
        std::cout << "\n";
    }
}
