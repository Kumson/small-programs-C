#include<stdio.h>
int main()
{
	char a;
	short b;
	int c;
	long d;
	long long e;
	float f;
	double g;
	int store[10];
	int i;
	i = 0;
	
	scanf("%c",&a);
	store[i] = sizeof(a);
	i ++;
	
	scanf("%hd",&b);
	store[i] = sizeof(b);
	i ++;
	
	scanf("%d",&c);
	store[i] = sizeof(c);
	i ++;
	
	scanf("%ld",&d);
	store[i] = sizeof(d);
	i ++;
	
	scanf("%lld",&e);
	store[i] = sizeof(e);
	i ++;
	
	scanf("%f",&f);
	store[i] = sizeof(f);
	i ++;
	
	scanf("%lf",&g);
	store[i] = sizeof(g);
	i ++;
	
	i = 0;
	
	printf("The result is:\n");
	printf("The 'char' variable is %c, it takes %d byte.\n",a,store[i]);
	i ++;
	printf("The 'short' variable is %hd, it takes %d bytes.\n",b,store[i]);
	i ++;
	printf("The 'int' variable is %d, it takes %d bytes.\n",c,store[i]);
	i ++;
	printf("The 'long' variable is %ld, it takes 4 bytes.\n",d);
	i ++;
	printf("The 'long long' variable is %lld, it takes %d bytes.\n",e,store[i]);
	i ++;
	printf("The 'float' variable is %f, it takes %d bytes.\n",f,store[i]);
	i ++;
	printf("The 'double' variable is %lf, it takes %d bytes.",g,store[i]);
	return 0;
} 
