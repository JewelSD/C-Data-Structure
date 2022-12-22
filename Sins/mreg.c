#include<stdio.h>
void main()
{
int a[10],b[10],i,j,k,temp,n,d,l,s=0,c[100];
printf("\n First array ");
printf("\n--------------");
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


printf("\n \nYour sorted First array is :");
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
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
printf("\n \n\tYour array Elements are:");
for(i=0;i<l;i++)
{
printf("%d  ",b[i]);
}

for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}


printf("\n \nYour Second sorted array is :");
for(i=0;i<l;i++)
{
printf("%d  ",b[i]);
}
printf("\n \n");
s=l+n;
printf("\n Your Merged array is:\n");
i=0;
for(k=0;k<n;k++)
{
c[k]=a[i];
i++;
}
d=k;

i=0;
for(k=d;k<l;k++)
{
c[k]=b[i];
i++;
}
for(k=0;k<s;k++)
{
printf("%d  ",c[k]);
}

printf("\n");
}




