#include<stdio.h>
void main()
{
   int i,j,n,tat[10],wt[10],bt[10],pid[10],pr[10],t,twt=0,ttat=0;
   float awt,atat;
   printf("\n-----------PRIORITY SCHEDULING--------------\n");
   printf("Enter the No of Process: ");
   scanf("%d", &n);
   for (i=0;i<n;i++)
   {   
   pid[i] =i;
   printf("Enter the Burst time of Pid%d :",i+1);
   scanf("%d",&bt[i]);
   printf("Enter the Priority   of Pid %d : ",i+1);
   scanf ("%d",&pr[i]);
   }
   for (i=0;i<n;i++)
   for(j=i+1;j<n;j++)
   {
   if (pr[i] > pr[j] )
   {
   t = pr[i];
   pr[i] = pr[j];
   pr[j] = t;
   t = bt[i];
   bt[i] = bt[j];
   bt[j] = t;
   t = pid[i];
   pid[i] = pid[j];
   pid[j] = t;
   }
   }
   tat[0] = bt[0];
   wt[0] = 0;
   for (i=1;i<n;i++)
   {
   wt[i] = wt[i-1] + bt[i-1];
   tat[i] = wt[i]+bt[i];
   }
   printf("\n---------------------------------------------------------------\n");
   printf("Pid\t Priority\tBurst time\t WaitingTime\tTurnArroundTime\n");printf("\n--------------------------------------------------------------\n");
   for(i=0;i<n;i++){
   printf("\n%d\t\t%d\t%d\t\t%d\t\t%d",pid[i],pr[i],bt[i],wt[i],tat[i]);}for(i=0;i<n;i++)
   {
   ttat = ttat+tat[i];
   twt = twt + wt[i];
   }
   awt = (float)twt / n;
   atat = (float)ttat / n;
   printf("\n\nAvg.Waiting Time: %f\nAvg.Turn Around Time :%f\n",awt,atat);
   
}
