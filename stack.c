#include<stdio.h>
#include<stdlib.h>
void pop();
void push();
void display();

int top=-1,l,i,st[30],fl;

void main()
{
int ch,s;
top=-1;
printf("\n Enter the Size of the Stack:");
scanf("%d ",&s);
l=s;
while(s!=0)
{
	printf("\n1. Push()\n2. Pop()\n3.Display \n4.Exit\n");
	printf("\n Enter the choice of operation:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
     		push();
		printf("\n");
    		break;
		}

		case 2:
		{
     		pop();
		printf("\n");
     		break;
                }
		case 3:
                {
     		display();
		printf("\n");
		break;
		}
		case 4:
		{
		exit(0);
		}
		default:
		printf("\n Wrong choice!\a");
		break;
}
}
}

void pop()
{
//printf("\n Deletion is working");
if(top<=-1)
{
printf("\nStack Underflow");
}
else
{
//printf("\n the popped element is:%d ",st[top]);
top--;
i=top;
printf("\n element is deleted");
fl=1;
}
}

void push()
{
//printf("\n insertion is working");
if(top==l)
{
printf("\n Stack Overflow");
}
else
{
printf("\n Enter the elements:");
for(top=0;top<l;top++)
{
scanf(" %d",&st[top]);
}
}
}




void display()
{
int o;
if(top==-1)
{
printf("\n The stack is empty");
}
else
{
	printf("\n Your Current Stack is:\n");
	if(fl==1)
		{
		for(top=0;top<i;top++)
		{
		printf("%d\n",st[top]);
		}
		}
	else
	{
	for(top=0;top<l;top++)
		{
		printf("%d\n",st[top]);
		}
	}
}
}



