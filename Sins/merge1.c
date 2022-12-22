#include<stdio.h>
void main()
{
int a[10],b[10],i,j,k,temp,n,l,c[100];
printf("\n First array ");
printf("\n--------------");
printf("\nEnter the limit:");
scanf("%d",&n);
printf("\nEnter the elments in array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n \nYour First array is :");
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
printf("\n \n");


printf("\n \n");
printf("\n Second array ");
printf("\n--------------");
printf("\nEnter the limit:");
scanf("%d",&l);
printf("\nEnter the elments in array:\n");
for(i=0;i<l;i++)
{
scanf("%d",&b[i]);
}

printf("\n \nYour Second array is :");
for(i=0;i<l;i++)
{
printf("%d  ",b[i]);
}
printf("\n \n");



for(i=0;i<n;i++)
{
c[i]=a[i];
}

for(i=0;i<l;i++)
{
c[n+i]=b[i];
}
printf("\n\nYour Third array:\n");
for(i=0;i<l+n;i++)
{
printf("%d ",c[i]);
}


for(i=0;i<l+n;i++)
{
for(j=i+1;j<l+n;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
}

printf("\n\nYour sorted merged array:\n");
for(i=0;i<l+n;i++)
{
printf("%d ",c[i]);
}
printf("\n \n");
}
