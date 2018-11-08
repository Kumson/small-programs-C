#include<stdio.h>	//辗转相除	 
int x,y,b;		//x,y是主函数中输入的两个待处理的数
int main ()
{
	printf ("请输入两个数：");
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
	printf ("最大公约数为：%d\n",y);
	printf ("最小公倍数为：%d",l);		//两个数的最小公倍数是两个数乘积除以最大公约数 
	return 0;
} 
