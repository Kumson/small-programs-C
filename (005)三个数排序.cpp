/*��Ŀ��������������x,y,z���������������С���������
����ѭ���ģ�ð������*/
#include<stdio.h>
int n1,n2,n3,b;
int main ()
{
	scanf ("%d%d%d",&n1,&n2,&n3);
	if (n1>n2)
	{
		b = n1;
		n1 = n2;
		n2 = b;
	}
	if (n2>n3)
	{
		b = n2;
		n2 = n3;
		n3 = b;
	}
	if (n1>n2)
	{
		b = n1;
		n1 = n2;
		n2 = b;
	}
	printf ("%d %d %d",n1,n2,n3);
	return 0;
} 
