#include <stdio.h>
int main()  //九九乘法表，h是前项，i是后项
{int i,h,s;
	i=1;
	h=1;
	while(i<=9)
	{
		while(h<=i)
		{
		s=i*h;
		printf("%d*%d=%d ",h,i,s);	//用了空格 
		h=h+1;
		}
		printf("\n");
		i=i+1;
		h=1; 	//h值在此处初始化逻辑更清晰 
	}
 return 0;
}
