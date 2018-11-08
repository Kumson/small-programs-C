#include<stdio.h>
int fac(int x)
{
	if (x == 1)
		return 1;
	else
		return x * fac(x - 1);	
} 
int main()
{
	int i,num,s;
	printf("Enter a number:\n");
	scanf("%d",&num);
	s = fac(num);
	for(i = 1; i <= num; i ++)
	{
		printf("%d*",i);
	}
	printf("\b=");
	printf("%d",s);
}
