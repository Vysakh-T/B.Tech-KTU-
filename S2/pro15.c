#include<stdio.h>
void main()
{
int i,n,f=1,c;
printf("\nEnter a number: ");
scanf("%d",&n);
c=n;
i=n;
while(i>0)
{
 f *= n;
 n -= 1;
 i -= 1;
}
printf("\nThe factorial of %d is %d \n",c,f);
}

