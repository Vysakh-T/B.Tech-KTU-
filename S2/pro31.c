#include<stdio.h>
void main()
{
int temp,a[100],n,i,j;
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
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
 temp =a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
}
}
}
printf("\nThe sorted array is: \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
