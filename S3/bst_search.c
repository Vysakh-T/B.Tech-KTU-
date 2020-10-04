#include<stdio.h>
#include<stdlib.h>
struct node1
        {
        int data;
        struct node1 *lc,*rc;
        };

typedef struct node1 node;

void inorder(node *temp)
	{
	if(temp==NULL) return;
	inorder(temp->lc);
	printf("%d ",temp->data);
	inorder(temp->rc);
	}

void buildtree(node *new,int d)
	{
	char c = 'Y';
	int l,r;

	if(new!=NULL)
	{
	new->lc=(node*)malloc(sizeof(node));
	new->rc=(node*)malloc(sizeof(node));	
	new->data=d;
        printf("\nDoes %d have a left child?(Y/N)?:\t",d);
        scanf("%s",&c);
        if(c=='y'||c=='Y')
        {
        scanf("%d",&l);
        buildtree(new->lc,l);
        }
        else { new->lc=NULL; buildtree(NULL,0); }

        printf("\nDoes %d have a right child?(Y/N)?:\t",d);
        scanf("%s",&c);
        if(c=='y'||c=='Y')
        {
        scanf("%d",&r);
        buildtree(new->rc,r);
        }  
        else { new->rc=NULL; buildtree(NULL,0); }
	}

	}

void main()
        {
        node *ptr,*root;
	int r,e,f;
	char ch='y';
	ptr = (node*)malloc(sizeof(node));
	root = (node*)malloc(sizeof(node));
        printf("\nEnter the root element of the binary search tree here: \t");
        scanf("%d",&r);
	buildtree(root,r);
        
        printf("\nThe Created Binary Tree is: \n");
	inorder(root);
	l:
	ptr = root;
	printf("\nEnter the element you want to search:\t");
	scanf("%d",&e);
	f = 0;
	while((ptr!=NULL)&&(f==0))
	{
	if(e < ptr->data) ptr=ptr->lc;
	else if(e > ptr->data) ptr=ptr->rc; 
	else f=1;
	}
	if(f==0) printf("\nElement not found!!!");
	else printf("Element found!!!");
	printf("\nSearch Again(Y/N)?\t");
	scanf("%s",&ch);
	if(ch=='y'||ch=='Y') goto l;
	printf("\n");
	}
