#include<stdio.h>
char str;
int i;
void pri(char a[])
{
	int len = 0;
	for (i = 0; a[i] != '\0'; i ++)
	{
		len ++;
	}
	for (i = len; i >= 0; i --)
	{
		printf("%c",a[i]);
	}
}
int main()
{
	char a[] = "'www.runoob.com'";
	for (i = 0; a[i] != '\0'; i ++)
	{
		printf("%c",a[i]);
	}
	
	printf("\n");
	
	pri(a);
	return 0;
}
