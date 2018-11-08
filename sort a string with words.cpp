#include<stdio.h>
#include<string.h>
void exchange(char * x,char * y)
{
	char * bot;
	strcpy(bot,x);
	strcpy(x,y);
	strcpy(y,bot);	
}

int main()
{
	char a[100] = {"I'm"};
	char b[100] = {"your"};
	char c[100] = {"father"};
	char bot[100];
	printf("%s %s %s.\n",a,b,c);
	
	if (strcmp(a,b) > 0)
		{
			strcpy(bot,a);
			strcpy(a,b);
			strcpy(b,bot);
		}
	if (strcmp(a,c) > 0)
		{
			strcpy(bot,a);
			strcpy(a,c);
			strcpy(c,bot);
		}
	if (strcmp(b,c) > 0)
		{
			strcpy(bot,b);
			strcpy(b,c);
			strcpy(c,bot);
		}
	
	printf("%s %s %s.\n",a,b,c);
	
	return 0;			
} 
