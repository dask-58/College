#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *arr;
    int top;
    int N;
} Stack;

Stack createStack(){
    Stack stack;
    stack.top = -1;
    stack.N = 1000 + 10; // size
    stack.arr = (int*)malloc(stack.N * sizeof(int));
    return stack;
}

void push(Stack *stack, int value){
    stack->arr[++stack->top] = value;
}

int pop(Stack *stack){
    if(stack -> top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    int temp = stack->arr[stack->top];
    stack -> top--;
    return temp;
}

int topElement(Stack *stack){
    if(stack -> top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    return stack -> arr[stack->top];
}

int size(Stack *stack){
    return stack -> top + 1;
}

void display(Stack *stack){
    if(stack->top == -1){
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements: \n");
    for(int i = stack -> top; i >= 0; i--){
        printf("|%d|\n", stack -> arr[i]);
    }
}

void destroyStack(Stack *stack){
    free(stack -> arr);
}

int main(void){
    Stack mystack = createStack();
    push(&mystack, 10);
    push(&mystack, 20);
    push(&mystack, 30);

    display(&mystack);

    pop(&mystack);

    display(&mystack);

    printf("Top Element: %d\n", topElement(&mystack));

    printf("Size: %d\n", size(&mystack));

    destroyStack(&mystack);
    return 0;
}
