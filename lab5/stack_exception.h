#ifndef LAB5_STACK_EXCEPTION_H
#define LAB5_STACK_EXCEPTION_H
#include <iostream>
#include <exception>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class StackException{
private:
    std::string m_error;
public:
    StackException(std::string error){
        m_error = error;
    }
    const char* getError(){
        return m_error.c_str();
    }
};

#endif
