#include <iostream>
using namespace std;

// Just point the last node to first node.
class Node{
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class CircularLinkedList{
private:
    Node* head;

public:
    
};