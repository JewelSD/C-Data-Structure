#include<stdio.h>
void main()
{
int a[10],key,i,n,f=0,s;
printf("\nEnter the limit:");
scanf("%d",&n);
printf("\nEnter the elments in array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n \n\tYour array Elements are:");
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
printf("\n");
printf("\n Enter the element you want to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
f=1;
break;
}

else
{
f=0;
}
}
if(f==1)
{
printf("\n The element %d is found in %d position\n",key,i);
}
else
{
printf("\n Element %d is not found\n",key);
}
}
