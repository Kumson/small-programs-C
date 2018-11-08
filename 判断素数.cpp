#include<stdio.h>
int main()
{
	int x,i,k = 0;
	printf("x = ");
	scanf("%d",&x);
	
	if (x == 2)
		k = 0;
	
	i = 2;
	
	while (i < x)
	{
		if (x % i == 0)
		{
			k = 1;
			break;
		}
		else(i ++);
	}
	
	
	if (k == 0 && x >= 2)
		printf("\nYES");
	else
		printf("\nNO");
		
	return 0;				
} 
