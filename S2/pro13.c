#include<stdio.h>
void main()
{
int n,l,i=1,m;
printf("\n Enter a number : ");
scanf("%d",&n);
printf("\n Enter the limit : ");
scanf("%d",&l);
while(i<=l)
{
m = i*n;
printf("\n%d * %d = %d ",n,i,m);
i+=1;
}
}

