#include<stdio.h>		//精确到小数点后n位（四舍五入） 
int main ()
{
	float a = 1.732162132;
	float n,k;
	k = 1; 
	for (n = 4; n > 0; n --)
	{
		k = k * 0.1;
	} 
	float b = (int)(a / k + 0.5) * k;
	printf ("%f",b);
	return 0; 
} 
