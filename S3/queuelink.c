#include<stdlib.h>
#include<stdio.h>
 
struct node1
	{
	int data;
	struct node1 *link;
	};

typedef struct node1 node;

void newnode(int a,node *temp)
{
temp->data=a;
temp->link=NULL;
}

void main()
{
node *ptr,*header,*f,*r,*new;
ptr = (node*)malloc(sizeof(node));
header = (node*)malloc(sizeof(node));
f = (node*)malloc(sizeof(node));
r = (node*)malloc(sizeof(node));
newnode(0,ptr);
newnode(0,header);
newnode(0,f);
newnode(0,r);
int c,d;
char ch = 'y';
while(ch=='y'||ch=='Y')
	{	
	printf("\n Menu\n------\n1.Insert\n2.Delete\n");
	scanf("%d",&c);
	switch(c)
		{
		case 1 : new = (node*)malloc(sizeof(node));
			 newnode(0,new);
			 if(new==NULL){printf("\nOverflow!!!\n"); goto l;}
			 printf("\nEnter the element:\t"); scanf("%d",&d);
			 new->data = d;
			 if(header->link==NULL){header->link=new;f=new;r=new;}
			 else
				{ r->link=new;r=r->link; }
			 break;

		case 2 : if(header->link==NULL)
				{printf("\nEmpty Queue\n");goto l;}
			 d = f->data;
			 ptr = f->link;
			 header->link = ptr;
			 free(f);
			 f = ptr;
			 printf("\nDeleted : %d",d);
			 break;
		
		default : printf("\nInvalid Choice\n");
		}
	l:
	printf("\nQueue: \n");
	if(header->link==NULL) printf("\nEmpty Queue\n");
	else 
	{ptr = header->link;
        while(1)
		{ if(ptr->link==NULL){printf("%d",ptr->data);break;}
		  printf("%d->",ptr->data);
		  ptr=ptr->link;
		}}
	printf("\nGo to Menu?(Y/N) : \t ");scanf("%s",&ch);
	} 
printf("\n");
}

