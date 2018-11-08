#include<stdio.h>
int main()
{
	long int x;
	int num[1000],i,end;
	scanf("%d",&x);
	for (i = 0; (x % 10) != x; i ++)
	{
		num[i] = x % 10;
		x = x / 10;
	}
	num[i] = x;
	end = i;
	
	for (i = end; i >= 0; i --)
	{
		printf("%d ",num[i]);
	}
	
	return 0;
} 
