//Program to check whether a number is a multiple of 6
#include<stdio.h>
void main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);
printf("\n");
if(a%6==0)printf("%d is a multiple of 6",a);
else printf("%d is not a multiple of 6",a);
printf("\n");
}
