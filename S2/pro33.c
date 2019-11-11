#include<stdio.h>
#include<math.h>
void main()
{int i,j,m,n,a[100][100],t=0,sum=0;float nm;
printf("\nEnter the size of the matrix: \n");
scanf("%d%d",&m,&n);
if(m>100||n>100){printf("\nError...!\n");exit(0);}
printf("Enter the elements of the matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
 if(i==j) t+=a[i][j];
}
}
printf("\nThe Matrix you entered is: \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
sum+=pow(a[i][j],2);
}
printf("\n");
}
nm=sqrt(sum);
printf("\nTrace = %d\nNorm = %-6.3f\n",t,nm);
}


