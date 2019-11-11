//Program to calculate bill amount based on the power consumed
#include<stdio.h>
void main()
{
int cno,p,v;float c;
printf("Enter the consumer No. and the power consumed: \n");
scanf("%d%d",&cno,&p);
if(p<=200)
{c = 50*p;}
else if(p<=400)
{ v = p-200; c = 100+(0.65*v); }
else if(p<=600)
{ v = p-400; c = 230+(0.80*v); }
else if(p>600)
{v = p-600; c = 390 + v;}
printf("The bill amount for consumer %d : \n",cno);
printf("%-6.2f\n",c);
}
