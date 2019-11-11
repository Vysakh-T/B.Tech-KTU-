#include<stdio.h>
void main()
{
int i,j,m,n,p,q,k,a[100][100],b[100][100],c[100][100];
printf("\nEnter the size of the first matrix: \n");
scanf("%d%d",&m,&n);
printf("\nEnter the size of the second matrix: \n");
scanf("%d%d",&p,&q);
if(m>100||n>100||p>100||q>100)
{printf("\nError.....!\n");}
else if(n!=p)
{printf("\nError.....!\n");}
else{
printf("Enter the elements of first matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("Enter the elements of second matrix:\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
printf("\nFirst Matrix: \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
printf("\nSecond Matrix: \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
printf("%d ",b[i][j]);
printf("\n");
}
printf("\nThe Product of the matrices is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{c[i][j]=0;
 for(k=0;k<n;k++)
 c[i][j]+=a[i][k]*b[k][j];
 printf("%d ",c[i][j]);
}
printf("\n");
}
}
}
