#include<stdio.h>
void main()
{
int x,i=2,flag=1;
printf("Enter a number: ");
scanf("%d",&x);
 while(i<=(x/2))
 {
  if(x%i==0)
  {
   flag=0;break;
  }
 i++;
 }
if(flag)printf("\n%d is a Prime Number\n",x);
else printf("\n%d is not a Prime Number\n",x);
}
