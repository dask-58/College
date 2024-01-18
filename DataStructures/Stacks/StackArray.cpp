#include <iostream>
using namespace std;

class Stack{
private:
    int N;
    int * arr;
    int top;
public:
    Stack(){ //constructor;
        top = -1;
        N = 1e3 + 10; //size
        arr = new int[N];
    }
    ~Stack(){ //destructor
        delete[] arr;
    }
    void push(int value){
        top++;
        arr[top] = value;
    }
    int pop(){
        if(top == -1){
            cout << "Stack is empty\n";
            return -1;
        }
        int temp = arr[top];
        top--;
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
        if(top == -1){
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack elements: \n";
        for(int i = top; i >= 0; i--){
            cout << '|' << arr[i] << '|' << '\n';
        }
    }
};

int main(void){
    Stack mystack;
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);

    mystack.display();

    mystack.pop();

    mystack.display();

    cout << "Top Element : " << mystack.TopElement();

    cout << "\nSize : \n" << mystack.size();
    return 0;
}