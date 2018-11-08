#include<stdio.h>
int main()
{
	int del,cnt,n,i;
	scanf("%d",&n);
	int a[n + 1][2];
	
	for(i = 1;i <= n; i ++)
	{
		a[i][0] = i;
		a[i][1] = 1;
	}
	
	cnt = 1;
	del = 0;
	i = 1;
	
	while (del < n - 1)
	{
		if (a[i][1] == 1)
		{
			if(cnt % 3 == 0)
			{
				a[i][1] = 0;
				del ++; 
			}
			cnt ++;
		}
		i = i % n;
		i ++;
	}
	
	for(i = 1; i <= n; i ++)		//i停的地方不好找，使用循环找出剩下的一个数 
	{
		if (a[i][1] == 1)
		{
			printf("%d",a[i][0]);
		}
	}
	
	return 0;
} 
