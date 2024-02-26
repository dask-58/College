#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    void insertFront(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void insertEnd(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void insertAtPosition(int data, int position) {
        if (position < 0) {
            cout << "Invalid position.\n";
            return;
        }

        if (position == 0) {
            insertFront(data);
        } else {
            Node* newNode = new Node;
            newNode->data = data;

            Node* current = head;
            for (int i = 0; i < position - 1 && current != nullptr; ++i) {
                current = current->next;
            }

            if (current == nullptr) {
                cout << "Position out of range.\n";
            } else {
                newNode->next = current->next;
                current->next = newNode;
            }
        }
    }

    void deleteEnd() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        while (current->next != nullptr) {
            prev = current;
            current = current->next;
        }
        delete current;
        prev->next = nullptr;
    }

    void deleteAtPosition(int position) {
        if (position < 0 || head == nullptr) {
            cout << "Invalid position or list is empty.\n";
            return;
        }

        if (position == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        for (int i = 0; i < position && current != nullptr; ++i) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Position out of range.\n";
        } else {
            prev->next = current->next;
            delete current;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;
    int choice, value, position;

    do {
        cout << "Menu:\n"
                  << "1. Insert Element at Front\n"
                  << "2. Insert Element at End\n"
                  << "3. Insert Element at Position\n"
                  << "4. Delete Element from End\n"
                  << "5. Delete Element from Position\n"
                  << "6. Display Elements\n"
                  << "7. Exit\n"
                  << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                myList.insertFront(value);
                cout << "Element inserted.\n";
                break;
            case 2:
                cout << "Enter the value to insert: ";
                cin >> value;
                myList.insertEnd(value);
                cout << "Element inserted.\n";
                break;
            case 3:
                cout << "Enter the value to insert: ";
                cin >> value;
                cout << "Enter the position to insert: ";
                cin >> position;
                myList.insertAtPosition(value, position);
                break;
            case 4:
                myList.deleteEnd();
                cout << "Element deleted from end.\n";
                break;
            case 5:
                cout << "Enter the position to delete: ";
                cin >> position;
                myList.deleteAtPosition(position);
                break;
            case 6:
                cout << "Elements of the list: ";
                myList.display();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
