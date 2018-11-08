/*
求三个数a,b,c的平均数aver
定义函数名为average
*/ 
#include <stdio.h>		
float a,b,c,aver;
float average(float a,float b,float c);		//使用前必须先声明，声明也可以放在main函数里 
int main()
{
	scanf("%f%f%f",&a,&b,&c);
	aver = average(a,b,c);
	printf("average=%f",aver);
	return 0;
} 
float average(float a,float b,float c)
{
	float d;
	d = (a+b+c)/3;
	return (d);
}
