#include<stdio.h>
int main()
{
	int num,i,k = 0;
	printf("Enter your number:");
	scanf("%d",&num);
	if (num == 2)
	{
		printf("Y");
		k = 1;
	}
	for(i = 2; i < num; i ++)
	{
		if (num % i == 0)
		{
			printf("N");
			k = 1;
			break;
		}
	}
	if (k == 0)
	{
		printf("Y");
	}
	return 0;
} 
