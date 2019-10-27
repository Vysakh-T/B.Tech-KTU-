#include<stdio.h>
#include<stdlib.h>

struct node1
	{
	int data;
	struct node1 *link;
	};

typedef struct node1 node;

void newnode(node *t,int a)
	{
	t->link=NULL;
	t->data=a;
	}

void print(node *ptr)
	{
	printf("\n");
	while(1)
		{ 
		if(ptr->link==NULL) {printf("%d",ptr->data); break;}	
		else printf("%d->",ptr->data);
		ptr=ptr->link;
		}
	}
void main()
{
	node *header,*top=NULL,*temp,*ptr;
	int i,n,ele,choice;
	header = (node*)malloc(sizeof(node));
	ptr = (node*)malloc(sizeof(node));
	newnode(header,0);
	newnode(ptr,0);
	char ch='Y';
	printf("\nEnter the size of the stack:\t");
	scanf("%d",&n);
	printf("\nEnter the elements of the stack:\n");
	for(i=0;i<n;i++)
 		{
		scanf("%d",&ele);
		temp = (node*)malloc(sizeof(node));
		newnode(temp,0);
		if(temp==NULL) {printf("\nStack Overflow!!!\n");break;}
		else
			{ 
				temp->data=ele;
				temp->link=top;
				top=temp;
				header->link=top;
			} 
		}
	while(ch=='y'||ch=='Y')
	{
	printf("\n1.Push\n2.Pop\nEnter your choice:\t");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1: temp = (node*)malloc(sizeof(node));
			newnode(temp,0);
			if(temp==NULL) printf("\nStack Overflow!!!\n");
			else
			{ 
				printf("\nPush : ");scanf("%d",&ele); temp->data=ele; temp->link=top; top=temp; 
				header->link=top;
				printf("\nThe Modified Stack is:\n");
				print(top);
			}
			break;
		case 2:
		 	if(top==NULL) printf("\nStack Underflow!!!\n");
			else
				{ 
					ptr=top; 
					ele=top->data; 
					top=top->link;
					header->link=top; 	
					free(ptr);
				printf("\nPopped : %d\n",ele);
				printf("\nThe Modified Stack is:\n");
				print(top);
				}
			break;
		default:printf("\nInvalid Input\n");
		}
	printf("\nGo to Menu? (Y/N):\t");
	scanf("%s",&ch);
	}
}
