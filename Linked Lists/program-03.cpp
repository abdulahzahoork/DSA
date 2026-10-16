// Create multiple nodes using for loop.

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    // Step 1: Create head and current pointers.
    node* head = NULL;
    node* current = NULL;

    // Step 2: Create multiple nodes and store their data. 
    for(int i=1; i<=5; i++) {
        node* newNode = new node;
        newNode->data = i*20;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    // Step 3: Print the Linked List.
    current = head;
    while(current!=NULL) {
        cout << current->data << " ";
        current = current->next;
    }


    return 0;
}

