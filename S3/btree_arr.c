#include<stdio.h>
int N=100,n;
void buildtree(int i,int d,int a[],int N)
        {

        char c;
        int li,ri;
        if(i>=N){ printf("\nThe tree is too big!!! \n"); return; }
        if(i==0) return;
        if(i!=0)
        {
        a[i]=d;
        n=i;}

        printf("\nDoes %d have a left child?(Y/N)?:\t",d);
        scanf("%s",&c);
        if(c=='y'||c=='Y')
        {
        scanf("%d",&li);
        n=2*i;
        buildtree(n,li,a,N);
        }
        else { n=2*i; buildtree(0,0,a,N); }

        printf("\nDoes %d have a right child?(Y/N)?:\t",d);
        scanf("%s",&c);
        if(c=='y'||c=='Y')
        {
        scanf("%d",&ri);
        n=(2*i)+1;
        buildtree(n,ri,a,N);
        }  
        else { n=(2*i)+1; buildtree(0,0,a,N); }

        }       

void main()
        {
        int a[N],i,root;
        for(i=0;i<N;i++) a[i] = 0;
        printf("\nEnter the root element : \t");
        scanf("%d",&root);
        buildtree(1,root,a,N);

        printf("\nThe Created Binary Tree is: \n");
        for(i=1;i<=n;i++)
        {
        printf("%d ",a[i]);
        }

        printf("\n");
        }

