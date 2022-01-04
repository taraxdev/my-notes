#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
 };

 struct node *new,*head;
 struct node *l;
 struct node *del;
 int n;

 void create()
 {
 new=(struct node *)malloc(sizeof(struct node));
 printf("Enter the value to insert:\n");
 scanf("%d",&n);
 new->data=n;
 new->next=NULL;
 }

 void push()
 {
 create();
 if(head==NULL)
 {
 head=new;
 }
 else
 {
 new->next=head;
 head=new;
 }
 }

 void pop()
 {
 if(head==NULL)
 {
 printf("List empty...\n");
 }
 else
 {
 if(head->next==NULL)
 {
 del=head;
 head=NULL;
 printf("Removed %d\n",del->data);
 free(del);
 }
 else
 {
 del=head;
 head=del->next;
 printf("Removed %d\n",del->data);
 free(del);
 }
 }
 }
 void display()
 {
 if(head==NULL)
 {
 printf("List empty...\n");
 }
 else
 {
 l=head;
 printf("\nThe elements are:\n");
 while(l!=NULL)
 {
 printf("%d\n",l->data);
 l=l->next;
 }
 }
 }

 void main()
 {
 int ch;
 while(1)
 {
 printf("1.Insert into stack\n2.Delete from stack\n3.Display stack elements\n4.Exit\n");
 printf("Enter your choice:\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 push();
 break;
 case 2:
 pop();
 break;
 case 3:
 display();
 break;
 case 4:
 exit(1);
 break;
 default:
 printf("Invalid choice\n");
 }
 }
 }
