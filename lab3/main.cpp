#include "add.h"
using namespace std;

int main() {
    float matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Matrix matr(matrix);
    Matrix matrix1 = matr*2;
    matrix1._output();

    vector<int> vec1{1,2,4};
    vector<int> vec2{0,3,6};
    Subset _subset(vec1);
    Subset _subset_ =_subset + vec2;
    _subset_.Count();
    return 0;
}
