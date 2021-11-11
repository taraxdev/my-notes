#include <stdio.h>
int stack[100],i,j,num,choice = 0;
int top = -1; //becoz stack is empty

void push(){
	int val;
	if(top==num){
		printf("Stack is full");
	}else{
		printf("Enter the elements");
		scanf("%d", &val);
		top++;
		stack[top] = val;
	}
}

void pop(){
	if(top==-1){
		printf("Stack is empty");
	}else{
		top--;
	}
}

void display(){
	printf("stack elements are: \n");
	for(int i=top; i>=0; i--){
		printf("%d\n", stack[i]);
	}
}

void main(){
	printf("Please enter the elements in stack: ");
	scanf("%d",&num);
	printf("Please choice any 4 options: ");
	while(choice!=4){
	    scanf("%d", &choice);
		switch(choice){
			case 1:
			{
				push();
				break;
			}

			case 2:
			{
				pop();
				break;
			}

			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("Exiting...");
				break;
			}
			default:
			{
				printf("Please enter valid number");
			}
		}
	}

}
