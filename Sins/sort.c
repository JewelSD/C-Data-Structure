#include<stdio.h>
void main()
{
int a[20],i,j,n,temp;
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


for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}


printf("\n \nYour sorted array is :");
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
printf("\n \n");
}

