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
node *header,*temp,*ptr,*end;
end = (node*)malloc(sizeof(node));
newnode(0,end);
header = (node*)malloc(sizeof(node));
ptr = (node*)malloc(sizeof(node));
newnode(0,header);
ptr=header;
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
temp->llink=ptr;
ptr->rlink=temp;
ptr=ptr->rlink;
}
end->llink=ptr->llink;
end->data=ptr->data;
printf("\nIn which direction do you want to display the list?\n1.Right\n2.Left\nEnter your choice?\t");
scanf("%d",&d);
switch(d)
{

   case 1: ptr = header->rlink;
           if(ptr==NULL) printf("\nEmpty List");
           else 
           {
           printf("\nThe created doubly linked list is: \n");
           while(1)
           {
           if(ptr->rlink==NULL)
            {printf("%d",ptr->data);break;}
           else 
            printf("%d -> ",ptr->data);
            ptr=ptr->rlink;
            }
            }break;

   case 2: ptr=end;
           if(ptr==NULL) printf("\nEmpty List");
           else 
           {
           printf("\nThe created doubly linked list is: \n");
           while(1)
           {
           if(ptr->llink==header)
            {printf("%d",ptr->data);break;}
           else 
            printf("%d -> ",ptr->data);
            ptr=ptr->llink;
            }
            }break;

   default : printf("\nInvalid Choice");
             break;

}
printf("\n");
}
