#include<stdio.h>
#include<math.h>
void main()
{
int a[100],n,i;float sum=0.0,avg,vsum=0.0,var,sd;
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nEnter the set of numbers:\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);sum+=a[i];}
avg=sum/n;
printf("\nThe set of numbers you entered is:\n");
for(i=0;i<n;i++)
{printf("%d ",a[i]);
 vsum+=((avg-a[i])*(avg-a[i]));}
var=vsum/n;
sd=sqrt(var);
printf("\nThe Standard Deviation of the given set of numbers is: %-6.3f\n",sd);
}
