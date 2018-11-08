#include <stdio.h>		
int main ()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10],k,x,i;
	k = 3; 		//输出结果使a[]数列全体向右k位（向左则k为负数） 
	for (i = 0; i < 10; i ++)
	{
		b[i] = (a[i] - 1 + k) % 10 + 1;		//直接写入，不要再扯着a[] 
		printf ("%d ",b[i]);
	}
	return 0;
} 
