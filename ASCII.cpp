#include<stdio.h>
int main ()
{
	int i;
	char c;
	for(i = 0; i < 128; i ++)
	{
		c = i;
		printf("%d---%c\n",i,c);
	}
	return 0;
}
