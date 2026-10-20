// Delete a node by value
// Delete the first occurrence of a given value. If it doesn't exist, print a suitable message.

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {

    // Create linked list
    node* head = NULL;
    node* current = NULL;

    for(int i=1; i<=10; i++) {
        node* newNode = new node;
        newNode->data = i*1;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    // Remove node with value 5

    int value = 5;
    current = head;
    node* previous = NULL;

    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        cout << "Value not found." << endl;
    } else {
        if (previous == NULL) {
            head = current->next;
        } else {
            previous->next = current->next;
        }

        delete current;
    }

    // Display list
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    // Cleanup
    current = head;
    while (current != NULL) {
        node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}