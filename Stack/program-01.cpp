// Stack in Array

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int stack[SIZE];
    int top = -1;
    
    // push operation

    if (top == SIZE-1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        stack[top] = 10; 
        cout << "Pushed: " << stack[top] << endl;
    }

    // pop operation
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "Popped: " << stack[top] << endl;
        top--;
    }

    // peek operation
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element: " << stack[top] << endl;
    }

    // display 
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }

    return 0;
}