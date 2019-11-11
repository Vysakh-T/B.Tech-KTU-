#include<stdio.h>
void main()
{
float c;int a,b,op;
printf("\t\tCalculator\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter Your Choice: ");
scanf("%d",&op);
printf("\nEnter the first operand: ");
scanf("%d",&a);
printf("\nEnter the second operand: ");
scanf("%d",&b);
switch(op)
{
case 1: c = a+b;
          printf("\n%d + %d = %-6.2f",a,b,c);break;
case 2: c = a-b;
          printf("\n%d - %d = %-6.2f",a,b,c);break;
case 3: c = a*b;
          printf("\n%d * %d = %-6.2f",a,b,c);break;
case 4: c = a/b;
          printf("\n%d / %d = %-6.2f",a,b,c);break;
default: printf("\n Invalid Operator ");
}
}

