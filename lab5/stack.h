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
            if(vec.size() == N){
                throw StackException("stack id overflow");
            }
            vec.push_back(num);
        }catch (StackException &exception){
            std::cout << exception.getError() << std::endl;
        }
    };
    void Push(T num){
        try{
            if(vec.size() == N){
                throw StackException("stack is overflow");
            }
            vec.push_back(num);
        }catch (StackException &exception){
            std::cout << exception.getError() << std::endl;
        }
    };
    T Pop(){
        try{
            if(vec.size() == 0){
                throw StackException("stack is empty");
            }
            vec.back();
        }catch (StackException &exception){
            std::cout << exception.getError() <<std::endl;
        }
    }

};

#endif

