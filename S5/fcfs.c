#include<stdio.h>
void main()
{
    int b[20],t[20],n,i,w[20],totalt=0,totalw=0;
    float aw=0,at=0;
    printf("\nEnter the number of process u will enter:");
    scanf("%d",&n);
    printf("Enter the burst time");
    for(i=0;i<n;i++)
        {
            printf("\nEnter the burst time of process %d:",i+1);
            scanf("%d",&b[i]);
        }
    //finding waiting time
    w[0]=0;
    for(i=1;i<n;i++)
        w[i]=w[i-1]+b[i-1];
    //finding turnaroundtime
    for(i=0;i<n;i++)
        t[i]=w[i]+b[i];
    for(i=0;i<n;i++)
        {
            totalt=t[i]+totalt;
            totalw=w[i]+totalw;
        }
    aw=totalw/n;
    at=totalt/n;
    printf("\nProcess\t\tBurst time\tWaiting time\tTurnaround time\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,b[i],w[i],t[i]);
    }
    printf("\nAverage waiting time:%f",aw);
    printf("\nAverage turnaround time:%f\n",at);
}
