#include <iostream>
#include <vector>
#include "second.h"
#include "second.cpp"
using namespace std;

int main() {

    vector<int> v{1, 0, 3};
    vector<char> str {'a', 'b', 'c'};
    vector<Dot> v1{{6,1},
                   {6,2},
                   {6,1}
    };

    cout << "all_of: ";
    if(all_of(v.begin(), v.end(), func_1)){
        cout << "true ";
    } else {
        cout << "false ";
    }
    if(all_of(v1.begin(), v1.end(), func_2)){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }


    cout << "is_sorted: ";
    if(is_sorted(v.begin(), v.end(), func_sort_1)) {
        cout << "true ";
    } else {
        cout << "false ";
    }
    if(is_sorted(v1.begin(), v1.end(), func_sort_2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    cout << "is_palindrome: ";
    if(is_palindrome(str.begin(),str.end(),is_palindrome_1)){
        cout << "true ";
    } else {
        cout << "false ";
    }
    if(is_palindrome(v1.begin(),v1.end(),is_palindrome_2)){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}


