#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

struct node1
        {
        int data;
        struct node1 *lc,*rc;
        };

typedef struct node1 node;

node *S[SIZE],*T[SIZE];
int S_TOP=-1;
int T_TOP=-1;

void pushs(node *i)
{
        S_TOP+=1;
        S[S_TOP]=i;
}

node* pops()
{
        node *i;
        i=S[S_TOP];
        S_TOP-=1;
        return i;
}

void pusht(node *i)
{
        T_TOP+=1;
        T[T_TOP]=i;
}

node* popt()
{
        node *i;
        i=T[T_TOP];
        T_TOP-=1;
        return i;
}


void preorder(node *ptr)
	{
	S_TOP=-1;
	T_TOP=-1;
	node *item;
	 while((ptr!=NULL)||(S_TOP>=0))
        {
                while(ptr!=NULL)
                {
                        printf("%d ",ptr->data);
                        S_TOP+=1;
			S[S_TOP]=ptr;
                        ptr=ptr->lc;
                }
                if(S_TOP>=0)
                {
                        item=S[S_TOP];
			S_TOP-=1;
                        ptr=item->rc;
                }
        }

	}

void inorder(node *ptr)
	{
	S_TOP=-1;
	T_TOP=-1;
	node *item;
	while((ptr!=NULL)||(S_TOP>=0))
	{
	while(ptr!=NULL) { pushs(ptr); ptr=ptr->lc; }
	if(S_TOP>=0) { item = pops(); printf("%d ",item->data); ptr = item->rc; }
	}
	}

void postorder(node *ptr)
	{
	S_TOP=-1;
	T_TOP=-1;
	pushs(ptr);
	while(S_TOP>=0)
	{
	ptr = pops();
	pusht(ptr);
	if(ptr->lc!=NULL) pushs(ptr->lc);
	if(ptr->rc!=NULL) pushs(ptr->rc);
	}
	while(T_TOP>=0) { ptr = popt(); printf("%d ",ptr->data); }
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
	int r,ch;
	char c='y';
	ptr = (node*)malloc(sizeof(node));
	root = (node*)malloc(sizeof(node));
        printf("\nEnter the root element : \t");
        scanf("%d",&r);
	buildtree(root,r);
        while(c=='y'||c=='Y')
	{
	ptr = root;
	printf("\nMenu\n------\n1.PreOrder Traversal\n2.InOrder Traversal\n3.PostOrder Traversal\n");
	scanf("%d",&ch);
	switch(ch)
		{
		case 1 : preorder(ptr); break;
		case 2 : inorder(ptr); break;
		case 3 : postorder(ptr); break;
		default : printf("\nInvalid Choice"); break;
		}
	printf("\nGo to Menu (Y/N)? : ");
	scanf("%s",&c); 
	}
	}
