// Delete the first node
// Remove the head node and display the updated list. Handle the empty-list case.


#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    
    // Create a linked list.

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

    // Remove head node

    if (head == NULL) {
        cout << "It's an empty list" << endl;
    } else {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    // Display Linked List

    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    // Cleanup
    current=head;
    while(current!=NULL) {
        node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}