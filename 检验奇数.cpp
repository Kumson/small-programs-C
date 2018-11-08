#include<stdio.h>
int num,div,mod,squ,c;
int main ()
{
	c = 0;
	for (num = 1;num <100;num = num + 2)		//for语句前两句以“;”结尾，最后一句没有“;” 
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
			printf ("错误！");
		} 
	}
	if (c == 50)
	{
		printf ("100以内50个奇数全部满足条件");
	}
	return 0;
}
