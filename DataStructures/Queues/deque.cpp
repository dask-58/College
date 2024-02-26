#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Deque {
private:
    int dq[MAX_SIZE];
    int front, rear;

public:
    Deque(){
        front = rear = -1;
    }
    bool isFull(){
        return (front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1);
    }
    bool isEmpty() {
        return front == -1;
    }

    void pushFront(int value){
        if (isFull()) {
            cout << "Deque is full, cannot push front.\n";
            return;
        }

        if (front == -1){
            front = rear = 0;
        }else if (front == 0){
            front = MAX_SIZE - 1;
        }else{
            front--;
        }

        dq[front] = value;
        cout << value << " pushed to front of deque.\n";
    }

    void pushBack(int value) {
        if (isFull()) {
            cout << "Deque is full, cannot push back.\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        } else if (rear == MAX_SIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }

        dq[rear] = value;
        cout << value << " pushed to back of deque.\n";
    }

    void popFront() {
        if (isEmpty()) {
            cout << "Deque is empty, cannot pop front.\n";
            return;
        }

        int poppedValue = dq[front];

        if (front == rear) {
            front = rear = -1;
        } else if (front == MAX_SIZE - 1) {
            front = 0;
        } else {
            front++;
        }

        cout << poppedValue << " popped from front of deque.\n";
    }

    void popBack() {
        if (isEmpty()) {
            cout << "Deque is empty, cannot pop back.\n";
            return;
        }

        int poppedValue = dq[rear];

        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = MAX_SIZE - 1;
        } else {
            rear--;
        }

        cout << poppedValue << " popped from back of deque.\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty.\n";
            return;
        }

        cout << "Deque elements are: ";
        int i = front;
        while (true) {
            cout << dq[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX_SIZE;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;
    int choice, value;
    do {
        cout << "\nMenu:\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Back\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push front: ";
                cin >> value;
                dq.pushFront(value);
                break;
            case 2:
                cout << "Enter value to push back: ";
                cin >> value;
                dq.pushBack(value);
                break;
            case 3:
                dq.popFront();
                break;
            case 4:
                dq.popBack();
                break;
            case 5:
                dq.display();
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while(choice != 6);

    return 0;
}
