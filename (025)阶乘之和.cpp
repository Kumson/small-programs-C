#include<stdio.h>
int main()
{
	double part = 1,sum = 0;
	float i;
	for(i = 1.0; i < 21; i ++)
	{
		part = part * i;		//前后两次使用的值只差一次操作，不需要用递归、小函数 
		sum = sum + part;
	}
	printf("%lf",sum);
	return 0;
}
