#include<stdio.h>
void get(int n)
{
	if(n < 10)
	{
		printf("%d",n);
	}
	else
	{		
		get (n / 10);		//�ı�����������˳�򼴿ɸı������������ 
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
