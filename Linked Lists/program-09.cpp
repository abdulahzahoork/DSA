// Insert a node at the beginning
// Given a linked list and a new value, insert the new node at the head.
// Input: 20 → 30 → 40, value: 10 · Output: 10 → 20 → 30 → 40


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

    head->data = 20;
    second->data = 30;
    third->data = 40;

    head->next = second;
    second->next = third;
    third->next = NULL;

    node* newNode = new node;
    newNode->data = 10;
    newNode->next = head;
    head = newNode;

    node* current = head;
    while(head!=NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    
    return 0;
}