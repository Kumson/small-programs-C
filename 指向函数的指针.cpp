#include<stdio.h>

int right(int k)
{
	return (100);
}

int wrong(int k)
{
	return (60);
}

int main ()
{
	int (*chc)(int);
	int x;
	printf("Enter your choice:");
	scanf("%d",&x);
	int opt;
	
	if (x == 1)
		chc = right;
	else 
		chc = wrong;
		
	opt = (*chc)(x);
	
	printf("%d",opt);
	
	return 0;		
} 
