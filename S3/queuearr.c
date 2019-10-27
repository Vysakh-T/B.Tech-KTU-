#include<stdlib.h>
#include<stdio.h>
 

void main()
{
int c,d,r=-1,f=-1,n,arr[50];
m:
printf("\nEnter the size of queue: ");
scanf("%d",&n);
if(n>50) { printf("\nSize too big!!!"); goto m;}
--n;
char ch = 'y';
while(ch=='y'||ch=='Y')
	{	
	printf("\n Menu\n------\n1.Insert\n2.Delete\n");
	scanf("%d",&c);
	switch(c)
		{
		case 1 : if(r==n){printf("\nOverflow!!!\n"); goto l;}
			 printf("\nEnter the element:\t"); scanf("%d",&d);
			 if(f==-1&&r==-1) f=0;
			 ++r;
			 arr[r]=d;
			 break;

		case 2 : if(f==-1)
				{printf("\nEmpty Queue\n");goto l;}
			 d = arr[f];
			 if(f==r){f=-1;r=-1;}
			 else ++f;
			 printf("\nDeleted : %d",d);
			 break;
		
		default : printf("\nInvalid Choice\n");
		}
	l:
	printf("\nQueue: \n");
	if(f==-1&&r==-1) printf("\nEmpty Queue\n");
	else 
	{d=f;
        while(1)
		{ if(d==r){printf("%d",arr[d]);break;}
		  printf("%d->",arr[d]);
		  d++;
		}}
	printf("\nGo to Menu?(Y/N) : \t ");scanf("%s",&ch);
	} 
printf("\n");
}

