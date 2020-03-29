#ifndef LAB2_ADD_H
#define LAB2_ADD_H
#include <iostream>

class Stack{
private:
    int _depth;
    int count;
    int* data;
public:
    Stack();
    Stack(int num);
    Stack(const Stack &_stack);
    void Push(int number);
    int Pop();
    void Empty();
    void TOP();
    void Output();
    void Count();
    ~Stack();
};




#endif //LAB2_ADD_H
