#include<stdio.h>	//շת���	 
int x,y,b;		//x,y����������������������������
int main ()
{
	printf ("��Ҫ�����Լ������������");
	scanf ("%d%d",&x,&y);		
	if (x<y)		
	{
		b = x;
		x = y;
		y = b;
	}
	while (x%y!=0)
	{
		b = x%y;
		x = y;
		y = b;
	}
	printf ("���Լ��Ϊ��%d",y);
	return 0;
} 
