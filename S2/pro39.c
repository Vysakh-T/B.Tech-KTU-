#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int i,l,w=1,d=0,a=0;
char s[100];
printf("\nEnter a string:\n");
gets(s);
l = strlen(s);
for(i=0;i<l;i++)
{ 
if(s[i]== ' ') w++;
else if(isalpha(s[i])) a++;
else if(isdigit(s[i])) d++; 
}
printf("\nThe no. of words is %d\nThe no. of digits is %d\nThe no. of alphabets is %d\n",w,d,a);
}
