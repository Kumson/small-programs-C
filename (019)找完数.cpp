/*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������*/
#include<stdio.h>
int main()
{
	int n,i,k,a[1000];
	for (n = 2; n <= 1000; n ++)		//nȷ����Χ 
	{
		int b;
		b = n;
		k = 1;
		a[0] = 1;
		for (i = 2; i <= b&&i != n; i ++)		//�ҵ�������д������ 
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
		if (s == n)		//�ж��Ƿ�Ϊ���� 
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
