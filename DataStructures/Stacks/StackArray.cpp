#include <iostream>
using namespace std;

class Stack{
private:
    int N;
    int *arr;
    int top;

public:
    Stack(){ //constructor
        top = -1;
        N = 1e3 + 10; // size
        arr = new int[N];
    }

    ~Stack(){
        delete[] arr;
    }

    void push(int value){
        arr[++top] = value;
        cout << value << " pushed into the stack\n";
    }

    int pop(){
        if(top == -1){
            cout << "Stack is empty. Cannot pop.\n";
            return -1;
        }
        int temp = arr[top];
        top--;
        cout << temp << " popped from the stack\n";
        return temp;
    }

    int TopElement(){
        if(top == -1){
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    int size(){
        return top + 1;
    }

    void display(){
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack elements: \n";
        for (int i = top; i >= 0; i--) {
            cout << '|' << arr[i] << '|' << '\n';
        }
    }
};

int main(void){
    Stack mystack;
    int choice, value;

    while(1){
        cout << "\n1. Push\n2. Pop\n3. Top Element\n4. Size\n5. Display\n6. Exit\nEnter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                mystack.push(value);
                break;

            case 2:
                mystack.pop();
                break;

            case 3:
                cout << "Top Element: " << mystack.TopElement() << '\n';
                break;

            case 4:
                cout << "Size: " << mystack.size() << '\n';
                break;

            case 5:
                mystack.display();
                break;

            case 6:
                cout << "Exiting program...\n";
                cout << "Program exited.\n";
                return 0;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
