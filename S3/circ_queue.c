#include<stdlib.h>
#include<stdio.h>
 

void main()
{
int c,d,r=0,f=0,cq[51],next,n;
m:
printf("\nEnter the size of queue: ");
scanf("%d",&n);
if(n>50) { printf("\nSize too big!!!"); goto m;}
char ch = 'y';
while(ch=='y'||ch=='Y')
	{	
	printf("\n Menu\n------\n1.Insert\n2.Delete\n");
	scanf("%d",&c);
	switch(c)
		{
		case 1 : printf("\nEnter the element:\t"); scanf("%d",&d);
			 if(f==0&&r==0){ f=1;r=1;cq[r]=d;}
			 else {
			 next = (r%n)+1;
			 if(next==f) {printf("\nOverflow!!!\n"); goto l;}
			 r = next; cq[r]=d;
			 }
			 break;

		case 2 : if(f==0)
				{printf("\nEmpty Queue\n");goto l;}
			 else { 
			 d = cq[f];
			 if(f==r)
				{ r=0;f=0; }
			 else f = (f%n)+1;
			 }
			 printf("\nDeleted : %d",d);
			 break;
		
		default : printf("\nInvalid Choice\n");
		}
	l:
	printf("\nQueue: \n");
	if(f==0&&r==0) printf("\nEmpty Queue\n");
	else 
	{d=f;
        while(1)
		{ if(d==r){printf("%d",cq[d]);break;}
		  printf("%d->",cq[d]);
		  d = (d%n)+1;
		}}
	printf("\nGo to Menu?(Y/N) : \t ");scanf("%s",&ch);
	} 
printf("\n");
}

