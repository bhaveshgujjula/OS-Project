#include <stdio.h>
int main() 
{ 
  
    	int n, m, i, j, k,alloc[15][15],max[15][15],avail[15];
	printf("Enter the no of processes : ");
	scanf("%d", &n);  
    	printf("Enter the no of resources : ");
	scanf("%d", &m);
	printf("\nEnter the Allocation Matrix for each process : ");
	for(i = 0; i < n; i++)
	{
		printf("\nFor process %d : \n",i + 1);
			for(j = 0; j < m; j++)
			{
				scanf("%d", &alloc[i][j]);	
			}
	}
 	printf("\n\nEnter the Maximum Matrix for each process : \n");
	for(i = 0; i < n; i++)
	{
		printf("\nFor process %d : \n", i + 1);
		for(j = 0; j < m; j++)
		{
			scanf("%d", &max[i][j]);
		}
	}
 
  	printf("\n\nEnter the Available Resources : \n");
	for(i = 0; i < m; i++)
		{
			scanf("%d", &avail[i]);
		} 
} 
