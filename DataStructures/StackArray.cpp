#include <iostream>
using namespace std;

const int N = 200;

class Stack {
private:
    int arr[N];
    int top;

public:
    Stack() : top(-1) {}

    // Check Full and empty
    bool isEmpty() const {
        return top == -1;
    }
    bool isFull() const {
        return top == N - 1;
    }

    // Operations;
    // push
    void push(int value) {
        if (!isFull()) {
            arr[++top] = value;
        } else {
            cout << "Stack Overflow :(\n";
        }
    }

    // pop
    void pop() {
        if (!isEmpty()) {
            top--;
        } else {
            cout << "Stack underflow :(\n";
        }
    }

    int peek(int value) const {
        if (!isEmpty()) {
            return arr[top - value + 1];
        } else {
            cout << "Cannot peek \n";
            return -1;
        }
    }

    void TopElement() const {
        if (!isEmpty()) {
            cout << arr[top] << '\n';
        } else {
            cout << "Stack is empty\n";
        }
    }

    void display() const {
        if (!isEmpty()) {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << '\n';
        } else {
            cout << "Stack is empty\n";
        }
    }
    int LastElement() const {
        if (!isEmpty()) {
            return arr[0];
        } else {
            cout << "Stack is empty\n";
            return -1; 
        }
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Stack after push operations: ";
    stack.display();

    cout << "Peek 2nd element: " << stack.peek(2) << '\n';

    stack.pop();
    stack.pop();

    cout << "Stack after pop operations: ";
    stack.display();
    return 0;
}
