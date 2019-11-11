#include<stdio.h>
void main()
{
int ch,a,b,ans,f;
do{
printf("\t\tCalculator Menu\n\t\t---------------\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter Your Choice: ");
scanf("%d",&ch);
if((ch>0)&&(ch<5))
{
printf("\nEnter the first operand:" );
scanf("%d",&a);
printf("\nEnter the second operand:" );
scanf("%d",&b);
}
printf("\n");
switch(ch)
{
case 1:ans=a+b;
       printf("%d + %d = %d",a,b,ans);
       break;
case 2:ans=a-b;
       printf("%d - %d = %d",a,b,ans);
       break;
case 3:ans=a*b;
       printf("%d * %d = %d",a,b,ans);
       break;
case 4:ans=a/b;
       printf("%d / %d = %d",a,b,ans);
       break;
default:printf("Wrong Choice...!");
}
printf("\n\nPress '1' to go to the main menu,Any other key to exit: ");
scanf("%d",&f);
printf("\n");
}while(f==1);

}
