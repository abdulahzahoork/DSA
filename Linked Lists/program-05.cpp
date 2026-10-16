// Insert a node at the end of Linked List

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};


int main() {
    node* head = new node;
    node* second = new node;

    head->data = 10;
    second->data = 20;

    head->next = second;
    // second->next = NULL;

    node* newNode = new node;
    newNode->data = 30;
    newNode->next = NULL;

    second->next = newNode;

    node* current = head;
    while(current!=NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}