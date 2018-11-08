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

int search(int a[], int begin, int end, int k)
{
	if (begin < end)
	{
		int num;
		num = devide(a,begin,end) + 1;
		if (k < num)
			search(a,begin,num - 1,k);
		else if (k > num)
			search(a,num + 1,end,k - num);
		else
			return (a[num]);
	}
}

int main()
{
	int a[10],i;
	for(i = 0; i < 10;i ++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("%d",search(a,0,9,7));		//µÚ7´ó 
	
	return 0;
}
