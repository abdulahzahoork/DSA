// Search for an element
// Ask the user for a value and determine whether it exists in the list. 
// If found, print its position; otherwise, print Not found.

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {

    // Create Linked List
    node* head = NULL;
    node* current = NULL;

    for(int i=1; i<=100; i++) {
        node* newNode = new node;
        newNode->data = i*2;
        newNode->next = NULL;

        if (head==NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    // Search for an element

    int num;
    cout << "Enter an element to search: ";
    cin >> num;

    int count = 0;

    current = head;
    while(current!=NULL) {
        count++;
        if(current->data == num) {
            cout << "Element found at node no. " << count << endl;
            break;
        }
        current = current->next;
    }

    if (current == NULL) {
        cout << "Not found." << endl;
    }

    // Cleanup
    current = head;
    while(current != NULL) {
        node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}