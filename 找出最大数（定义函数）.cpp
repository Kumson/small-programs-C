#include <stdio.h>
int max(int x,int y);
int a,b,c,x,y,m;
int main ()
{
	scanf("%d%d",&a,&b);
	if (a==b)		//分情况讨论，包含相等的情况 
	{
		printf("两个数相等");
	} 
	else
	{
		c=max(a,b);
		printf("最大数为：%d\n",c);
	}
	return 0;
}
int max(int x,int y)		//自定义函数 
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
