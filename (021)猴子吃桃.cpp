/*猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
以后每天早上都吃了前一天剩下 的一半零一个。
到第10(n)天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。*/
#include<stdio.h>
int recall(int d)		//总共的天数 
{
	if (d == 1)
	{
		return 1;
	}
	else
	{
		return (recall(d - 1) + 1) * 2;
	}
}
int main ()
{
	int date;
	printf("Enter the date:");
	scanf("%d",&date);
	int sum = recall (date);
	printf("The sum at first day was: %d",sum);
	return 0;
}
