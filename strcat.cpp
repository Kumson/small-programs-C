#include<stdio.h>
#include<string.h>
int main()
{
	char a[40] = {"kajshdfjhhhh"};
	char b[20] = {"xxxxxx"};
	strcat(a,b);
	printf("%s",a);
	return 0; 
} 
