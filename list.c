#include<stdio.h>
#include<conio.h>
void insertbeg();
void insertmid();
void insertlast();
void del();
void disp();
int size();
struct list
{
int data;
struct list *next;
};
struct list *head,*temp,*last;
void main()
{
int val,ch;
clrscr();
while(1)
{
printf("\n1.insert at begging");
printf("\n2.insert at middle");
printf("\n3.insert at last");
printf("\n4.delete");
printf("\n5.display");
printf("\n6.size");
printf("\n7.exit");
printf("\nEnter ur choice:");
fflush(stdin);
scanf("%d",&ch);
clrscr();
switch(ch)
{
case 1:insertbeg();break;
case 2:insertmid();break;
case 3:insertlast();break;
case 4:del();break;
case 5:disp();break;
case 6:size();break;
case 7:exit(0);
default:printf("wrongly selected");
}}getch();}
void insertbeg()
       { int val;
       struct list *newnode;
       newnode=(struct list *)malloc(sizeof(struct list));
       printf("Enter the value");
       fflush(stdin);
       scanf("%d",&val);
       newnode->data=val;
       newnode->next=NULL;
       if(head==NULL)
       { head=newnode;
       last=newnode;
       }else
       {  newnode->next=head;
      head=newnode;
       }}
       void insertlast()
       {
          int value;
       struct list *newnode;
       printf("enter the value");
       fflush(stdin);
       scanf("%d",&value);
       newnode=(struct list *)malloc(sizeof(struct list));
       newnode->data=value;
       newnode->next=NULL;
       if(head==NULL)
       {head=newnode;
       last=newnode;
       }
       else
       {last->next=newnode;
       last=newnode;
 
       }
       }
       void insertmid()
       {int value,value1;
       struct list *newnode;
       printf("enter the value:");
       fflush(stdin);
       scanf("%d",&value);
       newnode=(struct list *)malloc(sizeof(struct list));
       newnode->data=value;
       newnode->next=NULL;
       printf("enter insert after the value\n");
       scanf("%d",&value1);
       temp=head;
       while(temp->data!=value1)
temp=temp->next;
       newnode->next=temp->next;
       temp->next=newnode;
 
       }
       void del()
       {int value;
       temp=head;
       if(head==NULL)
       printf("list is empty");
       else
       {printf("enter the value to be delete\n");
       scanf("%d",&value);
       if(head->data==value)
       head=head->next;
       else
       {
       while(head->next->data!=value)
       head=head->next;
       if(head->next==NULL)
       printf("the element not present\n");else
       if(head->next->next==NULL)
       last=head;
       head->next=head->next->next;
       printf("the element is deleted\n");
       head=temp;
       }
       }
       }
 
 
 
       int size()
       {int count=0;
      temp=head;
      while(temp!=NULL)
      {count++;
      temp=temp->next;
      }
      printf("size of list is %d",count);
      return 0;
       }
       void disp()
       {  temp=head;
       if(temp==NULL)
       printf("List is empty");
       else
       {
       printf("\n The list is");
       while(temp->next!=NULL)
       {printf("%d->",temp->data);
       temp=temp->next;
        }
        printf("%d",temp->data);
        }
        }
      
