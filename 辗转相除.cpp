#include<stdio.h>	//辗转相除	 
int x,y,b;		//x,y是主函数中输入的两个待处理的数
int main ()
{
	printf ("需要找最大公约数的两个数：");
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
	printf ("最大公约数为：%d",y);
	return 0;
} 
