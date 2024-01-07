#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    //constructor 
    Node(int value){
        this -> data = value;
        this -> next = nullptr;
    }
};

void InsertNodeAtHead(Node* &head, int value){
    Node* temp = new Node(value);
    temp -> next = head;
    head = temp;
}

void InsertNodeAtTail(Node* &head, int value){
    Node* newNode = new Node(value);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp -> next != nullptr){
        temp = temp -> next;
    }

    temp -> next = newNode;
}

void InsertNodeAtPosition(Node* &head, int value, int pos){
    Node* newNode = new Node(value);

    if(pos == 0 || head == nullptr){
        newNode -> next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for(int i = 0; i < pos - 1 && temp -> next != nullptr; i++){
        temp = temp -> next;
    }
    
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << ' ';
        temp = temp -> next;
    }
    cout << '\n';
}

int main(){
    Node* node1 = nullptr;

    InsertNodeAtHead(node1, 100);
    InsertNodeAtHead(node1, 49);
    InsertNodeAtHead(node1, 50);
    InsertNodeAtHead(node1, 37);
    InsertNodeAtHead(node1, 69);

    InsertNodeAtTail(node1, 420);

    InsertNodeAtPosition(node1, 900, 4);
    display(node1);

    // Deallocate memory to avoid memory leaks
    while (node1 != nullptr) {
        Node* temp = node1;
        node1 = node1->next;
        delete temp;
    }

    return 0;
}