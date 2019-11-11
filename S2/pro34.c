#include<stdio.h>
#include<string.h>
void main()
{
char str[20],v[]="aeiouAEIOU";
int i,j,count=0,l;
printf("Enter the string:\n");
gets(str);
l=strlen(str);
for(i=0;i<l;i++)
{
 for(j=0;j<10;j++)
{if(str[i]==v[j]) count+=1;}
}
printf("\nThe No. of vowels in the string is: %d\n",count);
}
