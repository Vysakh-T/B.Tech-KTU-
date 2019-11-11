#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;float d,r1,r2;
printf("\n Enter the coefficients A,B,C : \n");
scanf("%d%d%d",&a,&b,&c);
d = sqrt((b*b)-(4*a*c));
if(d>0)
{ r1 = (-b+sqrt(d))/(2.0*a);
  r2 = (-b-sqrt(d))/(2.0*a);
 printf("\nThe roots of the equation are: %-6.2f,%-6.2f ",r1,r2);
}
else if(d==0)
{ r1 = -b/(2.0*a);
 printf("\n The equation has only one root: %-6.2f ",r1);
}
else printf("\nThe equation has no real roots ");
}

