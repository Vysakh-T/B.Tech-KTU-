//Program to find the largest of three numbers using else-if ladder
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three numbers: \n");
scanf("%d%d%d",&a,&b,&c);
if((a>=b)&&(a>=c))printf("%d is the largest \n",a);
else if((b>=a)&&(b>=c))printf("%d is the largest \n",b);
else printf("%d is the largest\n",c);
}

