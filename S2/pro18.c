#include<stdio.h>
#include<math.h>
void main()
{
int n,a,b,d=0,sum=0,dig;
printf("Enter a number : ");
scanf("%d",&n);
a=n;
b=n;
while(a>0)
{
d++;
a/=10;
}
while(b>0)
{
dig=b%10;
sum+=pow(dig,d);
b/=10;
}
if(sum==n)printf("\n%d is Armstrong\n",n);
else printf("\n%d is not Armstrong\n",n);
}
