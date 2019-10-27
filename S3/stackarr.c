#include<stdio.h>
#include<stdlib.h>

void main()
{
	int top=-1,i=0,arr[100],n,ele,choice;
	char ch='Y';
	l:
	printf("\nEnter the size of the stack array:\t");
	scanf("%d",&n);
	if(n>100){printf("Memory not available\n");goto l;}
	printf("\nEnter the elements of the stack:\n");
	while(i<n)
 		{
		scanf("%d",&ele);
		if(top==n-1) printf("\nStack Overflow!!!\n");
		else
			{ top+=1;
			  arr[top]=ele;
			}
		++i;
		}
	while(ch=='y'||ch=='Y')
	{
	printf("\n1.Push\n2.Pop\nEnter your choice:\t");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1: if(top==n-1) printf("\nStack Overflow!!!\n");
			else{ printf("\nPush : ");scanf("%d",&ele); top+=1; arr[top]=ele; }
			printf("\nThe Modified Stack is:\n");
			for(i=0;i<=top;i++) printf("%d  ",arr[i]);
			break;
		case 2: if(top==-1) printf("\nStack Underflow!!!\n");
			else{ ele=arr[top]; top-=1; }
			printf("\nPopped : %d\n",ele);
			printf("\nThe Modified Stack is:\n");
			for(i=0;i<=top;i++) printf("%d  ",arr[i]);
			break;
		default:printf("\nInvalid Input\n");
		}
	printf("\nGo to Menu? (Y/N):\t");
	scanf("%s",&ch);
	}
}
	
