#include <stdio.h>
#include <stdlib.h>
# define size 100
// int size = 100;
void enqueue();
void dequeue();
void display();

int inp_queue[size];
int front = -1;
int rear = -1;
int choice;

void main(){
    while(1){
        printf("Enter the choice of operations: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Please enter valid number!!!");
        }
    }
}

void enqueue(){
    int val;
    if(rear == size){
        printf("Stack is full!!!");
    }else{
        if(front == -1)
        front = 0;
        printf("Please enter the elements");
        scanf("%d", &val);
        rear++;
        inp_queue[rear] = val;

    }
}

void dequeue(){
    if(front == -1|| front > rear){
        printf("queue is empty");
    }else{
        printf("Element deleted form queue");
        front++;
    }
}

void display(){
    if(front==-1){
        printf("queue is empty \n");
    }else{
        printf("the Elements are \n");
        for(int i=front;i<= rear;i++){
            printf("%d\n", inp_queue[i]);
        }
    }
}
