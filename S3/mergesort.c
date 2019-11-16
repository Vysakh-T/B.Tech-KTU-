#include<stdio.h>
#define SIZE 100

void merge(int a[],int l,int m,int r)
{
    int left[50],right[50],i,j,k,n1,n2;
    n1 = m-l+1;
    n2 = r-m;
    for(i=0;i<n1;i++) left[i] = a[l+i];
    for(j=0;j<n2;j++) right[j] = a[j+m+1];
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2)
    {
            if(left[i]<=right[j]) a[k++]=left[i++];
            else a[k++]=right[j++];
    }
    while(i<n1) a[k++]=left[i++];
    while(j<n2) a[k++]=right[j++];
}

void mergesort(int a[],int l,int r)
{
    int m;
    if(l<r)
    {
    m = (l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
    }
}

void main()
{
    int arr[SIZE],n,i;
    z:
    printf("\nEnter the Size of Array (<=100) : \t");
    scanf("%d",&n);
    if(n>SIZE) goto z;
    printf("\nEnter the array elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    mergesort(arr,0,n-1);
    printf("\nThe Sorted Array is:\n");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
}