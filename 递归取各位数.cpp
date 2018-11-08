#include<stdio.h>
void get(int n)
{
	if(n < 10)
	{
		printf("%d",n);
	}
	else
	{		
		get (n / 10);		//改变这两个语句的顺序即可改变输出的正逆序 
		printf("%d",n % 10);
	}
}
int main()
{
	int n;
	scanf("%d ",&n);
	get(n);
	return 0;
}
