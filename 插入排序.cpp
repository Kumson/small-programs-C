#include<stdio.h>

int main ()		//��ע�����ָ����鸳ֵ�ķ��� 
{
	int a[10]={43,21,4,62,12,76,59,38,46,65},b,key,i,k,n;		//key�ǵ�ǰ���۲���� 
	for (k = 1; k < 10; k ++)
	{
		key = a[k];
		for (i = k - 1; i >= 0; i --)
		{
			if (a[i]<key)		//�ڴ��޸������� 
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
