//Program to calculate price of an item based on its quantity
#include<stdio.h>
void main()
{
int q,p;float tp;
printf("Enter quantity and price:\n");
scanf("%d%d",&q,&p);
tp = q*p;
if(q>1000)
 tp*=(9/10.0);
printf("The total price is : %6.2f\n",tp);
}
