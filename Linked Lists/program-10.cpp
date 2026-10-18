// Insert a node at the end
// Add a new node after the last node without changing the existing order.
// Input: 10 → 20 → 30, value: 40 · Output: 10 → 20 → 30 → 40


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

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    node* current = head;
    while(current->next != NULL) {
        current = current->next;
    }

    node* newNode = new node;
    newNode->data = 40;
    newNode->next = NULL;
    current->next = newNode;

    current=head;
    while(current!=NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}