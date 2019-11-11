#include<stdio.h>
void main()
{
 int i,flag,n=10;
 printf("The composite numbers between 10 and 50 are :\n");
 do{
    i=2;
    flag=0;
    do{
       if(n%i==0) flag=1;
       i+=1;
      }while(i<=(n/2));
    if(flag) printf(" %d\n",n);
    n+=1;
    }while(n<=50);
}
