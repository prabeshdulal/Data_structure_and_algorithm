#include <stdio.h>
#include <stdlib.h>  // Include this for the exit() function

#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

int pop() {
    int value;
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);  // Exiting the program when the stack underflows
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

void print() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    for (i = 0; i <= top; i++) {
        printf("%d ", stack_arr[i]);  // Adding a space between elements
    }
    printf("\n");  // Adding a line break after printing the stack
}

int main() {
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    // push(6);  // Commented out to avoid stack overflow
    print();  // Print the stack contents
    data = pop();
    printf("Popped value: %d\n", data);  // Print the popped value
    print();  // Print the updated stack contents after pop
    return 0;
}
