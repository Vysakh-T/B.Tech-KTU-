#include<stdio.h>
void main()
{
int a[100],n,sum = 0,i;
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe array you entered is : \n");
for(i=0;i<n;i++)
{ sum+=a[i]; printf("%d ",a[i]); }
printf("\nThe sum is : %d\n",sum);
}
