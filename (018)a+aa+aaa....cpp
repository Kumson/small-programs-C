/*��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�*/
#include<stdio.h>
int num (int x, int y);
int main()
{
	int n,i,k,s;
	printf("��������n = ");
	scanf ("%d",&n);
	printf("�������λ��k = ");
	scanf ("%d",&k);
	s = 0;
	for(i = 0; i <= k; i ++)
	{
		s = s + num (n,i);
	}
	printf ("%d",s);
	return 0;
}
int num(int x, int y)
{
	int a,b,c;
	a = 0;
	c = 1;
	b = y;
	for (y = 1; y <= b; y ++)
	{
		a = a + x * c;
		c = c * 10;
	}
	return (a);
}
