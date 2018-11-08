#include<stdio.h>
int main()
{
	int a[10],i;
	for(i = 0; i < 10; i ++)
	{
		scanf("%d",&a[i]);
	}
	int x;		//x是向右滚动的距离 
	printf("Enter x:");
	scanf("%d",&x);
	
	int n = 6;		//n是参与滚动的数 
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
