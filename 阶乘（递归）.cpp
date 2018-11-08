#include <stdio.h>
long f(int n);
main ()
{
	int i;
	printf("Enter i:");
	scanf("%d",&i);
	printf("%d! = %ld",i,f(i)); 
}
long f(int n)
{
	if (n == 0)
		return 1;
	else
		return n*f(n - 1);  
}
