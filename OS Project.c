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
	
	int f[n], ans[n], ind = 0; 
    	for (k = 0; k < n; k++)
	{ 
        	f[k] = 0; 
    	} 
    	int need[n][m]; 
    	for (i = 0; i < n; i++)
	{ 
        	for (j = 0; j < m; j++) 
        	{
        		need[i][j] = max[i][j] - alloc[i][j];
		}	
    	}

	int y = 0; 
    	for (k = 0; k < 5; k++) 
	{ 
        	for (i = 0; i < n; i++)
		{ 
            		if (f[i] == 0)
			{ 
                		int flag = 0; 
                		for (j = 0; j < m; j++)
				{ 
                    			if (need[i][j] > avail[j])
					{ 
                        		flag = 1; 
                         		break; 
                    			} 
                		} 
  
                		if (flag == 0)
				{ 
                    			ans[ind++] = i; 
                    			for (y = 0; y < m; y++) 
                        			avail[y] += alloc[i][y]; 
                    			f[i] = 1;		
                		} 
            		} 
        	} 
    	}
	int temp=1;
        for(int i=0;i<n;i++)
	{
        	if(f[i]==0)
     		{
        		temp=0;
        		break;
      		}
        }	 
} 
