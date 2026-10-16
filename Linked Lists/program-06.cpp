//Create a linked list and insert a node in the middle

#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main() {
    node* head = new node;
    node* second = new node;
    node* third = new node;

    head->data = 10;
    second->data=20;
    third->data=30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    node* current = head;
    while(current->data != 20) {
        current = current->next;
    }

    node* newNode = new node;
    newNode->data = 25;
    newNode->next = current->next;
    current->next = newNode;

    current = head;
    while(current != NULL) {
        cout << current->data <<  " ";
        current = current->next;
    }

    return 0;
}