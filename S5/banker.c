#include<stdio.h>
int process_nos, resource_nos;

int safe_check(int need[process_nos][resource_nos],int allocation[process_nos][resource_nos],int available[resource_nos])
{
	int pass,flag,y = -1,flag2 = 0,new= 0;
	int work[resource_nos], finish[process_nos], safe[process_nos];
	pass = process_nos;

	for(int i=0;i<process_nos;i++)
	{
		finish[i] = 0;
		safe[i] = 0;
	}

	for(int i=0;i<resource_nos;i++)
	{
		work[i] = available[i];
	}
	while(pass > 0)
	{	
		for(int i=0;i<process_nos;i++)
		{
			if(finish[i] == 0)
			{
				flag = 0;
				for(int j=0;j<resource_nos;j++)
				{
					if(need[i][j] > work[j])
					{
						flag = 1;
						break;
					}
				}

				if(flag == 0)
				{
					y += 1;
					safe[y] = i;
					for(int j=0;j<resource_nos;j++)
					{
						work[j] += allocation[i][j];
					}
					finish[i] = 1;
				}	
			}
		}

		pass--;

		for(int i=0;i<process_nos;i++)
		{	
			new += finish[i];
			if(new == process_nos)
				flag2 = 1;		
		}

		if(flag2 == 1)
			break;
	}	

	if(flag2 != 1)
	{
		printf("Safe Sequnce doesnt exist");
		return 0;
	}	

	else
	{
		printf("\n Safe Sequence\n");
		for(int i=0;i<process_nos;i++)
		{
			printf(" P%d ",safe[i]);
		}
		return 1;
	}
}


void resource_request(int need[process_nos][resource_nos],int allocation[process_nos][resource_nos],int available[resource_nos])
{
	int request[resource_nos],reqp,flag3=0,flag4=0;
	int old_available[resource_nos], old_allocation[resource_nos], old_need[resource_nos];
	printf("\nEnter process number that needs resource:");
	scanf("%d",&reqp);
	printf("Enter the %d resources for process %d:",resource_nos,reqp);
	for(int i=0;i<resource_nos;i++)
	{
		scanf("%d",&request[i]);
	}

	for(int i=0;i<resource_nos;i++)
	{
		if(request[i] > need[reqp][i])
		{
			flag3 = 1;
			printf("\nError! Max claim exceeded");
			break;
		}

		if(flag3 == 0)
		{
			if(request[i] > available[i])
			{
				printf("\nThe process must wait as resources not available");
			} 
			
			else
			{
				old_available[i] = available[i];
				available[i] -= request[i];
				old_allocation[i] = allocation[reqp][i];
				allocation[reqp][i] += request[i];
				old_need[i] = need[reqp][i];
				need[reqp][i] -= request[i];
			}
		}
	}

	if(safe_check(need,allocation,available) == 1)
	{
		printf("\nProcess %d has been allocated the resources.",reqp);
	}
	else
	{
		printf("\nThe resource allocation is not in a safe state.Discarding new request and rolling back modifications.");
		for(int i=0;i<resource_nos;i++)
		{
			available[i] = old_available[i];
			allocation[reqp][i] = old_allocation[i];
			need[reqp][i] = old_need[i];
		}
	}
}

void main()
{
	int temp;
	printf("\nEnter number of processes:");
	scanf("%d",&process_nos);
	printf("\nEnter number of resources:");
	scanf("%d",&resource_nos);

	int allocation[process_nos][resource_nos], max[process_nos][resource_nos], need[process_nos][resource_nos]; 
	int max_instance[resource_nos], available[resource_nos];

	printf("\nEnter max instance of the %d resources:",resource_nos);
	for(int i=0;i<resource_nos;i++)
		scanf("%d",&max_instance[i]);

	printf("\nALLOCATION MATRIX");
	for(int i=0;i<process_nos;i++)
	{
		printf("\nEnter %d resources for the process %d:",resource_nos,i);
		for(int j=0;j<resource_nos;j++)
		{
			scanf("%d",&allocation[i][j]);
		}
	}

	printf("\nMAX RESOURCE MATRIX");
	for(int i=0;i<process_nos;i++)
	{
		printf("\nEnter %d resources for the process %d:",resource_nos,i);
		for(int j=0;j<resource_nos;j++)
		{
			scanf("%d",&max[i][j]);
			need[i][j] = max[i][j] - allocation[i][j];   //calculate need matrix
		}
	}

	for(int i=0;i<resource_nos;i++)
	{
		temp = 0;		
		for(int j=0;j<process_nos;j++)
		{
			temp += allocation[j][i];
		}
		available[i] = max_instance[i] - temp;		//calculate available matrix
	}

	/* Print Need Matrix */

	printf("\nNEED MATRIX");
	for(int i=0;i<process_nos;i++)
	{	
		printf("\nP%d ",i);
		for(int j=0;j<resource_nos;j++)
		{
			printf("%d ",need[i][j]);
		}
	}

	/* Safety */

	
	temp = safe_check(need,allocation,available);

	/* Resource Request */

	resource_request(need,allocation,available);

	printf("\nALLOCATION MATRIX");
	for(int i=0;i<process_nos;i++)
	{	printf("\n");
		for(int j=0;j<resource_nos;j++)
		{
			printf("%d ",allocation[i][j]);
		}
	}

	printf("\nNEED MATRIX");
	for(int i=0;i<process_nos;i++)
	{	printf("\n");
		for(int j=0;j<resource_nos;j++)
		{
			printf("%d ",need[i][j]);
		}
	}	

	printf("\nAVAILABLE\n");
	for(int i=0;i<resource_nos;i++)
	{
		printf("%d ",available[i]);
	}
}