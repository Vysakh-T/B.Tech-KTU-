#include<stdio.h>
#include<stdlib.h>


struct node1
	{
	int data;
	struct node1 *llink,*rlink;
	};


typedef struct node1 node;
void newnode(int a,node *temp)
	{
 	temp->data=a;
 	temp->llink=NULL;
 	temp->rlink=NULL;
	}

void main()
{
	int d;
	node *header,*temp,*ptr;
	header = (node*)malloc(sizeof(node));
	ptr = (node*)malloc(sizeof(node));
	newnode(0,header);
	int c,ch,key;
	while(1)
	{
	ptr=header;
        l:
	printf("\nInsert An Element?(1-Yes/0-No):");
	scanf("%d",&c);
	if(c==0)break;
	printf("\nEnter the element you want to insert:\t");
	scanf("%d",&d);
	temp = (node*)malloc(sizeof(node));
	newnode(d,temp);
	printf("\nWhere do you want to insert?\n1.Start\n2.After Specified Key\n3.End\n");
	scanf("%d",&ch);

	switch(ch)
		{
		case 1: ptr = header->rlink;
       			temp->llink=header;
       			temp->rlink = ptr;
       			header->rlink=temp;
       			break;

		case 2: printf("\nEnter the key:\t");
      			scanf("%d",&key);
       			ptr=header->rlink;
       			while(ptr->data!=key&&ptr->rlink!=NULL)ptr=ptr->rlink;
       			if(ptr->data!=key){printf("\nKey not Found!!\n");goto l;}
       			node *temp1;
       			temp1 = (node*)malloc(sizeof(node));
       			temp1 = ptr->rlink;
       			temp->rlink = temp1;
			temp->llink=ptr;
			ptr->rlink=temp;
			if(temp1!=NULL) temp1->llink=temp;
       			break;
		case 3: while(ptr->rlink!=NULL)ptr=ptr->rlink;
       			ptr->rlink=temp;
			temp->llink=ptr;
       			break;
		default: printf("\nInvalid Choice...!\n");
       			 break;
		}
	ptr=header->rlink;

	printf("\nThe modified doubly linked list is: \n");
        printf("From Left:\n");

	while(1)
		{
			if(ptr->rlink==NULL)
			{printf("%d",ptr->data);break;}
			else 
   			printf("%d -> ",ptr->data);
		ptr=ptr->rlink;
		}
	printf("\nFrom Right:\n");
	
 	while(1)
		{
			if(ptr->llink==header)
			{printf("%d",ptr->data);break;}
			else 
   			printf("%d -> ",ptr->data);
		ptr=ptr->llink;
		}
	printf("\n");
	}
}

