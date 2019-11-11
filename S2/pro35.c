#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int i,l,flag=1;
printf("\nEnter a string : \n");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]!=s[l-1-i])
{ flag =0; break; }
}
if(flag) printf("\nThe string you entered is a palindrome.\n");
else printf("\nThe string you entered is not a palindrome.\n");
}
