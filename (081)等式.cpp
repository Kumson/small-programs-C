#include<stdio.h>
int main()
{
	int num;
	
	for (num = 10; num < 100; num ++)
	{
		if (809 * num == 800 * num + 9 * num)
		{
			if (1000 <= 809 * num && 809 * num < 10000)
			{
				if (10 <= 8 * num && 8 * num < 100)
				{
					if (100 <= 9 * num && 9 * num < 1000)
					{
						printf("%d ",num);
						printf("%d\n",809 * num);
					}
				}
			}
		}
	}
	
	return 0;
} 
