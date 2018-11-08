#include<stdio.h>
int num,div,k,x,sum;		
/*num是被检查的数，div是除数，k是控制值（0代表为素数，1代表不是素数），x为检查到的范围,sum是素数总数*/ 
int main ()
{
	 printf("检查中开始的数字："); 
	 scanf("%d",&num);
	 if(num <= 2)
	 {
	 	num = 2;
	 }
	 sum = 0;
	 printf("您需要检查到的数字：");
	 scanf("%d",&x);
	 printf ("%d~%d以内全体素数为：\n",num,x);
	 while (num<=x)
	 {
		k = 0;	
		div = 2;		//注意k和div在循环中被重置的位置 
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
	 printf("共计%d个素数",sum); 
	 return 0;
} 
