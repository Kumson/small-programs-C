#include<stdio.h>
int num,div,k,x,sum;		
/*num�Ǳ���������div�ǳ�����k�ǿ���ֵ��0����Ϊ������1��������������xΪ��鵽�ķ�Χ,sum����������*/ 
int main ()
{
	 printf("����п�ʼ�����֣�"); 
	 scanf("%d",&num);
	 if(num <= 2)
	 {
	 	num = 2;
	 }
	 sum = 0;
	 printf("����Ҫ��鵽�����֣�");
	 scanf("%d",&x);
	 printf ("%d~%d����ȫ������Ϊ��\n",num,x);
	 while (num<=x)
	 {
		k = 0;	
		div = 2;		//ע��k��div��ѭ���б����õ�λ�� 
	 	while (div<num)
	 	{
	 		 if (num % div  == 0)
	 		  {
	 		 	k = 1;
			 	 break;
	 		 	
	 		 }
	 	 	 else
	 		  {
	 		 	div ++;
	 	 	  }
	 	 }
	 	 if (k == 0||num == 2)
	 	 {
	 		printf ("%d\n",num);
	 		sum ++; 
	 	 } 
		 num ++;
	 }
	 printf("����%d������",sum); 
	 return 0;
} 
