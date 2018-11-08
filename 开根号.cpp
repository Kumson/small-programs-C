#include <stdio.h>
float num,m,n,b,h;		//m为二分中大数，n为小数，b用于换位置，h=(m+n)/2 
int main ()
{
	printf ("需要开方的数："); 
	scanf ("%f",&num);
	m = num;
	n = num / 2;
	while (m - n>0.00001)
	{
		h = (m + n) / 2;
		if ((m * m - num)<(num - n * n))		//注意正负号！ 
		{
			n = h;
		}
		else
		{
			m = h;
		}
	}
	h = (m + n) / 2;
	printf ("结果(精确到0.00001)：%f",h);
	return 0; 
}
