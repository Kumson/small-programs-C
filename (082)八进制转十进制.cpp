#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0,i=0;
    char s[20];
    printf("Enter an octal number:\n");
    gets(s);
    while(s[i]!='\0'){
        n=n*8+s[i]-'0';		// <- Á½¸öÁÁµã(*) 
        i++;
    }
    printf("Printed in decimalism :\n%d\n",n);
    
    return 0;
}
