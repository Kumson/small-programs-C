#include <stdio.h>
int main()  //�žų˷���h��ǰ�i�Ǻ���
{int i,h,s;
	i=1;
	h=1;
	while(i<=9)
	{
		while(h<=i)
		{
		s=i*h;
		printf("%d*%d=%d ",h,i,s);	//���˿ո� 
		h=h+1;
		}
		printf("\n");
		i=i+1;
		h=1; 	//hֵ�ڴ˴���ʼ���߼������� 
	}
 return 0;
}
