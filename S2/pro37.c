#include<stdio.h>
#include<string.h>
void main()
{
struct Student
{char name[20]; int rn; int tm;}s[100],temp;
int i,j,n;
printf("\nEnter the no. of students: ");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
printf("\nEnter the details of Student #%d\n",i+1);
printf("\nName : "); scanf("%s",&s[i].name);
printf("\nRoll No. : ");scanf("%d",&s[i].rn);
printf("\nTotal Marks : ");scanf("%d",&s[i].tm);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{ if(strcmp(s[j].name,s[j+1].name)>=1)
   {temp=s[j];
    s[j]=s[j+1];
    s[j+1]=temp;
    }
}
}
printf("\nThe Student details Are: \n");
for(i=0;i<n;i++)
{
printf("\nName : ");puts(s[i].name);
printf("\nRoll No. : %d",s[i].rn);
printf("\nTotal Marks : %d",s[i].tm);
printf("\n\n");
}
}
