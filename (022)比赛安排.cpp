#include <stdio.h>
int main()
{
	char i,j,k;
	for (i = 'x'; i <= 'z'; i ++)		//��ٵ�˼· 
	{
		for (j = 'x'; j <= 'z'; j ++)
		{
			for (k = 'x'; k <= 'z'; k ++)
			{
				if (i != 'x' && k != 'x' && k != 'z')
				{
					if (i != j&& i != k && j != k)		//ע��i,j,k���໹������� 
					printf ("a -- %c , b -- %c , c -- %c\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
