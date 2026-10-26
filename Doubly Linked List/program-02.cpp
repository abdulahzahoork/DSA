// Create a doubly linked list using function.

#include <iostream>
using namespace std;

struct node {
    int data;
    node* prev;
    node* next;
};

int main() {
    node* head = NULL;
    node* tail = NULL;

    for(int i=1; i<=5; i++) {
        node* newNode = new node;
        newNode->data = i*10;
        newNode->prev = tail;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
    }

    // forward printing
    node* current = head;
    cout << "Forward printing: ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // backwards printing
    current = tail;
    cout << "Backwards printing: ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;

    return 0;
}