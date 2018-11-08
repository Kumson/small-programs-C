#include<stdio.h>

int main ()
{	
	int num[10]={10,2,6,3,76,12,11,56,36,63},i,k,s,b;
	k = 5;
	s = k; 
	for (i = k;i<10;i++)
	{
		if (num[i]>num[s])
		{
			s = i;
		}
	}
	b = num[k];
	num[k] = num [s];
	num[s] = b;
	for (i = k; i < 10; i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
} 
