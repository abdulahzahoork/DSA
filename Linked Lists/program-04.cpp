// Insert a node at the beginning of a Linked list.

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* head = new node;
    node* second = new node;

    head->data = 50;
    head->next = second;

    second->data = 100;
    second->next = NULL;

    // Create a node
    node* newNode = new node;
    newNode->data = 10;
    // Insert at the start
    newNode->next = head;
    head = newNode;

    // Display
    node* current = head;
    while (current!=NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}