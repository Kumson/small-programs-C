#include<stdio.h>

int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            if((i+j)%2==0)		//这种判断效率很高! 
                printf("%c",219);		//以字符形式输出219号字符 
            else printf("  ");
        printf("\n");
    }
    return 0;
}
