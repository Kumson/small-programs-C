#include<stdio.h>
int sdf(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
	{
		return sdf(n - 1) + sdf(n - 2);
	}		
}
int main ()
{
	int n;
	scanf ("%d",&n);
	printf("%d",sdf(n));
	return 0;
}
