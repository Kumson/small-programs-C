#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	if (num < 2)
		num = 4;
		
	for (i = 2; i < num; i ++)
	{
		if (num % i == 0)
			break;
	}
	
	if (i >= num)
		printf("YES");
	else 
		printf("NO");
		
	return 0;		
	
} 
