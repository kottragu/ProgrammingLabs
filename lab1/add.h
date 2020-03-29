#ifndef LAB1_ADD_H
#define LAB1_ADD_H


void task11(int *num1, int *num2);

void task2 (double * num);

void task12(int & num1, int & num2);

void task21 (double & num);

struct Point {
    float x;
    float y;
};

struct Square{
    Point point1 = {0, 0};
    Point point2 = {10, 10};
    Point point3 = {0, 10};
    Point point4 = {10, 0};
};

struct Vector{
    float x;
    float y;
};

void task31(float*, float*);

void task32(float&, float&);

void task41(Square*, Vector*);

void task42(Square&, Vector&);

#endif
