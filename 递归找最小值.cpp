#include<stdio.h>
int min(int a[],int n)
{
	if (n == 0)
		return a[n];
	else
	{
		if (a[n]<min(a,n - 1))
			return (a[n]);
		else
			return min(a,n - 1);
	}
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	printf("%d",min(a,n));
	return 0;
} 
