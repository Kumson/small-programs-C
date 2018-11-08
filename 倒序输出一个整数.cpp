#include<stdio.h>
int main()
{
	int num,opt,i,a[100],end,site,x;
	printf("Enter your number:");
	scanf("%d",&num);
	x = num;
	
	for (i = 0; (x % 10) != x; i ++)
	{
		a[i] = x % 10;
		x = x / 10;
	}
	a[i] = x;
	end = i;
	
	for (i = 0,site = 1; i < end; i ++)
	{
		site = site * 10;
	}
	
	for (opt = 0,i = 0; i <= end; i ++)
	{
		opt = opt + site * a[i];
		site = site / 10;
	}
	
	printf("%d",opt);
	
	return 0;
} 
