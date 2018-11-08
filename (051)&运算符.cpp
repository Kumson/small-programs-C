#include <stdio.h>		
int main()
{
    int a,b;
    a=8;
    b=a&3;
    printf("a & b(decimal) 为 %d \n",b);
    b&=7;
    printf("a & b(decimal) 为 %d \n",b);
    return 0;
}
/*8&3即为1000&0011结果为0   <-  &运算符的规则 
