#include<stdio.h>
int main()
{
    char c;
    while((c = getchar()) != '\n')		//注意运算符的意义和顺序 
    {
    	printf ("%c",c);
    }
    return 0;
}
