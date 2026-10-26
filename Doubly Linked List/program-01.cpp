// Create a doubly linked list.

#include <iostream>
using namespace std;

struct node {
    int data;
    node* prev;
    node* next;
};

int main() {
    node* head = new node;
    node* second = new node;
    node* third = new node;

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->prev = NULL;
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = NULL;

    // Print forward
    node* temp = head;
    cout << "Forward printing: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Print backwards
    temp = third;
    cout << "Backwards printing: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;

    return 0;
}