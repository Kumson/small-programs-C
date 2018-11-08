#include<stdio.h>
int main()
{
	
	bool a,b,c;
	int m;
	printf ("Please enter your score:"); 
	scanf("%d",&m);
	a = m >= 60;
	b = m >= 80;
	c = m >= 90;
	if(!a)
	{
		printf("Fail");
	}
	if(a && !b)
	{
		printf("C");
	}
	if(b && !c)
	{
		printf("B");
	}
	if(c)
	{
		printf("A");
	}
	return 0; 
} 
