#include<stdio.h>
int fact(int n)
{ 
  if(n==0||n==1) return 1;
  else if(n>1) return n*fact(n-1);
  else return -1;
}
void main()
{
int a,f;
int fact(int);
printf("\nEnter a Number: ");
scanf("%d",&a);
f=fact(a);
if(f!=-1) printf("\nThe factorial of %d is %d.\n",a,f);
else printf("\nEnter a positive real number...!\n");
}
