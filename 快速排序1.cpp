#include<stdio.h>
int a[10],b[10],begin,end,key,i,j,max,min,sep,all;	//sep是前半段最后一个元素的下标 
void MAX(int b, int e)	//b(egin), e(nd)
{
	for (i = b,max = a[b]; i <= e ; i ++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
}

void MIN(int b, int e)
{
	for (i = b,min = a[b]; i <= e; i ++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
}

int main ()
{
	for(i = 0; i < 10; i ++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	printf("begin = ");
	scanf("%d",&begin);
	printf("\nend = ");
	scanf("%d",&end);
	
	all = end - begin + 1;
	key = begin;
	begin ++;
	
	if (a[key] <= a[begin] || a[key] >= a[end])
	{
		if (a[key] > a[end])
		{
			sep = end;
		}
	}
	else 
	{
		for (sep = begin; sep < end; sep ++)
		{
			MAX(begin,sep);
			MIN(sep + 1,end);
			if (a[key] > max && a[key] < min)
			{
				break;
			}
		}
	}
	
	for (i = 0,j = begin; j <= sep; i ++, j ++)		//b[i],a[j]
	{
		b[i] = a[j];
	}
	
	b[i] = a[key];
	
	for (i ++;j <= end; i ++, j ++)
	{
		b[i] = a[j];
	}
	for(i = 0; i < all; i ++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
