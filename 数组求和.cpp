#include<stdio.h>
int SUM(int A[],int n)		//int A[]声明有数组进入子函数 
{
	if (n == 1)
		return A[n];
	else
	{
		return A[n]+SUM(A,n - 1);
	}	
}
int main ()
{
	int A[10]={1,2,3,4,5,6,7,8,9,10};		//对A[]进行定义 
	int n = 9;
	printf("%d",SUM(A,n));
}

