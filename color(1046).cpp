#include<stdio.h>
#include<math.h>
int a[16][3] = {0},b[200][3] = {0};
int i,j,v1,v2,bot,end,min;
int main()
{
	for(i = 0; i < 16; i ++)
	{
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for (i = 0; i < 200; i ++)
	{
		scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);
		if (b[i][0] == -1 && b[i][1] == -1 && b[i][2] == -1)
		{
			end = i ;
			break;
		}	
	}
	
	for(i = 0; i < end; i ++)	//i-->b[]
	{
		j = 0;
		v1 = i;
		v2 = j;
		bot = sqrt(
					(a[j][0] - b[i][0]) * (a[j][0] - b[i][0]) + 
					(a[j][1] - b[i][1]) * (a[j][1] - b[i][1]) +
					(a[j][2] - b[i][2]) * (a[j][2] - b[i][2]) 
		   		  );
		min = bot;
		for(j = 0; j < 16; j++)	//j-->a[]
		{
			bot = sqrt(
					(a[j][0] - b[i][0]) * (a[j][0] - b[i][0]) + 
					(a[j][1] - b[i][1]) * (a[j][1] - b[i][1]) +
					(a[j][2] - b[i][2]) * (a[j][2] - b[i][2]) 
		   		      );
			if (min > bot)
			{
				min = bot;
				v1 = i;
				v2 = j; 
			}	
		}
		printf("(%d,%d,%d) maps to (%d,%d,%d)\n",b[v1][0],b[v1][1],b[v1][2],a[v2][0],a[v2][1],a[v2][2]);
	}
	return 0;	
} 
