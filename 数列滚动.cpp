#include <stdio.h>		
int main ()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10],k,x,i;
	k = 3; 		//������ʹa[]����ȫ������kλ��������kΪ������ 
	for (i = 0; i < 10; i ++)
	{
		b[i] = (a[i] - 1 + k) % 10 + 1;		//ֱ��д�룬��Ҫ�ٳ���a[] 
		printf ("%d ",b[i]);
	}
	return 0;
} 
