// Count the number of nodes
// Traverse the list and count how many nodes it contains.
// Input: 5 → 10 → 15 → 20 · Output: 4

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
    node* fourth = new node;

    head->data = 5;
    second->data = 10;
    third->data = 15;
    fourth->data = 20;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    int count = 0;

    node*current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    cout << "Total nodes: " << count << endl;

    // Cleanup

    current = head;
    while (current != NULL) {
        node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}