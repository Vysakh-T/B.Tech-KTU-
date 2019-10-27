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
ptr1->link=temp1;
ptr1=ptr1->link;
}
ptr1=header->link;
printf("\nCreated List:\n");
while(1)
{
if(ptr1->link==NULL)
{printf("%d",ptr1->data);break;}
else 
   printf("%d -> ",ptr1->data);
ptr1=ptr1->link;
}
printf("\n");
}


void main()
{
node *header,*temp,*ptr;
header = (node*)malloc(sizeof(node));
newnode(0,header);
createlist(header);
int c,ch,key;
while(1){
ptr = (node*)malloc(sizeof(node));
temp = (node*)malloc(sizeof(node));
newnode(0,ptr);
ptr=header;
printf("\nDelete An Element?(1-Yes/0-No):");
scanf("%d",&c);
if(c==0)break;
if(header->link==NULL){printf("\nUnderflow\n");break;}
printf("\nWhere do you want to delete an element from?\n1.Start\n2.Specified Key\n3.End\n");
scanf("%d",&ch);
switch(ch)
{
case 1:ptr=header->link;
       header->link=ptr->link;
       free(ptr);
       break;
case 2:ptr=header->link;
       printf("\nEnter the key:\t");
       scanf("%d",&key);
       while(ptr->data!=key&&ptr!=NULL){temp=ptr;ptr=ptr->link;}
       if(ptr==NULL){printf("\nKey not Found!!\n");break;}
       temp->link=ptr->link;
       free(ptr);
       break;
case 3:ptr=header->link;
       while(ptr->link!=NULL){temp=ptr;ptr=ptr->link;}
       temp->link=NULL;
       free(ptr);
       break;
default:printf("\nInvalid Choice...!\n");
        break;
}
node *ptr2;
ptr2 = (node*)malloc(sizeof(node));
newnode(0,ptr2);
ptr2=header->link;
printf("\nThe modified linked list is: \n");
while(1)
{
if(ptr2->link==NULL)
{printf("%d",ptr2->data);break;}
else 
   printf("%d -> ",ptr2->data);
ptr2=ptr2->link;
}
printf("\n");
}
}
