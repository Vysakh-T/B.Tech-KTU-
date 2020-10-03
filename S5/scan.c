#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int array[20],i,n,head,seek,j,r[10],l[10],w=0,q=0,temp=0;
    char d;
    printf("Enter the number of indexes of the track:");
    scanf("%d",&n);
    printf("Enter head location:");
    scanf("%d",&head);
    printf("Enter the direction in which the head is moving head(r/l):");
    scanf(" %c",&d);
    printf("Enter the index of the track:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]<head)
        {
            l[q]=array[i];
            q++;
        }   
        else
        {
            r[w]=array[i];
            w++;    
    }
    }
    for(i=q-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(l[j]<l[j+1]){
           temp=l[j];
           l[j]=l[j+1];
           l[j+1]=temp;
        }
      }
      }

    for(i=q-1;i<0;i--)
        l[i+1]=l[i];
    l[0]=0;    
     
     
     for(i=w-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(r[j]>r[j+1]){
           temp=r[j];
           r[j]=r[j+1];
           r[j+1]=temp;
        }
      }
      }
     if(d=='r')
    {
    for(i=0;i<q;i++)
        {
            seek+=abs(l[i]-head);
            head=l[i];
        }
     
    for(i=0;i<w;i++)
        {
            seek+=abs(r[i]-head);
            head=r[i];
        }
    }
    else
    {
        for(i=0;i<w;i++)
        {
            seek+=abs(r[i]-head);
            head=r[i];
        }    
        for(i=0;i<q;i++)
        {
            seek+=abs(l[i]-head);
            head=l[i];
        }
    }    
    printf("\nTotal seek time: %d",seek);
    printf("\nAverage seek time: %d \n",seek/n);
    
}
