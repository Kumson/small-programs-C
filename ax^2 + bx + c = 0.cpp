#include<stdio.h>
#include<math.h>

int check(float a,float b,float c)
{
	int k;
	float del;
	del = b * b - 4 * a * c;
	if (del > 0)
	{
		return (1);
	} 
	else if (del == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

int main()
{
	float x1,x2,a,b,c,del;
	int k;
	printf("ax^2 + bx + c = 0 :\n");
	printf("a = ");
	scanf("%f",&a);
	printf("\n");
	printf("b = ");
	scanf("%f",&b);
	printf("\n");
	printf("c = ");
	scanf("%f",&c);
	printf("\n");
	
	k = check(a,b,c);
	del = b * b - 4 * a * c;
	
	switch (k)
	{
		case 1:
			x1 = (- b + sqrt(del)) / (2.0 * a) ;
			x2 = (- b - sqrt(del)) / (2.0 * a);
			printf("x1 = %g\n",x1);
			printf("x2 = %g",x2);
			break;
		case 0:
			x1 = (-b) / (2.0 * a);
			x2 = x1;
			printf("x1 = x2 = %g\n",x1);
			break;
		case -1:
			printf("Error");
		default:
			break;		
	}
	
	return 0;
} 
