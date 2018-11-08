#include <stdio.h>
int main()
{
	char i,j,k;
	for (i = 'x'; i <= 'z'; i ++)		//穷举的思路 
	{
		for (j = 'x'; j <= 'z'; j ++)
		{
			for (k = 'x'; k <= 'z'; k ++)
			{
				if (i != 'x' && k != 'x' && k != 'z')
				{
					if (i != j&& i != k && j != k)		//注意i,j,k互相还不能相等 
					printf ("a -- %c , b -- %c , c -- %c\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
