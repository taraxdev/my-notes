#include <stdio.h>
#include <stdlib.h>
#define size 5
int cq[size];
int front = -1;
int rear = -1;

int enqueue(){
    int val;
    
    if ((front==0 && (rear == size - 1)) || (rear==front-1))
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &val);
        rear = (rear + 1)%size;
        cq[rear] = val;
    }
}

int dequeue(){
    int val2;
    if((front==-1)&&(rear==-1)){
        printf("QC is empty");
    }else{
        if(front==rear){
            front=-1;
            rear=-1;
        }else {
            printf("Element deleted from queue is : %d\n", cq[front]);
		        front = ((front + 1)%size);
        }
    }
}

int display(){
    int l=front;
    while(l!=rear)
        {
            printf("\n%d",cq[l]);
            l=(l+1)%size;
        }
    printf("%d\n",cq[rear]);
}

void main(){
    int choice;

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
