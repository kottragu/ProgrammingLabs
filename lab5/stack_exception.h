#ifndef LAB5_STACK_EXCEPTION_H
#define LAB5_STACK_EXCEPTION_H
#include <iostream>
#include <exception>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class Stack_overflow: public std::exception{
private:
    const char* s_error = "stack is overflow";
public:
    const char* what() const noexcept{
        return s_error;
    }
};

class Stack_empty: public std::exception{
private:
    const char* s_error = "stack is empty";
public:
    const char* what() const noexcept{
        return s_error;
    }
};
#endif
