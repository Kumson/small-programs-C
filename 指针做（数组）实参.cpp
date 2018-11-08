#include<stdio.h>
int prt(int *x, int k)
{
	int i;
	for(i = 0; i < 10; i ++,x ++)
	{
		printf("%d ",*x);
	}
}
int main()
{
	int i,a[10],* p = a;	//int * p可看做 int* p=a  
							//这个数组a[10]是必须设的，没有a[]指针p就没有确定值 
	
	for (i = 0; i < 10; i ++,p ++)
	{
		scanf("%d",p);		//p即是地址 
	}
	p = a;		//注意要初始化指针p的位置 
	
	printf("\n***\n\n");
	
	prt(p,10);
	
	return 0;
} 
