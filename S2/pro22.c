#include<stdio.h>
void main()
{
int i,n,sum=0,a;float avg,c=0.0;
printf("Enter the limit: ");
scanf("%d",&n);
printf("\nEnter the numbers: \n");
for(i=0;i<n;i++)
{
 scanf("%d",&a);
 if(a>0){ sum+=a;c++;}
}
avg = sum/c;
printf("\nThe average of the positive numbers from the list you entered is: %-6.2f\n",avg);
}
