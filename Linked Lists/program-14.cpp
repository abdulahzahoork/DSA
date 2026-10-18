// Insert a node at a given position
// Insert a value at position k, using 1-based indexing.
// Input: 10 → 20 → 30, value: 30, position: 3 · Output: 10 → 20 → 25 → 30

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

    for(int i=1; i<=3; i++) {
        node* newNode = new node;
        newNode->data = i*10;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    // Insert at position k

    int k, data;
    
    cout << "Enter position: ";
    cin >> k;

    cout << "Enter data: ";
    cin >> data;

    if (k<1) {
        cout << "Invalid position" << endl;
    } else {
        node* newNode = new node;
        newNode->data = data;
        newNode->next = NULL;

        if (k==1) {
            newNode->next = head;
            head = newNode;
        } else {
            current = head;
            int count = 1;

            while (count < k-1 && current != NULL) {
                current = current->next;
                count++;
            }

            if(current == NULL) {
                cout << "Invalid position" << endl;
                delete newNode;
            } else {
                newNode->next = current->next;
                current->next = newNode;
            }
        }

    }

    // Display linked list.

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