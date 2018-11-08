#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c;
	float d,s;
	float x1,x2;
	
	scanf("%f%f%f",&a,&b,&c);
	d = b * b - 4 * a * c;
	
	if (fabs(a) <= 1e-6)
	{
		printf("The equation is not quadratic.");
	}
	else if (d > 1e-6)
	{
		s = sqrt(d);
		x1 = ( -b + s ) / (2*a);
		x2 = ( -b - s ) / (2*a);
		printf("The equation has two distinct real roots: %.4f and %.4f.",x1,x2);
	}
	else if(fabs(d) <= 1e-6)
	{
		x1 = -b / (2*a);
		printf("The equation has two equal roots: %.4f.",x1);
	}
	else
	{
		s = sqrt(-d) / (2 * a);
		x1 = -b / (2*a);
		printf("The equation has two complex roots: %.4f+%.4fi and %.4f-%.4fi.",x1,s,x1,s);
	}
	
	return 0;
} 
