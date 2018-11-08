#include<stdio.h>
int GCD(int m,int n);
int main ()
{
	int x,y; 
	printf ("Enter x,y:");
	scanf ("%d%d",&x,&y);
	int b;
	if(x<y)
	{
		b = x;
		x = y;
		y = b;
	} 
	printf ("GCD(%d,%d) = %d",x,y,GCD(x,y));
} 
int GCD(int m,int n)
{
	if (m % n == 0)
		return n;
	else 
	{
		return GCD(n,m % n);
	}
}
