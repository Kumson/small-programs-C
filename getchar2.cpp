#include <stdio.h>
#include <stdlib.h>
int min(int x,int y);
int main (void)
{  
   char ch =0;
   while (ch!='q')
   { 
   int a,b,c;               /*定义变量a,b,c*/
   a=0,b=0,c=0;
   printf("Please input a numbers.\n");
   scanf("%d",&a);
   printf("Please input another numbers.\n");
   scanf("%d",&b);    /*输入变量a和b的值*/ 
   c=min(a,b);              /*调用min函数，将得到的值赋给c*/
   printf("The smallest value is %d\n",c);
   printf ("(Press q to exit.Press other keys to go on)\n");     /*输出c的值*/
   ch = getchar();		//注意scanf函数提取的内容 
   ch = getchar();
}

}

int min(int x,int y)      /*定义max函数，函数值为整形，形式参数x，y*/ 
{
int z;                     /*定义局部变量z*/ 
if(x<y)z=x;
else z=y;
return(z);                 /*将z值返回，通过min带回调用处*/ 
 
}
