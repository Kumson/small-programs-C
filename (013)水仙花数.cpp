#include <stdio.h>
int num,i,j,k;
int main ()
{
	for (num = 101; num <1000; num ++)
	{
		k = num % 10;
		j = (num % 100 - k) / 10;
		i = (num - j * 10 - k) / 100;		//注意取各位数字的方法 
		if (num == i * i * i + j * j * j + k * k * k)		//	== 
		{
			printf ("%d\n",num);
		}
	}
	return 0;
}
