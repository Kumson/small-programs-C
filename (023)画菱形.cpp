#include<stdio.h>
int i,n,j,k;		//iѭ���ո�jѭ��*��nΪ�̶Խ��߳� 
int main ()
{
	printf("����̶Խ��߳�����ҪΪ������:");
	scanf ("%d",&n);
	if (n%2==0)
	{
		printf("ż�����μⲻ������������������");
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
