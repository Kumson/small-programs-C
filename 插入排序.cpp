#include<stdio.h>

int main ()		//↓注意这种给数组赋值的方法 
{
	int a[10]={43,21,4,62,12,76,59,38,46,65},b,key,i,k,n;		//key是当前待观察的数 
	for (k = 1; k < 10; k ++)
	{
		key = a[k];
		for (i = k - 1; i >= 0; i --)
		{
			if (a[i]<key)		//在此修改升降序 
			{
				a[i+1] = a[i];
			}
			else 
			break;
		}
		a[i + 1] = key;
	}
	for (i = 0; i < 10; i ++)
	{
		printf ("%d ",a[i]);
	} 
	return 0; 
}
