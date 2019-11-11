#include<stdio.h>
void main()
{
int ch,a[100],n,i,ele;
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe array you entered is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
do{int pos[100],flag=0;
printf("\nEnter the no. to be searched for: ");
scanf("%d",&ele);
for(i=0;i<n;i++)
{ if(a[i]==ele)
 { pos[flag]=i+1; flag++;}
}
if(flag){
printf("\nNo. of occurences = %d \nElement found at positions: \n",flag);
for(i=0;i<flag;i++)
printf("%d ",pos[i]); 
}
else
printf("\nElement not found..!\n");
printf("\nPress 1 to search again, 0 to exit: ");
scanf("%d",&ch);
}while(ch==1);
}
