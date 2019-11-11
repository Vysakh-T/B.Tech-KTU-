#include<stdio.h>
void main()
{
 int x,n,e=1,i=0;
 printf("\nEnter the values of x and n : \n");
 scanf("%d%d",&x,&n);
 while(i<n)
{ e*=x;
 i+=1;
}
printf("\n The value of x^n is : %d\n",e);
}

