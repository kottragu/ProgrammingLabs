#include "../add.h"
#include <cmath>
#include <algorithm>

void task11(int *num1, int *num2) {
    *num1 += *num2;
}

void task2 (double * num) {
    double e;
    double m;
    m = modf(*num, &e);
    *num = m;
}

void task12(int & num1, int & num2) {
    num1 += num2;
}

void task21 (double & num) {
    double e;
    double m;
    m = modf(num, &e);
    num = m;
}

void task31(float* z1, float* z2){
    std::swap(*z2, *z1);
}

void task32(float &x,float &y){
    std::swap(x, y);
}

void task41(struct Square* square, struct Vector* vec) {
    square->point1 = {square->point1.x + vec->x,square->point1.y + vec->y};
    square->point2 = {square->point2.x + vec->x,square->point2.y + vec->y};
    square->point3 = {square->point3.x + vec->x,square->point3.y + vec->y};
    square->point4 = {square->point4.x + vec->x,square->point4.y + vec->y};
}

void task42(struct Square& square, struct Vector& vec){
    square.point1 = {square.point1.x + vec.x, square.point1.y + vec.y};
    square.point2 = {square.point2.x + vec.x, square.point2.y + vec.y};
    square.point3 = {square.point3.x + vec.x, square.point3.y + vec.y};
    square.point4 = {square.point4.x + vec.x, square.point4.y + vec.y};
}