#include<stdio.h>	//շת���	 
int x,y,b;		//x,y����������������������������
int main ()
{
	printf ("��������������");
	scanf ("%d%d",&x,&y);		
	if (x<y)		
	{
		b = x;
		x = y;
		y = b;
	}
	int m = x * y;
	while (x%y!=0)
	{
		b = x%y;
		x = y;
		y = b;
	}
	int l = m / y;
	printf ("���Լ��Ϊ��%d\n",y);
	printf ("��С������Ϊ��%d",l);		//����������С���������������˻��������Լ�� 
	return 0;
} 
