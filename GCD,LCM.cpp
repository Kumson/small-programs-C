#include<stdio.h>
int main()
{
	int a,b;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	
	int x,y,GCD,LCM,bot;
	x = a;
	y = b;
	if (x < y)
	{
		bot = x;
		x = y;
		y = bot;
	}
	
	while(x % y != 0)
	{
		bot = x % y;
		x = y;
		y = bot;
	}
	GCD = y;
	LCM = a * b / GCD;
	printf("GCD = %d\n",GCD);
	printf("LCM = %d",LCM);
	
	return 0;
} 
