#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    
    //constructor
    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class LinkedList{
private:
    Node* head;
    
public:
    LinkedList() : head(nullptr) {}
    
    bool isEmpty(){
        return head == nullptr;
    }
    
    // add Node at tail
    void append(int value){
        Node* newNode = new Node(value);
        
        if(isEmpty()){
            head = newNode;
        }else{
            Node* lastnode = head;
            while(lastnode -> next != nullptr){
                lastnode = lastnode -> next;
            }
            lastnode -> next = newNode;
            newNode -> prev = lastnode;
        }
    }
    
    // add node at head;
    void prepend(int value){
        Node* newNode = new Node(value);
        newNode -> next = head;
        if(head != nullptr){
            head -> prev = newNode;
        }
        head = newNode;
    }
    
    void insertAtPosition(int data, int position){
            Node* newNode = new Node(data);
            if(position == 0 || isEmpty()){
                newNode->next = head;
                if(head != nullptr){
                    head->prev = newNode;
                }
                head = newNode;
            }else{
                Node* current = head;
                for(int i = 0; i < position - 1 && current != nullptr; ++i){
                    current = current->next;
                }
                if(current == nullptr){
                    cerr << "Invalid position\n";
                    return;
                }
                newNode->next = current->next;
                newNode->prev = current;
                if(current->next != nullptr){
                    current->next->prev = newNode;
                }
                current->next = newNode;
            }
        }
    
    void deleteNode(int pos){
            Node* current = head;
            while(current != nullptr && current->data != pos){
                current = current->next;
            }

            if(current == nullptr){
                return;
            }

            if(current->prev != nullptr){
                current->prev->next = current->next;
            }else{
                head = current->next;
            }

            if(current->next != nullptr){
                current->next->prev = current->prev;
            }
            delete current;
        }
        
    void display(){
            Node* current = head;
            while(current != nullptr){
                cout << current->data << " <-> ";
                current = current->next;
            }
            cout << "nullptr" << '\n';
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
    LinkedList mylist;
    mylist.prepend(10);
    mylist.prepend(20);
    mylist.prepend(30);
    mylist.prepend(50);
    
    mylist.display();
    
    mylist.append(1);
    mylist.append(2);
    mylist.append(3);
    
    mylist.display();
    
    mylist.deleteNode(4);
    mylist.display();
    
    mylist.insertAtPosition(9, 4);
    
    mylist.display();
    
    mylist.isEmpty();
    
    return 0;
}
