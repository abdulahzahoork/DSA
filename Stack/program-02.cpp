// Stack in Linked List

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* top = NULL;

    // push operation
    node* newNode = new node();
    newNode->data = 10;
    newNode->next = top;
    top = newNode;
    cout << "Pushed: " << top->data << endl;

    // pop operation
    if (top == NULL) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "Popped: " << top->data << endl;
        node* temp = top;
        top = top->next;
        delete temp;
    }

    // peek operation
    if (top == NULL) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element: " << top->data << endl;
    }

    // display 
    if (top == NULL) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";
        node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    return 0;
}

// WHY NOT MAKE HEAD TOO? 
// ANS: In a stack implemented using a linked list, the "top" pointer serves as the head of the stack. The top pointer always points to the most recently added element (the top of the stack). Since a stack follows the Last In First Out (LIFO) principle, we only need to keep track of the top element to perform push and pop operations efficiently.