#include<stdio.h>
void sort(int a[], int n)
{
	int i,b;
	if(n == 1)
	;
	else
	{
		sort(a,n - 1);
		for (i = n - 1; a[i] < a[i - 1]; i --)
		{
			b = a[i];
			a[i] = a[i - 1];
			a[i - 1] = b;
		}
	}
} 
void printf(int a[],int n)
{
	int i;
	for (i = 0; i < n; i ++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int a[4] = {1,4,3,2};
	sort(a,4);
	printf(a,4);
	return 0;
}
