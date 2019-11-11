#include<stdio.h>
#include<math.h>
void main()
{
int n;float rn;
printf("\nEnter a number to get its square root....\nThe program exits if you enter 999\n");
while(1)
{
scanf("%d",&n);
if(n==999)break;
rn = sqrt(n);
printf("The Root of %d is %-6.2f\n",n,rn);
}
}

