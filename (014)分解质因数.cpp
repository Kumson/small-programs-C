#include<stdio.h>		
int num,i;
int main ()
{
	printf ("请输入要分解的数字:");
	scanf ("%d",&num);
	printf ("%d=",num);
	for(i = 2; i <= num; i ++)		//num被小质数除过一遍后一定不能被由小质数组成的大合数整除 
	{
		while (num % i ==0)
		{
			if(num != i)
			{
			printf("%d*",i);
			num = num / i;
			}
			else 
			{
				printf ("%d",i);		//处理最后一项 
				break;
			} 
		}
		
	}
	return 0;
}
