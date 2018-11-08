#include<stdio.h>
int YEAR(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
		return 29;
	else if (year % 400 == 0)
		return 29;
	else 
		return 28;		
}

int main() 
{
	int year,month,day,feb,num,i;
	scanf("%d%d%d",&year,&month,&day);
	feb = YEAR(year);
	int a[13] = {0,31,feb,31,30,31,30,31,31,30,31,30,31};
	num = 0;
	for (i = 0; i < month; i ++)
		num = num + a[i];
	num = num + day;
	printf("%d",num);
	return 0;	
} 
