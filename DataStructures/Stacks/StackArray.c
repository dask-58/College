#include <stdio.h>
#include <stdbool.h>  

const int N = 1e3 + 10;

typedef struct {
    int arr[N];
    int top;
} Stack;

void StackInit(Stack* stack){
    stack -> top = -1;
}

bool isEmpty(const Stack* stack){
    return stack -> top == -1;
}

bool isFull(const Stack* stack){
    return stack->top == N - 1;
}

int push(Stack* stack, int value){
    if(!isFull(stack)){
        stack -> arr[++stack -> top] = value;
        return 0; 
    }else{
        printf("Stack Overflow\n");
        return -1;
    }
}

void pop(Stack* stack){
    if(!isEmpty(stack)){
        stack -> top--;
    }else{
        printf("Stack underflow\n");
    }
}

int peek(const Stack* stack){
    if(!isEmpty(stack)){
        return stack -> arr[stack -> top];
    }else{
        printf("Cannot Peek\n");
        return -1;  
    }
}

void display(const Stack* stack){
    if(!isEmpty(stack)){
        for(int i = 0; i <= stack -> top; i++){  
            printf("%d ", stack -> arr[i]);
        }
        printf("\n");
    }else{
        printf("Stack is Empty\n");
    }
}

int main(){
    Stack mystack;
    StackInit(&mystack);

    push(&mystack, 10);
    push(&mystack, 20);
    push(&mystack, 30);

    display(&mystack);

    pop(&mystack);

    display(&mystack);

    printf("Peek: %d\n", peek(&mystack));

    return 0;
}
