#include <iostream>
#include "Matrix.hpp"
using namespace zich;
using namespace std;
int main() {
    vector<double> v1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix matrix(v1, 3, 3);
    vector<double> v2 = {2, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix matrix1(v2, 3, 3);

   bool a = matrix > matrix1;
    std::cout << a << std::endl;
    return 0;
}
