#include<stdio.h>
void main()
{
int ch,a[100],n,sum = 0,i,ele,pos;
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe array you entered is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
do{
printf("\nEnter the element to be inserted and its position: \n");
scanf("%d%d",&ele,&pos);
n+=1; 
for(i=n;i>=0;i--)
{
 if(i==pos-1){a[i]=ele;break;}
 a[i]=a[i-1];
}
printf("\nThe new array is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\nPress 1 to insert more elements, 0 to exit : ");
scanf("%d",&ch);
}while(ch==1);
}	
