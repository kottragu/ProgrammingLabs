#ifndef LAB3_ADD_H
#define LAB3_ADD_H
#include <iostream>
#include <vector>

class Matrix{
private:
    float _matrix[3][3];
public:
    Matrix(float matrix[3][3]);
    Matrix operator+ (float arr1[3][3]);
    Matrix operator-(float arr1[3][3]);
    Matrix operator*(float arr1[3][3]);
    Matrix operator*(float n);
    bool operator==(float arr[3][3]);
    bool operator!=(float arr[3][3]);
    bool operator > (float arr[3][3]);
    bool operator < (float arr[3][3]);
    void _output();
};

class Subset{
private:
    std::vector<int> data;
public:
    Subset(std::vector<int> &vec);
    Subset operator+(std::vector<int> &vec);
    bool operator==(std::vector<int> &vec);
    bool operator!=(std::vector<int> &vec);
    Subset operator+=(int number);
    Subset operator-=(int number);
    void Count();
};

#endif
