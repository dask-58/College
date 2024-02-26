#include <iostream>

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head;
public:
    CircularLinkedList() : head(nullptr) {}

    ~CircularLinkedList() {
        if (head == nullptr)
            return;

        Node* current = head->next;
        while (current != head) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        delete head;
    }

    void insertFront(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        if (head == nullptr) {
            head = newNode;
            head->next = head;
            return;
        }

        Node* last = head;
        while (last->next != head)
            last = last->next;

        newNode->next = head;
        head = newNode;
        last->next = head;
    }

    void insertEnd(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        if (head == nullptr) {
            head = newNode;
            head->next = head;
            return;
        }

        Node* last = head;
        while (last->next != head)
            last = last->next;

        last->next = newNode;
        newNode->next = head;
    }

    void insertAtPosition(int data, int position) {
        if (position <= 0) {
            std::cout << "Invalid position.\n";
            return;
        }

        if (position == 1) {
            insertFront(data);
            return;
        }

        Node* newNode = new Node;
        newNode->data = data;

        Node* current = head;
        for (int i = 1; i < position - 1 && current != nullptr; ++i)
            current = current->next;

        if (current == nullptr) {
            std::cout << "Position out of range.\n";
        } else {
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void deleteFront() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            Node* last = head;
            while (last->next != head)
                last = last->next;

            head = head->next;
            last->next = head;
            delete temp;
        }
    }

    void deleteEnd() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        Node* last = head;
        Node* prev = nullptr;
        while (last->next != head) {
            prev = last;
            last = last->next;
        }

        if (prev == nullptr) {
            delete head;
            head = nullptr;
        } else {
            prev->next = head;
            delete last;
        }
    }

    void deleteAtPosition(int position) {
        if (position <= 0 || head == nullptr) {
            std::cout << "Invalid position or list is empty.\n";
            return;
        }

        if (position == 1) {
            deleteFront();
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        for (int i = 1; i < position && current != nullptr; ++i) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            std::cout << "Position out of range.\n";
        } else {
            prev->next = current->next;
            delete current;
        }
    }

    void display() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList myList;
    int choice, value, position;

    do {
        std::cout << "Menu:\n"
                  << "1. Insert Element at Front\n"
                  << "2. Insert Element at End\n"
                  << "3. Insert Element at Position\n"
                  << "4. Delete Element from Front\n"
                  << "5. Delete Element from End\n"
                  << "6. Delete Element from Position\n"
                  << "7. Display Elements\n"
                  << "8. Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the value to insert: ";
                std::cin >> value;
                myList.insertFront(value);
                std::cout << "Element inserted.\n";
                break;
            case 2:
                std::cout << "Enter the value to insert: ";
                std::cin >> value;
                myList.insertEnd(value);
                std::cout << "Element inserted.\n";
                break;
            case 3:
                std::cout << "Enter the value to insert: ";
                std::cin >> value;
                std::cout << "Enter the position to insert: ";
                std::cin >> position;
                myList.insertAtPosition(value, position);
                break;
            case 4:
                myList.deleteFront();
                std::cout << "Element deleted from front.\n";
                break;
            case 5:
                myList.deleteEnd();
                std::cout << "Element deleted from end.\n";
                break;
            case 6:
                std::cout << "Enter the position to delete: ";
                std::cin >> position;
                myList.deleteAtPosition(position);
                break;
            case 7:
                std::cout << "Elements of the list: ";
                myList.display();
                break;
            case 8:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 8);

    return 0;
}
