#include<stdio.h>
int d;
main ()
{
		printf ("请输入阿拉伯数字： ");
		scanf ("%d",&d);
		printf ("大写： "); 
		switch (d)
		{
			case 1:
				printf ("壹");
				break;
			case 2:
				printf ("贰");
				break;
			case 3:
				printf ("叄");
				break;
			case 4:
				printf ("肆");
				break;
			case 5:
				printf ("伍");
				break;	 
			case 6:
				printf ("陆");
				break;
			case 7:
				printf ("柒");
				break;
			case 8:
				printf ("捌");
				break;
			case 9:
				printf ("玖");
				break;
			case 0:
				printf ("零");
				break;
			default:
				printf ("错误，只能翻译0~9这十个阿拉伯数字");
				break;
		}
return 0;	
} 
