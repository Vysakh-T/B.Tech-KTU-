#include<stdio.h>
int N=100;
void buildtree(int i,int d,int a[],int N)
	{
	
	char c;
	int li,ri,j,n;
	if(i>=N){ printf("\nThe tree is too big!!! \n"); return; }
	if(i!=0)
	{
	a[i]=d;
	n=i;
	
	printf("\nDoes %d have a left child?(Y/N)?:\t",d);
	scanf("%s",&c);
	if(c=='y'||c=='Y')
	{
	scanf("%d",&li);
	buildtree(2*i,li,a,N);
	n=2*i;
	}
	else { n=2*i; buildtree(0,0,a,N); }
	
	printf("\nDoes %d have a right child?(Y/N)?:\t",i);
        scanf("%s",&c);
        if(c=='y'||c=='Y')
        {
        scanf("%d",&ri);
        buildtree((2*i)+1,ri,a,N);
	n=(2*i)+1;
        }  
        else { n=(2*i)+1; buildtree(0,0,a,N); }

        printf("\nThe Created Binary Tree is: \n");
        for(j=1;j<N;j++)
	{
	printf("%d ",a[j]);
	}
	}
	
	}	

void main()
	{
	int a[N],i,root;
	for(i=0;i<N;i++) a[i] = 0;
        printf("\nEnter the root element : \t");
	scanf("%d",&root);
	buildtree(1,root,a,N);
	printf("\n");
	}
