#include "add.h"

Stack::Stack(){
    _depth = 11;
    count = 0;
    data = new int[_depth];
}


Stack::Stack(int num){
    _depth = num+1;
    count = 0;
    data = new int[_depth];
}

Stack::Stack(const Stack &_stack){
    _depth = _stack._depth;
    count = _stack.count;
    data = _stack.data;
}

void Stack::Push(int number) {
    count++;
    data[count] = number;
}

int Stack::Pop() {
    if (count != 0){
        count--;
        return data[count+1];
    } else {
        std::cout << "Error" << std::endl;
        return 1;
    }
}

void Stack::Empty(){
    if (count != 0){
        std::cout << "Have some" << std::endl;
    } else {
        std::cout << "Empty" << std::endl;
    }
}

void Stack::TOP() {
    std::cout << "Top is " << data[count] << std::endl;
}
void Stack::Output(){
    for(int i = count; i == 0; i--) {
        std::cout << data[i] << std::endl;
    }
}

void Stack::Count(){
    std::cout << count << std::endl;
}

Stack::~Stack() {
        delete [] data;
}
