#include<stdio.h>
int main()
{
	double part = 1,sum = 0;
	float i;
	for(i = 1.0; i < 21; i ++)
	{
		part = part * i;		//ǰ������ʹ�õ�ֵֻ��һ�β���������Ҫ�õݹ顢С���� 
		sum = sum + part;
	}
	printf("%lf",sum);
	return 0;
}
