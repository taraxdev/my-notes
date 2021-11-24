<h3> Traversal of a linked list </h3>


```C
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* n){
    while(n!= NULL){
        printf("%d->", n->data);
        n = n->next;
    }
}

int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* tail = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 3;
    second->next = tail;

    tail->data = 4;
    tail->next = NULL;

    printList(head);
}
    
```

<h3> Insertion in linked list </h3>


```C
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

void display(struct node* ptr){
    while(ptr!=NULL){
        printf("%d->", ptr->data);
        ptr=ptr->next;
    }
}

// insert at Beginning
struct node* insertAtFirst(struct node* head, int data){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
}

//insert At Between
struct node* insertAtBetween(struct node* head, int data, int index){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    int i = 0;

    while(i!= index-1){
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}

//insert At End
struct node* insertAtEnd(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    struct node* p = head;
    
    while(p->next!=NULL){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;

}

void main(){

    struct node* head = NULL;
    struct node* second = NULL;
    struct node* tail = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    tail = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = tail;

    tail->data = 6;
    tail->next = NULL;

    printf("Travesal Linked List: ");
    display(head);

    printf("\nInsertAtFirst Linked List: ");
    head = insertAtFirst(head , 69);
    display(head);

    printf("\nInsertAtBetween Linked List: ");
    head = insertAtBetween(head, 96, 2);
    display(head);

    printf("\nInsertAtEnd Linked List: ");
    head = insertAtEnd(head, 69);
    display(head);
}
```
