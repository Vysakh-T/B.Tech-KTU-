#include<stdio.h>
void main()
{
int a[100],n,sum = 0,i,small,large;
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
small = a[0];
large = a[0];
printf("\nThe array you entered is:\n");
for(i=0;i<n;i++)
{
if(a[i]<small) small = a[i];
if(a[i]>large) large = a[i];
printf("%d ",a[i]);
}
printf("\nThe smallest element is %d and the largest element is %d\n",small,large);
}

