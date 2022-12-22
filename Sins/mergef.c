#include<stdio.h>
void main()
{
int a[10],b[10],i,j,k,n,m,c[100];
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
scanf("%d",&m);
printf("\nEnter the elments in array:\n");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}

printf("\n \nYour Second array is :");
for(i=0;i<m;i++)
{
printf("%d  ",b[i]);
}
printf("\n \n");
i=0;
j=0;
while(i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=n)
{
while(j<m)
{
c[k]=b[j];
j++;
k++;
}
}
if(j>=m)
{
while(i<n)
{
c[k]=a[i];
i++;
k++;
}
}
printf("\n Merged array is:\n");
for(i=0;i<m+n;i++)
{
printf("%d  ",c[i]);
}
printf("\n \n");
}
