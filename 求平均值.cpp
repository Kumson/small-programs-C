/*
��������a,b,c��ƽ����aver
���庯����Ϊaverage
*/ 
#include <stdio.h>		
float a,b,c,aver;
float average(float a,float b,float c);		//ʹ��ǰ����������������Ҳ���Է���main������ 
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
