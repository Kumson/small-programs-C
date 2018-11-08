 /*
**  把n个变量按降序排序
**  冒泡法 
**  用i控制了循环次数 
*/
#include <stdio.h>

int main()
{
   long int d[10];
   long int i, n, s, x;	//i为扫描轮数，n为数字个数，s为置换数是的bottle，x为扫描所进行到的序号 
   d[0] = 638;
   d[1] = 8290;
   d[2] = 475;
   d[3] = 23;
   d[4] = 485;
   d[5] = 84;
   d[6] = 39486;
   d[7] = 745;
   d[8] = 2385;
   d[9] = 1;
   
   n = 10;
   i = 0;
   while ( i < n - 1)
   {
      x = 0;
      while ( x < n - i - 1)
      {
          if ( d[x] > d[x+1]) //改变此处不等号方向即可改变升降序 （目前是降序）
		   
          {
             s = d[x];
             d[x] = d[x + 1]; 
             d[x + 1] = s;
          }
          x = x + 1;       
      }
      i = i + 1;    
   }      
   
   
   i = 0; 
   while ( i < n )
   {
      printf( "%ld\n", d[i] );   
      i = i + 1;
   }
   return 0;
}

