#include "stack.h"
#include "max_num_array.h"
using namespace std;


int main() {
    int n = 5;
    float arr[n];
    srand(static_cast<unsigned int>(time(0)));
    for(int i = 0; i < n; i++){
        arr[i] = rand()/0.283;
    }
    float x = my_temp(arr, 5);
    cout << x << endl;



    Stack<1, int> _stack(8);
    _stack.Push(18);
    return 0;
}