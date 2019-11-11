#include<stdio.h>
void main()
{
int pos,temp,a[100],n,i,j,small;
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe array you entered is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
for(i=0;i<n-1;i++)
{
small = a[i];
for(j=i+1;j<n;j++)
{if(a[j]<small) 
{small=a[j];pos=j;}
}
if(small!=a[i])
{
temp = a[pos];
a[pos] = a[i];
a[i] = temp;
}
}
printf("\nThe sorted array is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}

