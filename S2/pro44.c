#include<stdio.h>
#include<stdlib.h>
void big(int *b[10],int x,int y)
{
int c=*(b[0]+0),i,j;
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
  if(c<*(b[i]+j))
     c=*(b[i]+j);
}
}
printf("\nThe Biggest element is : %d\n",c);
}

void main()
{
int *a[10],m,n,i,j;
printf("\nEnter the no. of rows and columns :\n");
scanf("%d%d",&m,&n);
printf("\nEnter the elements of the array : \n");
for(i=0;i<m;i++)
{    a[i]=(int *)malloc(n*2);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
  scanf("%d",a[i]+j);
}}
printf("\nThe Array You Entered is :\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
  printf("%d ",*(a[i]+j));
printf("\n");
}
big(a,m,n);
}

