#include<stdio.h>
void get(int a[])
{
	int i;
	for (i = 0; i < 10; i ++)
	{
		scanf("%d",&a[i]);
	}
}

void adjust(int a[])
{
	int max,min,i,bot;
	int * p1,* p2,*p;
	p1 = a;
	p2 = a + 9;
	max = 0;
	min = 0;
	for(i = 0; i < 10; i ++, p ++)
	{
		if (a[i] >= a[max])
			max = i; 
		if (a[i] <= a[min])
			min = i;
	}
	
	p = p1 + max;
	bot = * p;
	* p = * p2;
	* p2 = bot;
	
	p = p1 + min;
	bot = * p;
	* p = * p1;
	* p1 = bot;
}

void prt(int a[])
{
	for (int i = 0; i < 10; i ++)
		printf("%d ",a[i]);
}

int main()
{
	int a[10];
	
	get(a);
	
	adjust(a);
	
	prt(a);
	
	return 0;
}
