#include<stdio.h>
int main()
{
	int a,b;
	int * a1,* b1;
	a = 100;
	b = 1;
	a1 = &a;
	b1 = &b;
	printf("a = %d, b = %d\n",a,b);
	printf("*a = %d, *b = %d",*a1,*b1);
	return 0;
} 
