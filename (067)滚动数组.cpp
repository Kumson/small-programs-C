#include<stdio.h>
int main()
{
	int a[10],i;
	for(i = 0; i < 10; i ++)
	{
		scanf("%d",&a[i]);
	}
	int x;		//x�����ҹ����ľ��� 
	printf("Enter x:");
	scanf("%d",&x);
	
	int n = 6;		//n�ǲ���������� 
	int * p;
	int end;
	while (x > 0)
	{
		end = a[n - 1];
		for(p = a + n - 1; p > a; p --)
		{
			*(p) = * (p - 1);
		}
		*p = end;
		x --;
	}
	
	for(i = 0; i < 10; i ++)
	{
		printf("%d ",a[i]);
	}
}
