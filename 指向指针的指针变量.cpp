#include<stdio.h>
int main ()
{
	char * s[] = {"I","'m"," your"," father"};
	char ** p;
	int i;
	for (i = 0; i < 4; i ++)
	{
		p = &s[i];
		printf("%s",*p);
	}
	return 0;
}
