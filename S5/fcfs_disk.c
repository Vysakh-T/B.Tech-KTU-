#include<stdio.h>
#include<stdlib.h>
void main()
{
    int array[20],i,n,head,seek;
    printf("Enter the number of indexes of the track:");
    scanf("%d",&n);
    printf("Enter head location:");
    scanf("%d",&head);
    printf("Enter the index of the track:");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n;i++)
        {
            seek+=abs(array[i]-head);
            head=array[i];
        }
    printf("\nTotal seek time: %d",seek);
    printf("\nAverage seek time: %d \n",seek/n);
}

