#include<stdio.h>
#include<string.h>
void main()
{
struct Student
{char name[20]; int rn;int mark[100]; int tm;}s[100],temp;
int i,j,n,N;
printf("\nEnter the no. of students: ");
scanf("%d",&n);
printf("\n");
printf("\nEnter the no. of subjects: ");
scanf("%d",&N);
printf("\n");
for(i=0;i<n;i++)
{
s[i].tm=0;
printf("\nEnter the details of Student #%d\n",i+1);
printf("\nName : "); scanf("%s",&s[i].name);
printf("\nRoll No. : ");scanf("%d",&s[i].rn);
printf("\nMarks : \n");
for(j=0;j<N;j++)
{
printf(" ");scanf("%d",&s[i].mark[j]);s[i].tm+=s[i].mark[j];
}
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{ if(s[j].tm>s[j+1].tm)
   {temp=s[j];
    s[j]=s[j+1];
    s[j+1]=temp;
    }
}
}
printf("\nRanklist: \n");
for(i=n-1;i>=0;i--)
{
printf("\n");puts(s[i].name);
printf("\t%d",s[i].rn);
printf("\t%d",s[i].tm);
printf("\n\n");
}
}
