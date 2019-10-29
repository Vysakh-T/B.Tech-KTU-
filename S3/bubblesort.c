#include<stdio.h>
void main()
{
int a[100],i,j,n,temp;
b:
printf("\nEnter the number of elements of the array: ");
scanf("%d",&n);
if(n>100){printf("\nEnter a limit less than 100.\n");goto b;}
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
}
}
printf("\nThe sorted array is: \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}


