#include<stdio.h>
int SUM(int A[],int n)		//int A[]��������������Ӻ��� 
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
	int A[10]={1,2,3,4,5,6,7,8,9,10};		//��A[]���ж��� 
	int n = 9;
	printf("%d",SUM(A,n));
}

