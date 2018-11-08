#include <stdio.h>
int month,b,last,now,next;
int main ()
{
	month = 2;
	last = 1;
	now = 1;
	printf ("1		1\n");
	while (month <= 40)
	{
		next = last + now;
		printf ("%d		%d\n",month,now);
		month ++;
		b = now; 
		now = next;
		last = b;
	}
	return 0;
} 
