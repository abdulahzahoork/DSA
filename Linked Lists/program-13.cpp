// Delete the last node
// Remove the last node from the list, including the case where the list contains only one node.

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {

    // Create a Linked List

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

    // Remove last node

    if (head == NULL) {
        cout << "It's an empty list." << endl;
    } else if (head->next == NULL) {
        delete head;
        head = NULL;
    } else {
        current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }

        delete current->next;
        current->next = NULL;
    }

    // Display Linked List

    current = head;
    while (current!= NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    // Cleanup

    current=head;
    while (current!= NULL) {
        node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}