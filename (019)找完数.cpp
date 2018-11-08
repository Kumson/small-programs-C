/*一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。*/
#include<stdio.h>
int main()
{
	int n,i,k,a[1000];
	for (n = 2; n <= 1000; n ++)		//n确定范围 
	{
		int b;
		b = n;
		k = 1;
		a[0] = 1;
		for (i = 2; i <= b&&i != n; i ++)		//找到因数并写入数组 
		{
			if (b % i == 0)
			{
			a[k] = i;
			k ++;	
			}
		}
		k --;
		b = k;
		int s = 0;
		while (k >= 0)
		{
			s = s + a[k];
			k --;
		}
		k = b;
		if (s == n)		//判断是否为完数 
		{
			printf("%d= %d",n,a[0]);
			i = 1;
			while (i <= k)
			{
				printf("+%d",a[i]);
				i ++;
			}
		printf("\n");	
		}
	}
	return 0;
} 
