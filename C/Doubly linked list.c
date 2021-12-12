#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int data;
    struct node *next;
    struct node *prev;
   
  };
   struct node *new,*head;
   struct node *l,*del;
   
   int pos,i;
   void create()
   {
    int n;
    new=(struct node *)malloc(sizeof(struct node));
  printf("Enter the value to insert:\n");
  scanf("%d",&n);
  new->data=n;
  new->next=NULL;
  new->prev=NULL;
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
    head->prev=new;
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
    new->prev=l;
    l->next=new;
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
  new->prev=l;
  new->next=l->next;
  l->next->prev=new;
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
    printf("Removed %d\n",del->data);
    free(del);
    head=NULL;
    }
    else
    {
    del=head;
    head=del->next;
    del->prev=NULL;
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
    printf("Removed %d\n",del->data);
    free(del);
    head=NULL;
    }
    else
    {
    del=head;
    while(del->next!=NULL)
    {
    del=del->next;
    }
    del->prev->next=NULL;
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
  del=del->next;
  }
  del->prev->next=del->next;
  del->next->prev=del->prev;
  printf("Removed %d\n",del->data);
  free(del);
  }
  }
   }
  void main()
  {
  int ch;
   while(1)
   {
   printf("1.Insert into linked list at beginning\n2.Insert into linked list at end\n3.Insert into linked list at a particular position\n4.Delete from linked list at beginning\n5.Delete from linked list at end\n6.Delete from linked list at a particular position\n7.Display linked list\n8.Exit\n");
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
    printf("Invalid choice");                                            
  }
  }
 }
