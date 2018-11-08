#include<stdio.h>
int rec(int num)
{
	if (num == 1)
		return 10;
	else 
		return (rec(num - 1) + 2);	
} 
int main()
{
	int num = 5;
	printf("%d",rec(num));
	return 0;
}
