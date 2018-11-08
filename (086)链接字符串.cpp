#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);		//空格和回车都可以隔开 
	printf("%s",strcat(a,b));
	return 0;
} 
