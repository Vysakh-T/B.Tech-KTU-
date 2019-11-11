//Program to interconvert degree and fahrenheit
#include<stdio.h>
void main()
{
 float d,f;
 int c;
 printf("\t\tConversion Menu\n\t\t_______________\n1.Degree to Fahrenheit\n2.Fahrenheit to Degree\nEnter a choice : ");
 scanf("%d",&c);
 if(c==1)
 { 
  printf("\nEnter the temperature in Degrees: ");
  scanf("%f",&d);
  f = (d*(9/5.0))+32;
  printf("\nThe temperature in Fahrenheit is %-6.2f",f); 
 }
 else if(c==2)
 {
  printf("\nEnter the temperature in Fahrenheit: ");
  scanf("%f",&f);
  d = ((f-32)*(5/9.0));
  printf("\nThe temperature in Degrees is %-6.2f",d);
 }
 else
 { printf("\nInvalid Choice\n"); }
}
