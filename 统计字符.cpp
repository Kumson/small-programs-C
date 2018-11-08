#include<stdio.h>
int main()
{
	char a[1000];
	int e,b,c,d,i;
	gets(a);
	e = 0;
	b = 0;
	c = 0;
	d = 0;
	
	for(i = 0; a[i] != '\0'; i ++)
	{
		if (a[i] <= 'z' && a[i] >= 'a')
			e ++;
		else if (a[i] <= 'Z' && a[i] >= 'A')
			e ++;
		else if (a[i] == ' ')
			b ++;
		else if (a[i] <= '9' && a[i] >= '0')
			c ++;
		else 
			d ++;				
	}
	
	printf("%d %d %d %d",e,b,c,d);
	return 0;
}
