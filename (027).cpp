#include <stdio.h>
int main()
{
    int i=5;
    void palin(int n);
    printf("Please enter 5 letters:\40:\40");		//  ¡°/40¡±ÊÇ±àÂëÎª32µÄ×Ö·û 
    palin(i);
    printf("\n");
}
void palin(int n)
{
    char next;
    if(n<=1)
	{
		next=getchar();
    	printf("Output:\40:\40");
    	putchar(next);
    } 
	else 
	{
	    next=getchar();
        palin(n-1);
        putchar(next);
    }
}
