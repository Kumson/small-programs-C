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
	int i,a[10],* p = a;	//int * p�ɿ��� int* p=a  
							//�������a[10]�Ǳ�����ģ�û��a[]ָ��p��û��ȷ��ֵ 
	
	for (i = 0; i < 10; i ++,p ++)
	{
		scanf("%d",p);		//p���ǵ�ַ 
	}
	p = a;		//ע��Ҫ��ʼ��ָ��p��λ�� 
	
	printf("\n***\n\n");
	
	prt(p,10);
	
	return 0;
} 
