#include<stdio.h>
int num,div,mod,squ,c;
int main ()
{
	c = 0;
	for (num = 1;num <100;num = num + 2)		//for���ǰ�����ԡ�;����β�����һ��û�С�;�� 
	{
		squ = num * num;
		mod = squ % 8;
		div = (squ - mod) / 8;
		if (mod == 1)
		{
			printf ("(%d^2)/8=%d...%d\n",num,div,mod);
			c ++;
		}
		else
		{
			printf ("����");
		} 
	}
	if (c == 50)
	{
		printf ("100����50������ȫ����������");
	}
	return 0;
}
