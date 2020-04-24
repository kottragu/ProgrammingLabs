#ifndef LAB5_STACK_H
#define LAB5_STACK_H
#include "stack_exception.h"


template<int N, typename T>
class Stack{
private:
    std::vector<T> vec;
    int _depth = N;
public:
    Stack(T num){
        try{
            if(vec.size() == _depth){
                throw Stack_overflow();      
            }
            vec.push_back(num);
        }catch (Stack_overflow &exception){     
            std::cout << exception.what() << std::endl;
        }
    };
    void Push(T num){
        try{
            if(vec.size() == _depth){
                throw Stack_empty();        
            }
            vec.push_back(num);
        }catch (Stack_empty &exception){         
            std::cout << exception.what() << std::endl;
        }
    };
    T Pop(){
        try{
            if(vec.size() == 0){
                throw std::exception();
            }
            vec.back();
        }catch (Stack_empty &exception){
            std::cout << exception.what() <<std::endl;
        }
    }

};

#endif
