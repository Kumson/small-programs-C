#include<stdio.h>
int main ()
{
	char a[1000];
	int i, num = 0, word = 0;
	char c;
	gets(a);
	for(i = 0; a[i] != '\0'; i ++)
	{
		if (a[i] == ' ')
		{
			word = 0;
		}
		else if(word == 0)
		{
			word = 1;
			num ++;
		}
	}
	printf("%d",num);
	return 0; 
} 
