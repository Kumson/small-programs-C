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
int search(int a[], int x, int begin, int end)
{
	int mid;
	if (begin > end)
	{
		return(-1);
	}
	else
	{
		mid = (begin + end) / 2;
		if (a[mid] == x)
			return mid;
		else 
		{
			if (a[mid] < x)
				return search (a,x,mid + 1,end);
			else
				return search (a,x,begin,mid - 1);
		}
	}
}
int main()
{
	int a[4] = {1,4,3,2};
	sort(a,4);
	printf("排序后的数列：");
	printf(a,4);
	printf("\n");
	int x,c;
	printf("查找值：");
	scanf("%d",&x);
	c = search(a,x,0,3);
	if (c == -1)
	{
		printf("不存在");
	}
	else
	printf("在第%d个",c + 1);
	return 0;
}
