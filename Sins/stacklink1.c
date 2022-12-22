#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int max ,top=0;

struct node
{
int data;
struct node *nxt;
};
struct node *temp,*head=NULL,*newnode;

void main()
{
int data;
int ch;
printf("\nEnter size of Stack:");
scanf("%d",&max);
do
{

printf("\n0.Exit\n1.Push\n2.Pop\n3.Display");
printf("\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 0:
printf("\n Exiting the program...");
return;
break;

case 1:
push();
printf("\n\n");
break;

case 2:
pop();
printf("\n\n");
break;

case 3:
display();
printf("\n\n");
break;

default:
{
printf("\n Wrong choice re-Enter");
printf("\n\n");
}
}
}while(ch!=0);
}


void push()
{
int val;
//printf("\n Push is working");
printf("\n Enetr the value to push:");
scanf("%d",&data);
val=data;
if(top!=max)
{
top++;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=val;
newnode->nxt=NULL;
if(head==NULL)
{
head=temp=newnode;
}
else
{
newnode->nxt=head;
head=newnode;
}
display();
}

else
{
printf("Stack Overflow");
}
}


void pop()
{
//printf("\n Pop is working");
if (top>0)
{
top--;
temp=head;
head=head->nxt;
printf("%d",temp->data);
free(temp);
display();
}
else
{
printf("\n Stack underflow");
}
}


void display()
{
//printf("\n display is working");
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->nxt;
}
}




