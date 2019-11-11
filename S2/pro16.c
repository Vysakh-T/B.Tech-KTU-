#include<stdio.h>
void main()
{
int i,j,k,l;
printf("\nEnter the no. of rows: ");
scanf("%d",&l);
for(i=1;i<=l;i++)
{
 printf("\n");
 for(j=0;j<l-i;j++)
 printf(" ");
 for(k=1;k<=i;k++)
 printf("%d ",k);
}
printf("\n");
} 
