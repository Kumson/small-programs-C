#include <stdio.h>
int i,j,s;
int main ()
{
	s = 51;		//Ô¤Éè½×ÌÝ½×Êý 
	printf("\1\1\n");
	for (i = 2; i <= s; i ++)
	{
		for (j = 1; j <= i; j ++)
		{
			printf("%c",219);
		}
		printf ("\n");
	}
	return 0;
} 
