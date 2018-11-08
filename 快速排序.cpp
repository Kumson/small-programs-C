#include<stdio.h>
int devide(int a[], int begin, int end)
{
	int i, j, key;
	i = begin;
	key = a[begin];
	j = end;
	
	while (i < j)
	{
		while (a[j] >= key && i < j)
		{
			j --;
		}
		if (i < j)
		{
			a[i] = a[j];
			i ++;
		}
		
		while (a[i] <= key && i < j)
		{
			i ++;
		}
		if (i < j)
		{
			a[j] = a[i];
			j --;
		}	
	}
	a[i] = key;
	return(i);
}

void sort(int a[], int begin, int end)
{
	int mid;
	if (begin < end)
	{		
		mid = devide(a,begin,end);
		sort(a,begin,mid - 1);
		sort(a,mid + 1,end);
	}
}

int main ()
{
	int a[10],i;
	for(i = 0; i < 10;i ++)
	{
		scanf("%d",&a[i]);
	}
	
	sort(a,0,10);
	
	for (i = 0; i < 10; i ++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
} 
