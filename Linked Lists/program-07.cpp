// Create and display a linked list
// Write a program that inserts 5 integers into a singly linked list and displays all the elements.
// Example: 10 20 30 40 50


#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* head = new node;
    node* second = new node;
    node* third = new node;
    node* fourth = new node;
    node* fifth = new node;

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    node*current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    // Cleanup
    current = head;
    while (current != NULL) {
        node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}