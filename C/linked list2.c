#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int data;
    struct node *next;
  };
   struct node *new,*head;
   struct node *l,*temp;
   struct node *del;
   int n,pos,i;
   
   void create()
   {
    new=(struct node *)malloc(sizeof(struct node));
  printf("Enter the value to insert:\n");
  scanf("%d",&n);
  new->data=n;
  new->next=NULL;
   }
  void insert_beg()
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
 
  void insert_end()
  {
  create();
  if(head==NULL)
  {
    head=new;
  }
  else
  {
    l=head;
    while(l->next!=NULL)
    {
    l=l->next;
    }
    l->next=new;
    }
  }
   
    void insert_pos()
    {
    create();
  if(head==NULL)
  {
    head=new;
  }
  else
  {
  l=head;
  printf("Enter position:\n");
  scanf("%d",&pos);
  if(pos==0)
  {
  insert_beg();
  }
  else
  {
  for(i=0;i<pos-1;i++)
  {
  l=l->next;
  }
  new->next=l->next;
  l->next=new;
  }
  }
    }
   
   void delete_beg()
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
   
   void delete_end()
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
    while(del->next!=NULL)
    {
    temp=del;
    del=del->next;
    }
    temp->next=NULL;
    printf("Deleted %d\n",del->data);
    free(del);
    }
    }
   }
   
   void delete_pos()
   {
    if(head==NULL)
    {
    printf("List empty...\n");
    }
    else
  {
  l=head;
  printf("Enter position:\n");
  scanf("%d",&pos);
  if(pos==0)
  {
  delete_beg();
  }
  else
  {
  del=head;
  for(i=0;i<pos;i++)
  {
  temp=del;
  del=del->next;
  if(del==NULL)
  {
  printf("Error\n");
  }
  }
  temp->next=del->next;
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
      printf("%d->",l->data);
      l=l->next;
    }
   }
   }
void main()
{
   int ch;
   while(1)
   {
   printf("\n1.Insert into linked list at beginning\n2.Insert into linked list at end\n3.Insert into linked list at a particular position\n4.Delete from the beginning\n5.Delete from end\n6.Delete from a particular position\n7.Display linked list\n8.Exit\n");
   printf("Enter your choice:\n");
   scanf("%d",&ch);
   //while(1)
   //{
    switch(ch)
    {
    case 1:
    insert_beg();
    break;
    case 2:
    insert_end();
    break;
    case 3:
    insert_pos();
    break;
    case 4:
    delete_beg();
    break;
    case 5:
    delete_end();
    break;
    case 6:
    delete_pos();
    break;
    case 7:
    display();
    break;
    case 8:
    exit(1);
    break;
    default:
    printf("Invalid Choice\n");
    }
   }
 }
