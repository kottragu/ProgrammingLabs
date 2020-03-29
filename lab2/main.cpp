#include "add.h"
using namespace std;

int main() {
    int c;
    Stack stack;
    cout << "Input number in stack: " << endl;
    cin >> c;
    stack.Push(c);
    cout << "Empty: ";
    stack.Empty();
    cout << "Top: ";
    stack.TOP();

    return 0;
}
