#include<stdio.h>		
int num,i;
int main ()
{
	printf ("������Ҫ�ֽ������:");
	scanf ("%d",&num);
	printf ("%d=",num);
	for(i = 2; i <= num; i ++)		//num��С��������һ���һ�����ܱ���С������ɵĴ�������� 
	{
		while (num % i ==0)
		{
			if(num != i)
			{
			printf("%d*",i);
			num = num / i;
			}
			else 
			{
				printf ("%d",i);		//�������һ�� 
				break;
			} 
		}
		
	}
	return 0;
}
