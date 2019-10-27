#include<stdio.h>
#include<stdlib.h>
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
int d;
node *start,*temp,*ptr;
start = (node*)malloc(sizeof(node));
ptr = (node*)malloc(sizeof(node));
printf("\nEnter the starting element:\t");
scanf("%d",&d);
newnode(d,start);
ptr=start;
int c;
while(1)
{
printf("\nEnter new element?(press 0 to exit) :  ");
scanf("%d",&c); 
if(c==0) break;
printf("\nEnter the element which you want to enter:\t");
scanf("%d",&d);
temp = (node*)malloc(sizeof(node));
newnode(d,temp);
if(temp==NULL){printf("\nNo Memory!!!");break;}
ptr->link=temp;
ptr=ptr->link;
}
ptr->link=start;
ptr=start;
printf("\nThe created Circular Linked List is: \n");
while(1)
{
if(ptr->link==start)
{printf("%d",ptr->data);break;}
else 
   printf("%d -> ",ptr->data);
ptr=ptr->link;
}
printf("\n");
}
