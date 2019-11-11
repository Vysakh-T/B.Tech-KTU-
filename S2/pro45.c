#include<stdio.h>
void main()
{
  FILE *fp1,*fp2;
  char ch;
  fp1=fopen("input","w");
  printf("\nEnter the data :\n");
  while((ch=getchar())!='\n')
   {
     fputc(ch,fp1);
   }
  fclose(fp1);
  printf("\nThe copied content :\n");
  fp1=fopen("input","r");
  fp2=fopen("output","w");
  while((ch=getc(fp1))!=EOF)
   {
     fputc(ch,fp2);
   }
  fclose(fp1);
  fclose(fp2);
  fp2=fopen("output","r");
  while((ch=getc(fp2))!=EOF)
   {
     printf("%c",ch);
   }
  printf("\n");
  fclose(fp2);
}

