#include<stdio.h>
#include<string.h>
void main()
{
char c[100][100],temp[100];
int n,i,j;
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nEnter the Names:\n");
for(i=0;i<=n;i++)
gets(c[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(strcmp(c[j],c[j+1])>0)
 { strcpy(temp,c[j]);
   strcpy(c[j],c[j+1]);
   strcpy(c[j+1],temp);
 }
}
}
printf("\nThe sorted list is:\n");
for(i=0;i<=n;i++)
puts(c[i]);
}
