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

void main()
    {
    node *ptr,*root,*ptr1,*new;
	int r,f=0,item;
    char ch;
	ptr = (node*)malloc(sizeof(node));
    ptr1 = (node*)malloc(sizeof(node));
	root = (node*)malloc(sizeof(node));
    printf("\nEnter the root element : \t");
    scanf("%d",&r);
	root->data=r;
    root->lc=NULL;
    root->rc=NULL;
    ptr=root;
    printf("\nDo you want to insert(Y/N)?:\t");
    scanf("%s",&ch);
    g:
    if(ch=='n'||ch=='N') goto l;
    printf("\nEnter the element which you want to insert: \t");
    scanf("%d",&item);
    while(ptr!=NULL && f==0)
    {
        if(item<ptr->data) {ptr1=ptr; ptr=ptr->lc;}
        else if(item>ptr->data) {ptr1=ptr; ptr=ptr->rc;}
        else {f=1; printf("\nData Already Exists!!!\n");}
    }
    if(ptr==NULL)
    {
        new = (node*)malloc(sizeof(node));
        new->data = item;
        new->lc = NULL;
        new->rc = NULL;
        if(ptr1->data>item) ptr1->lc = new;
        else if(ptr1->data<item) ptr1->rc = new;
    }
    ptr = root;
    printf("\nThe Modified Binary Search Tree in Order is: \n");
    inorder(ptr);
    printf("\nDo you want to insert(Y/N)?:\t");
    scanf("%s",&ch);
    goto g;
    l:   
	printf("\n");
	}