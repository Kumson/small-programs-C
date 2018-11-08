#include <stdio.h>
int i,j,s;
int main ()
{
	for (i = 1; i < 10; i ++)
	{
		for (j = 1; j <=i; j ++)
		{
			s = i * j;
			printf("%d * %d = %d ",j,i,s); 
		}
		printf("\n");
	}
	return 0;
} 
