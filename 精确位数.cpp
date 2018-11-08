#include<stdio.h>
int main ()
{
	float x,n,b;
	x = 1.032313121;
	n = 0.001;
	b = x % n;
	x = x - b;
	printf ("%f",x);
	return 0;
} 
