#include<stdio.h>
int main ()		
{
	int a,b,c,d,e;
	a = 1;	//赋值只能放到这？ 
	e = 0;
	while (a<=4)
	{
		b = 1;
		while (b<=4)
		{		
			if (a != b) {
				c = 1;
				while (c<=4)
				{	
					d = 1;
					while (d<=4)
					{
						if (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)	
						{
							e = a*1000+b*100+c*10+d; 
							printf 	("%d\n",e);
						}
						d++;	
					}
					c++;
				}
			}
			b++;
		}
		a++;	
	} 
return 0;	
}
