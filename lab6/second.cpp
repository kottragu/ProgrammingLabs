#include "second.h"

struct Dot{
    int x;
    int y;
};

bool func_1(int it){
    return it > 2;
}
bool func_2(Dot dot){
    return dot.x > 0 && dot.y > 0;
}
bool func_sort_2(Dot a, Dot b){
    return (a.x*a.x + a.y*a.y) < (b.x*b.x+b.y*b.y);
}
bool func_sort_1(int a, int b){
    return a < b;
}

bool is_palindrome_1(char s1, char s2){
    return tolower(s1) == tolower(s2);
}

bool is_palindrome_2(Dot a, Dot b){
    return (a.x == b.x)&&(a.y == b.y)&&(a.x > 5);
}