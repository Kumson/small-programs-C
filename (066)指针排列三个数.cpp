#include<stdio.h>

void change(int * p1,int * p2)
{
	int bot;
	if (*p1 > *p2)
	{
		bot = *p2;
		*p2 = *p1;
		*p1 = bot;
	}
}

int main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	int bot;
	scanf("%d%d%d",&a,&b,&c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	change(p1,p2);
	change(p1,p3);
	change(p2,p3);
	printf("%d %d %d",a,b,c); 
} 
