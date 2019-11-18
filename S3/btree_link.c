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
	int r;
	ptr = (node*)malloc(sizeof(node));
	root = (node*)malloc(sizeof(node));
        printf("\nEnter the root element : \t");
        scanf("%d",&r);
	buildtree(root,r);
        
	ptr = root;
        printf("\nThe Created Binary Tree is: \n");
	inorder(ptr);
	printf("\n");
	}

