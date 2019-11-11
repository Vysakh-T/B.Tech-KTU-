#include<stdio.h>
void main()
{
int ch,a[100],n,i,ele,j;
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe array you entered is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
do{
int flag=0;
printf("\nEnter the element to be deleted: \n");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(a[i]==ele)
{
for(j=i;j<n-1;j++)
 a[j]=a[j+1];
  flag=1;
  n-=1;
  i-=1;
}
}
if(flag)
{
printf("\nThe new array is: \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
else printf("\nElement not found..!\n");
printf("\nPress 1 to delete more elements, 0 to exit : ");
scanf("%d",&ch);
}while(ch==1);
}

