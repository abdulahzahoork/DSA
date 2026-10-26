// Create a doubly linked list and insert a new node at the beginning.

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

    node* newNode = new node;
    newNode->data = 5;
    newNode->next = head;
    newNode->prev = NULL;
    head->prev = newNode;
    head = newNode;

    // display 

    node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}