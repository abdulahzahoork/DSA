// Create a linked list


#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

int main() {
    node *first = new node;
    first->data = 10;
    first->next = NULL;
    cout << first->data << endl;

    return 0;
}