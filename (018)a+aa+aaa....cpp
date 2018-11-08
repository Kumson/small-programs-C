/*求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。*/
#include<stdio.h>
int num (int x, int y);
int main()
{
	int n,i,k,s;
	printf("单个数字n = ");
	scanf ("%d",&n);
	printf("最大数字位数k = ");
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
