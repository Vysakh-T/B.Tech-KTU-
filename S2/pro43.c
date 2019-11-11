#include<stdio.h>
#include<stdlib.h>
void sort(int *a,int n)
{
  int i,j,temp;
  for(i=0;i<n;++i)
  {
   for(j=0;j<n-i-1;++j)
   {
     if(*(a+j)>*(a+j+1))
     {
       temp=*(a+j);
       *(a+j)=*(a+j+1);
       *(a+j+1)=temp;
     }
   }
  }
} 
void bs(int *a,int n,int e)
{
  int beg=0,end=n-1,mid,pos=-1;
  while(beg<=end)
  {
    mid=(beg+end)/2;
    if(*(a+mid)==e)
    {
      pos=mid+1;
      break;
    }
    if(*(a+mid)<e)
       beg=mid+1;
    else
      end=mid-1;
  }
  if(pos!=-1)
   printf("\nThe element is found at position %d\n",pos);
else
   printf("\nElement not found\n");
}

void main()
{
   int n,e,*a,i;
   printf("\nEnter the limit :\n");
   scanf("%d",&n);
   a=(int *) malloc(n*sizeof(int));
   printf("\nEnter the elements :\n");
   for(i=0;i<n;++i)
    scanf("%d",a+i);
   sort(a,n);
   printf("\nThe sorted array is: \n");
   for(i=0;i<n;i++)
   printf("%d ",*(a+i));
   printf("\nEnter the item to be searched :");
   scanf("%d",&e);
   bs(a,n,e);
}

