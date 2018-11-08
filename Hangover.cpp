#include<stdio.h>
float a[1000],l,s;
int i,max,num,m;
int main()
{
	i = 1;
	scanf("%f",&a[0]); 
	while (a[i - 1] != 0)
	{
		scanf ("%f",&a[i]);
		i ++;
	}
	max = i - 1;
	for (i = 0; i < max; i ++)
	{
		l = a[i];
		s = 0.5;
		num = 1;
		for (m = 3;s < l; m ++)
		{
			s = s + 1.0 / m;
			num ++;
		}
		printf("%d card(s)\n",num);
	}
	return 0;
} 
