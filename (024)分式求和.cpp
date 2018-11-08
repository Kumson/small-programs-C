/*2/1+3/2+5/3+8/5+13/8+21/13...=£¿*/ 
#include<stdio.h>
int main ()
{
	float sum,a1,a2,a3,b1,b2,b3,i;
	a1 = 2;
	a2 = 3;
	b1 = 1;
	b2 = 2;
	sum = a1 / b1 + a2 / b2;
	for(i = 3; i <= 20; i ++)
	{
		a3 = a1 + a2;
		b3 = b1 + b2;
		sum = sum + a3 / b3;
		a1 = a2;
		a2 = a3;
		b1 = b2;
		b2 = b3;
	}
	printf("%f",sum);
	return 0;
}
