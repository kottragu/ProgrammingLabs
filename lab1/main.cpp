#include <iostream>
#include "add.h"
using namespace std;


int main() {
      //Task1
    int num1 = 1;
    int num2 = 2;
    int* p  = &num1;
    int* p1 = &num2;
    task11(p, p1);
    cout << " Task11" << endl;
    cout << *p << endl;
    int num3 = 1;
    int num4 = 2;
    task12(num3, num4);
    cout << " Task12" << endl << num3 << endl;

      //Task2
    double t = 23.45678;
    double t2 =  34.21278;
    double * a = &t;
    task2(a);
    task21(t2);
    cout << " Task21"<< endl << *a << endl << " Task22" << endl << t2 << endl;

        //Task3
    float x = 123.44;
    float y = 122.11;
    float comvar = x + y;
    float comcon = x - y;
    float* i1 = &comvar;
    float* i2 = &comcon;
    task31(i1, i2);
    cout << " Task31" << endl;
    cout << *i1 << " " << *i2 << endl;

    float x1 = 100.111;
    float x2 = 99.111;
    float y1 = x1 + x2;
    float y2 = x1 - x2;
    task32(y1, y2);
    cout << " Task32" << endl;
    cout << y1 << " " << y2 << endl;

        //Task 4
    Square square1;
    Square square2;
    Vector vec = {1, 1};
    Square* ptr;
    Vector* ptr1;
    ptr = &square1;
    ptr1 = &vec;
    task41(ptr, ptr1);
    task42(square2, vec);
    cout << " Task 4 with Pointer" << endl;
    cout << "(" << square1.point1.x << ";" << square1.point1.y << ")" << endl;
    cout << "(" << square1.point2.x << ";" << square1.point2.y << ")" << endl;
    cout << "(" << square1.point3.x << ";" << square1.point3.y << ")" << endl;
    cout << "(" << square1.point4.x << ";" << square1.point4.y << ")" << endl;
    cout << " Task 4 with Reference" << endl;
    cout << "(" << square2.point1.x << ";" << square2.point1.y << ")" << endl;
    cout << "(" << square2.point2.x << ";" << square2.point2.y << ")" << endl;
    cout << "(" << square2.point3.x << ";" << square2.point3.y << ")" << endl;
    cout << "(" << square2.point4.x << ";" << square2.point4.y << ")" << endl;

    return 0;
}
