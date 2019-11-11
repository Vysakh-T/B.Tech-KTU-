#include<stdio.h>
int fact(int n)
{ if(n==0||n==1) 
   return 1;
  else return n*fact(n-1);
}
void main()
{
int i,j,k,r,a;
printf("\nEnter the no. of rows: ");
scanf("%d",&r);
printf("\n");
for(i=0;i<r;i++)
{ for(k=0;k<r-i;k++)
   printf(" ");
  for(j=0;j<=i;j++)
{ a = fact(i)/(fact(j)*fact(i-j));
  printf("%d ",a);
}
printf("\n");
}
}
