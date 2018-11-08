#include<stdio.h>
int i,n,j,k;		//i循环空格，j循环*，n为短对角线长 
int main ()
{
	printf("输入短对角线长（需要为奇数）:");
	scanf ("%d",&n);
	if (n%2==0)
	{
		printf("偶数菱形尖不够完美，换个奇数吧");
		return 0;
	}
	i = (n - 1) / 2;
	while (i >= 0)
	{
		k = i;
		j = n - 2 * i;
		while (k >= 0)
		{
			printf (" ");
			k --;
		}
		while (j>0)
		{
			if (j<=n-2*i||j>=1) 
			{
				printf ("*");
			}
			else
			{
				printf (" ");
			} 
			j --;
		}
		k = i;
		while (k >= 0)
		{
			printf (" ");
			k --;
		}
		printf ("\n");
		i --;
	}
	i = 1;
	int x;
	x = (n - 1)/2;
	while (i <= x)
	{
		k = i;
		j = n - 2 * i;
		while (k >= 0)
		{
			printf (" ");
			k --;
		}
		while (j>0)
		{
			if (j<=n-2*i||j>=1)
			printf ("*");
			else
			printf (" ");
			j --;
		}
		k = i;
		while (k >= 0)
		{
			printf (" ");
			k --;
		}
		printf ("\n");
		i ++;
	}
	return 0;
} 
