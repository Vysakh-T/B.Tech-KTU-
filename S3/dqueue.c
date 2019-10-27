#include<stdlib.h>
#include<stdio.h>
 

void main()
{
int c,d,r=0,f=0,dq[51],ahead,n,next;
m:
printf("\nEnter the size of queue: ");
scanf("%d",&n);
if(n>50) { printf("\nSize too big!!!"); goto m;}
char ch = 'y';
while(ch=='y'||ch=='Y')
	{	
	printf("\n Menu\n------\n1.Insert at the Front\n");
	printf("2.Insert at the Rear\n3.Delete from the Front\n");
	printf("4.Delete from the Rear\n");
	scanf("%d",&c);
	switch(c)
		{
		case 1 : printf("\nEnter the element:\t"); scanf("%d",&d);
			 if(f==0){ ahead = 1; }
			 else if(f==1) { ahead = n; }
			 else --ahead;
			 if(ahead==r) {printf("\nQueue Full!!!\n"); goto l;}
			 if(f==0) r=1; 
			 f=ahead; dq[f]=d;
			 break;

		case 2 : printf("\nEnter the element:\t"); scanf("%d",&d);
			 if(f==0){ f=1;r=1;dq[r]=d;}
			 else {
			 next = (r%n)+1;
			 if(next==f) {printf("\nQueue Full!!!\n"); goto l;}
			 r = next; dq[r]=d;
			 }
			 break;


		case 3 : if(f==0)
				{printf("\nEmpty Queue!\n");goto l;}
			 else { 
			 d = dq[f];
			 if(f==r)
				{ r=0;f=0; }
			 else f = (f%n)+1;
			 }
			 printf("\nDeleted : %d",d);
			 break;

		case 4 : d=dq[r];
			 if(f==0)
				{printf("\nEmpty Queue!\n");goto l;}
			 else if(r==f){ r=0;f=0; }
			 else if(r==1) r=n;
			 else --r;
			 printf("\nDeleted : %d",d);
			 break;
		
		default : printf("\nInvalid Choice\n");
		}
	l:
	printf("\nQueue: \n");
	if(f==0) printf("\nEmpty Queue!!!\n");
	else 
	{d=f;
        while(1)
		{ if(d==r){printf("%d",dq[d]);break;}
		  printf("%d->",dq[d]);
		  d = (d%n)+1;
		}}
	printf("\nGo to Menu?(Y/N) : \t ");scanf("%s",&ch);
	} 
printf("\n");
}

