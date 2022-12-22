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
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}


printf("\n \nYour sorted array is :");
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
printf("\n \n");
}

