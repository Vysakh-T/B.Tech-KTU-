#include<stdio.h>
void main()
{
int n,f=-1,s=1,t,i=0;
printf("Enter the limit: ");
scanf("%d",&n);
printf("\nThe Fibonacci Series is:\n");
while(i<n)
{
t=f+s;
printf("%d ",t);
f=s;
s=t;
i+=1;
}
printf("\n");
}
