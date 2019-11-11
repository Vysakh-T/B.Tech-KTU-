#include<stdio.h>
#include<math.h>
float f(int x,int n)
{ int i=1,count,sig;
  int fact(int);
  float r=0.0,var;
  for(count=0;count<n;count++)
 { sig = pow(-1,count);
   var = (pow(x,i)*sig);
   r += (var/fact(i));
  i+=2;
 }
return r;
}
int fact(int n)
{ 
  if(n==0||n==1) return 1;
  else if(n>1) return n*fact(n-1);
  else return -1;
}
void main()
{
int x,n;float s;
int fact(int);float f(int,int);
printf("\nEnter a number: ");
scanf("%d",&x);
printf("\nEnter the limit: ");
scanf("%d",&n);
s=f(x,n);
printf("\nThe result is: %-6.2f\n",s);
}
