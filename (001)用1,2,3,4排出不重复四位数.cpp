#include<stdio.h>
int main () 
{
	int a,b,c,d,e;
	for(a = 1;a < 5;a++)
	for(b = 1;b < 5;b++)
	for(c = 1;c < 5;c++)
	for(d = 1;d < 5;d++)
	{
		if (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)	
		{
			e = a*1000+b*100+c*10+d; 
			printf 	("%d\n",e);
		}
	} 
return 0;	
}
