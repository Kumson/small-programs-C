#include <stdio.h>
#include <stdlib.h>
int min(int x,int y);
int main (void)
{  
   char ch =0;
   while (ch!='q')
   { 
   int a,b,c;               /*�������a,b,c*/
   a=0,b=0,c=0;
   printf("Please input a numbers.\n");
   scanf("%d",&a);
   printf("Please input another numbers.\n");
   scanf("%d",&b);    /*�������a��b��ֵ*/ 
   c=min(a,b);              /*����min���������õ���ֵ����c*/
   printf("The smallest value is %d\n",c);
   printf ("(Press q to exit.Press other keys to go on)\n");     /*���c��ֵ*/
   ch = getchar();		//ע��scanf������ȡ������ 
   ch = getchar();
}

}

int min(int x,int y)      /*����max����������ֵΪ���Σ���ʽ����x��y*/ 
{
int z;                     /*����ֲ�����z*/ 
if(x<y)z=x;
else z=y;
return(z);                 /*��zֵ���أ�ͨ��min���ص��ô�*/ 
 
}
