#include<stdio.h>
int main ()
{
	struct student
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}
	a = {10101,"Li Lin",'M',"123 Beijing Road"};
	printf("No.:%ld \nName:%s \nSex:%c \nAddress:%s\n",a.num,a.name,a.sex,a.addr);
	return 0;
} 
