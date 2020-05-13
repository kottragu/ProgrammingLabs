#include <iostream>
#include <vector>
#include "second.h"
using namespace std;

template <typename Z>
class Dot{
private:
    Z x;
    Z y;
public:
    template <typename TR>
    Dot(TR x1, TR y1){
        x = x1;
        y = y1;
    }
    template <typename T>
    bool operator <(T num){
        return x < num;
    }
};
template <typename T>
bool fir(T x){
    return x < 0;
}

int main() {

    vector<int> v{1, 0, 3};
    vector<Dot<int>> v1{{6,1}, {6,2}, {6,1} };

    cout << "all_of: ";
    if(all_of(v.begin(), v.end(), fir<int>)){
        cout << "true ";
    } else {
        cout << "false ";
    }
    if (all_of(v1.begin(), v1.end(), fir<Dot<int>>)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }


    cout << "is_sorted: ";
    if(is_sorted(v.begin(), v.end(), fir<int>)) {
        cout << "true ";
    } else {
        cout << "false ";
    }
    if(is_sorted(v1.begin(), v1.end(), fir<Dot<int>>)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }


    cout << "is_palindrome: ";
    if(is_palindrome(v.begin(), v.end(), fir<int>)){
        cout << "true ";
    } else {
        cout << "false ";
    }
    if(is_palindrome(v1.begin(),v1.end(), fir<Dot<int>>)){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}


