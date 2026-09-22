// Create a linked list


#include <iostream>
using namespace std;

struct node {
    string name;
    node *next;
};

int main() {

    node *head = new node;
    node *second = new node;
    node *third = new node;

    head->name = "Subhan";
    second->name = "Fazal-e-Rabi";
    third->name = "Tayyab Saeed";

    head->next = second;
    second->next = third;
    third->next = NULL;

    // Print the linked list
    node *current = head;

    while (current != NULL) {
        cout << current->name << endl;
        current = current->next;
    }

    return 0;
}