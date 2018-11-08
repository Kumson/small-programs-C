#include<stdio.h>
int check(int num)
{
	int div;
	if (num == 2||num == 3)
		return 1;
	for (div = 2;div < num; div ++)
	{
		if (num % div == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n,i,k;
	for (n = 4; n < 1000; n = n + 2)
	{
		k = 0;
		for (i = 2; i < n; i ++)
		{
			if (k == 1)		//Ö»ÕÒÒ»×é 
				break;
			if (check(i) && check(n - i))
			{
				printf("%d = %d + %d\n",n,i,n - i);
				k = 1; 
			}
		}
		if (k == 0)
		{
			printf("Error");
			break;
		}
	}
	return 0;
}
