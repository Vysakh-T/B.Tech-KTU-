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
node *header,*temp,*ptr;
header = (node*)malloc(sizeof(node));
ptr = (node*)malloc(sizeof(node));
newnode(0,header);
int c,ch,key;
while(1){
ptr=header;
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
case 1:ptr = header->link;
       temp->link = ptr;
       header->link=temp;
       break;
case 2:printf("\nEnter the key:\t");
       scanf("%d",&key);
       while(ptr->data!=key&&ptr!=NULL)ptr=ptr->link;
       if(ptr==NULL){printf("\nKey not Found!!\n");break;}
       node *temp1;
       temp1 = (node*)malloc(sizeof(node));
       temp1 = ptr->link;
       ptr->link=temp;
       temp->link=temp1;
       break;
case 3:while(ptr->link!=NULL)ptr=ptr->link;
       ptr->link=temp;
       break;
default:printf("\nInvalid Choice...!\n");
        break;
}
ptr=header->link;
printf("\nThe modified linked list is: \n");
while(1)
{
if(ptr->link==NULL)
{printf("%d",ptr->data);break;}
else 
   printf("%d -> ",ptr->data);
ptr=ptr->link;
}
printf("\n");
}
}


             
