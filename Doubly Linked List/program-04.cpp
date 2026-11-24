#include <iostream>
using namespace std;


struct Node{
    int id;
    Node *next;
    Node *pre;
    Node(): id(),next(nullptr), pre(nullptr){}
    Node(int id): id(id), next(nullptr), pre(nullptr){}
};

class LinkedList{
    Node *head, *tail;
    public:
    LinkedList(): head(nullptr), tail(nullptr){}

    void insertAtStart(int id){

        Node *newNode = new Node(id);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
    }
   
    void insertAtEnd(int id){

        Node *newNode = new Node(id);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->pre = tail;
        newNode->next = nullptr;
        tail = newNode;
    }



    void insertAtPos(int id, int pos){
        

        if(pos <1)
        {
            cout << "Invalid Position\n";
            return;
        }
        if(pos == 1){
            insertAtStart(id);
        }

        Node* newNode = new Node(id);
        Node *current = head;

        for(int i = 1; i < pos - 1; i++){
            current = current->next;
            if(current == nullptr){
                cout << "Invalid Position\n";
                return;
            }
        }
        
        newNode->next = current->next;
        newNode->pre = current;
        current->next->pre = newNode;
        current->next = newNode;
        if(current == tail) {
            tail = newNode;
        }   
    }
    


    void travarsal(){
        Node *current = head;
        while(current != nullptr){
            cout << current->id << " ";
            current = current->next;
        }
        cout <<endl;
    }
};

int main(){
    LinkedList list;
    for(int i = 1; i <4;i++){
        list.insertAtEnd(i*10);
    }

    list.insertAtPos(25, 4);
    list.travarsal();
}