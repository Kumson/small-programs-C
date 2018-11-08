#include<stdio.h>
void sort(int* x,int k)
{
	int i,j,max,bot;
	for (i = 0; i < k; i ++)
	{
		max = *(x + i);
		for(j = 0; j < k; j ++)
		{
			if (*(x + j) > max)
			{
				bot = *(x + j);
				*(x + j) = *(x + i);
				*(x + i) = bot;
			}
		}
	}
	return ;
} 
int main()
{
	int a[10],* p,i;
	for(p = a, i = 0; i < 10; i ++,p ++)
	{
		scanf("%d",p);
	}
	p = a;
	
	sort(p,10);
	
	for(p = a, i = 0; i < 10; i ++,p ++)
	{
		printf("%d ",*p);
	}
	
}
