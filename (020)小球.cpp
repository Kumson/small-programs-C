#include<stdio.h>
int main ()
{
	float s,h;
	int i;
	i = 2;
	h = 100;
	s = 100;
	for (i = 2; i < 11; i ++)
	{
		h = h / 2;
		s = s + h * 2;
	}
	h = h / 2;
	printf("s=%f\n",s);
	printf("h=%f",h);
	return 0;
}
