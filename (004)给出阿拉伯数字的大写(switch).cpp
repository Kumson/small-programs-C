#include<stdio.h>
int d;
main ()
{
		printf ("�����밢�������֣� ");
		scanf ("%d",&d);
		printf ("��д�� "); 
		switch (d)
		{
			case 1:
				printf ("Ҽ");
				break;
			case 2:
				printf ("��");
				break;
			case 3:
				printf ("��");
				break;
			case 4:
				printf ("��");
				break;
			case 5:
				printf ("��");
				break;	 
			case 6:
				printf ("½");
				break;
			case 7:
				printf ("��");
				break;
			case 8:
				printf ("��");
				break;
			case 9:
				printf ("��");
				break;
			case 0:
				printf ("��");
				break;
			default:
				printf ("����ֻ�ܷ���0~9��ʮ������������");
				break;
		}
return 0;	
} 
