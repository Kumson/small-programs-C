#include <stdio.h>
int max(int x,int y);
int a,b,c,x,y,m;
int main ()
{
	scanf("%d%d",&a,&b);
	if (a==b)		//��������ۣ�������ȵ���� 
	{
		printf("���������");
	} 
	else
	{
		c=max(a,b);
		printf("�����Ϊ��%d\n",c);
	}
	return 0;
}
int max(int x,int y)		//�Զ��庯�� 
{
	if (x>=y)
	{
		m = x;
	}
	else
	{
		m = y;
	}
	return (m);
}
