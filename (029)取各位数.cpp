#include<stdio.h> 
int main()
{
	int num,i,c,p,a[50];
	scanf("%d",&num);
	p = 10;
	for(i = 1; p < num; i ++)
	{
		p = p * 10;
	}
	c = i;
	for(i = 0; i < c; i ++)
	{
		a[i] = num % 10;
		num = num / 10;
	}
	for(i = c - 1; i >= 0; i --)
	{
		printf("%d ",a[i]);
	}
	printf("\n%dÎ»Êı×Ö",c);
	return 0;
}
