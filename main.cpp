#include <iostream>
#include "Matrix.hpp"

using namespace zich;
using namespace std;

int main() {
    vector<double> v1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix matrix(v1, 3, 3);
    vector<double> v2 = {1, 0, 0, 1, 0, 1, 0, 1, 0};
    Matrix matrix1(v2, 3, 3);
    bool test;
    test = (matrix + matrix) == matrix1;
   // CHECK(test == true);

    std::cout << test << std::endl;
    return 0;
}
