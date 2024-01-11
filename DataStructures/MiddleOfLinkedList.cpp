#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList{
private:
    Node* head;
    
public:
    LinkedList() : head(nullptr) {}

    bool isEmpty(){
        return head == nullptr;
    }
        
    //inserts at tail
    void append(int data){
        Node* newNode = new Node(data);
        if(isEmpty()){
            head = newNode;
            return;
        }
        Node* lastNode = head;
        while (lastNode->next != nullptr) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
        
    //inserts at head
    void prepend(int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertAtPosition(int data, int position){
        Node* newNode = new Node(data);
        if(position == 0 || isEmpty()){
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* current = head;
        for(int i = 0; i < position - 1 && current != nullptr; ++i){
            current = current->next;
        }
        if(current == nullptr){
            cerr << "Invalid position\n";
                return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    void deleteNode(int key){
        Node* current = head;
        Node* prev = nullptr;

        if(current != nullptr && current->data == key){
            head = current->next;
            delete current;
            return;
        }

        while(current != nullptr && current->data != key){
            prev = current;
            current = current->next;
        }

        if(current == nullptr){
            return;
        }

        prev->next = current->next;
        delete current;
    }

    void display(){
        Node* current = head;
        while(current != nullptr){
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << '\n';
    }

    void printMiddleNode(){
        Node* A = head;
        Node* B = head;
        
        while(B != nullptr && B -> next != nullptr){
            B = B -> next;
            B = B -> next;
            A = A -> next;
        }
        cout << "Middle Node is : \n" << A -> data;
    }
    
    ~LinkedList(){
        Node* current = head;
        Node* nextNode;
        while(current != nullptr){
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }
};

int main(){
    LinkedList my;
    my.append(3);
    my.append(4);
    my.append(5);
    my.append(6);
    my.append(7);
    my.append(8);
    my.append(9);
    my.append(10);
    my.append(30);
    
    my.display();
    
    my.printMiddleNode();
    
    return 0;
}
