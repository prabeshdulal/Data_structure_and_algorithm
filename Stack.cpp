#include<stdio.h>
#define MAX 4

//since stack_arr[max] and top variable is needed in every function we define both globally
int stack_arr[MAX];
int top = -1;

void push(int data){
	if(top == MAX - 1){
		printf("stack overflow"); //checking the condition of stack isfull or not
		return;
	}
	   
		top = top + 1;
		stack_arr[top] = data;	
}

int main(){
	push(1); //implementing push operation inthe stack
	push(2);
	push(3);
	push(4);

	return 0;
}
