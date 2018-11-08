/*题目：输入三个整数x,y,z，请把这三个数由小到大输出。
（不循环的）冒泡排序*/
#include<stdio.h>
int n1,n2,n3,b;
int main ()
{
	scanf ("%d%d%d",&n1,&n2,&n3);
	if (n1>n2)
	{
		b = n1;
		n1 = n2;
		n2 = b;
	}
	if (n2>n3)
	{
		b = n2;
		n2 = n3;
		n3 = b;
	}
	if (n1>n2)
	{
		b = n1;
		n1 = n2;
		n2 = b;
	}
	printf ("%d %d %d",n1,n2,n3);
	return 0;
} 
