#include<stdio.h>
void  overturn_1(int a[],int k)		//ǰk��ߵ�����1�� 
{
	int bot,i,j,mid = (k - 1) / 2;
	for (i = 0; i <= mid; i ++)
	{
		j = k - 1 - i;
		bot = a[i];
		a[i] = a[j];
		a[j] = bot;
	}
	return;
} 
void overturn_2(int *x, int k)		//overturn_1 ��overturn_2����ȫ�ȼ۵� 
{
	int *i,*j,*p,bot;
	i = x;
	j = x + k - 1;
	p = x + (k - 1) / 2;
	for (;i <= p; i ++,j --)
	{
		bot = *i;		//*i��a[i]�ȼ� 
		*i = *j;
		*j = bot;
	}
}
int main()
{
	int i,a[10];
	for (i = 0; i < 10; i ++)
	{
		scanf("%d",&a[i]);
	}
	
	overturn_1(a,4);
	overturn_2(a,4);		
	
	for (i = 0; i < 10; i ++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
