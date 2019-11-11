#include<stdio.h>
void bi(int a)
{
int n=0,ar[100];
while(a>0)
{ ar[n]=a%2;
  a/=2;
  n+=1;
}
int i,mul=1,s;
for(i=0;i<n;i++)
{ s+=mul*ar[i];
 mul*=10;}
printf("\nThe binary form of the given number is: %d ",s);
printf("\n");
}
void main()
{
int p;
printf("\nEnter a number : ");
scanf("%d",&p);
bi(p);
}
