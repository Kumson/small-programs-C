#include<stdio.h>
long int num(int d)
{
	if (d == 1 || d == 2)
	{
		return 1;
	}
	else
	{
		return (num(d - 1) +num (d - 2));
	}
}
int main()
{
	int d;
	scanf("%d",&d);
	printf("%ld",num(d));
	return 0;
}
