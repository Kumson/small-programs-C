/*���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��
 �ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
�Ժ�ÿ�����϶�����ǰһ��ʣ�� ��һ����һ����
����10(n)���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�*/
#include<stdio.h>
int recall(int d)		//�ܹ������� 
{
	if (d == 1)
	{
		return 1;
	}
	else
	{
		return (recall(d - 1) + 1) * 2;
	}
}
int main ()
{
	int date;
	printf("Enter the date:");
	scanf("%d",&date);
	int sum = recall (date);
	printf("The sum at first day was: %d",sum);
	return 0;
}
