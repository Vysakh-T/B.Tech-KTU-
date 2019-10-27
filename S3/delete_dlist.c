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


	void createlist(node *header)
	{
	int d;
	node *temp1,*ptr1;
	ptr1 = (node*)malloc(sizeof(node));
	ptr1=header;
	int c;
	while(1)
	{
	printf("\nEnter new element?(press 0 to exit) :  ");
	scanf("%d",&c); 
	if(c==0) break;
	printf("\nEnter the element which you want to enter:\t");
	scanf("%d",&d);
	temp1 = (node*)malloc(sizeof(node));
	newnode(d,temp1);
	if(temp1==NULL){printf("\nNo Memory!!!");break;}
	temp1->llink=ptr1;
	ptr1->rlink=temp1;
	ptr1=ptr1->rlink;
	}
	}


void main()
	{
	
	node *header,*temp,*ptr,*temp2;
	header = (node*)malloc(sizeof(node));
	newnode(0,header);
	createlist(header);
	int c,ch,key;

	while(1){
		ptr = (node*)malloc(sizeof(node));
		temp = (node*)malloc(sizeof(node));
		newnode(0,ptr);
		ptr=header;

                l:
		printf("\nDelete An Element?(1-Yes/0-No):");
		scanf("%d",&c);
		if(c==0)break;
		if(header->rlink==NULL){printf("\nUnderflow\n");break;}
		printf("\nWhere do you want to delete an element from?\n1.Start\n2.Specified Key\n3.End\n");
		scanf("%d",&ch);

	switch(ch)
	{
		case 1:	ptr=header->rlink;
       			header->rlink=ptr->rlink;
                        temp=ptr->rlink;
			if(ptr->rlink!=NULL)temp->llink=header;
       			free(ptr);
       			break;

		case 2:	ptr=header->rlink;
       			printf("\nEnter the key:\t");
       			scanf("%d",&key);
      			while(ptr->data!=key&&ptr->rlink!=NULL){ptr=ptr->rlink;}
       			if(ptr->data!=key){printf("\nKey not Found!!\n");goto l;}
			temp2 = (node*)malloc(sizeof(node));
			newnode(0,temp2);
       			temp=ptr->llink;
                        temp2=ptr->rlink;
			temp->rlink=temp2;
			if(ptr->rlink!=NULL)
                        temp2->llink=temp;
       			free(ptr);
       			break;

		case 3:	ptr=header->rlink;
       			while(ptr->rlink!=NULL){ptr=ptr->rlink;}
                        temp=ptr->llink;
       			temp->rlink=NULL;
       			free(ptr);
       			break;

		default:printf("\nInvalid Choice...!\n");
        		break;
	}
		node *ptr2;
		ptr2 = (node*)malloc(sizeof(node));
		newnode(0,ptr2);
		ptr2=header->rlink;
		printf("\nThe modified linked list is: \n");
        if(header->rlink==NULL) {printf("\n Empty list\n");break;} 
    
	while(1)
		{
			if(ptr2->rlink==NULL)
			{printf("%d",ptr2->data);break;}
			else 
   			printf("%d -> ",ptr2->data);
		ptr2=ptr2->rlink;
		}
	printf("\n");
	}
}
