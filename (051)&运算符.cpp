#include <stdio.h>		
int main()
{
    int a,b;
    a=8;
    b=a&3;
    printf("a & b(decimal) Ϊ %d \n",b);
    b&=7;
    printf("a & b(decimal) Ϊ %d \n",b);
    return 0;
}
/*8&3��Ϊ1000&0011���Ϊ0   <-  &������Ĺ��� 
