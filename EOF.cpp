#include<stdio.h>
int i,fir,sec,stop,a[100][2];
int main()
{
	for(i = 0; i < 1600; i ++)
	{
		if (2 !=  scanf("%d%d",&fir,&sec))
			{
			stop = i;
			break;
			}
		a[i][0] = fir;
		a[i][1] = sec;	
	}
	
	printf("***\n");
	
	for(i = 0; i < stop; i ++)
	{
		printf("%d %d\n",a[i][0],a[i][1]);	
	}
	return 0; 
} 

