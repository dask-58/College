#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    int rear, front;
    int size;
    int *arr;

public:
    Queue() {
        front = rear = -1;
        size = MAX_SIZE;
        arr = new int[MAX_SIZE];
    }

    bool isFull(){
        return (front == 0 && rear == size - 1) || ((rear + 1) % size == front);
    }

    bool isEmpty(){
        return front == -1;
    }

    void enQueue(int value){
        if (isFull()) {
            cout << "\nQueue is Full";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        cout << value << " enqueued to queue.\n";
    }

    int deQueue(){
        if (isEmpty()) {
        cout << "\nQueue is Empty";
        return -1;
        }

        int data = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return data;
    }

    void displayQueue(){
        if (isEmpty()) {
            cout << "\nQueue is Empty";
            return;
        }

        cout << "\nElements in Queue are: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        } else {
            for (int i = front; i < size; i++) {
                cout << arr[i] << " ";
            }

            for (int i = 0; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        }
        cout << '\n';
    }
};    

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enQueue(value);
                break;
            case 2:
                cout << "Dequeued value = " << q.deQueue() << endl;
                break;
            case 3:
                q.displayQueue();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
