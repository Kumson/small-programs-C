#include <stdio.h>
float num,m,n,b,h;		//mΪ�����д�����nΪС����b���ڻ�λ�ã�h=(m+n)/2 
int main ()
{
	printf ("��Ҫ����������"); 
	scanf ("%f",&num);
	m = num;
	n = num / 2;
	while (m - n>0.00001)
	{
		h = (m + n) / 2;
		if ((m * m - num)<(num - n * n))		//ע�������ţ� 
		{
			n = h;
		}
		else
		{
			m = h;
		}
	}
	h = (m + n) / 2;
	printf ("���(��ȷ��0.00001)��%f",h);
	return 0; 
}
