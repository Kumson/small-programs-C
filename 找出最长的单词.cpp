#include<stdio.h>
int main()
{
	char a[] = {"Three Expedition 55 crew members are back to work today on the International Space Station"};
	int head,tail,i,j,lens,max;
	lens = 0;
	max = 0;
	
	for(i = 0; a[i] != '\0'; i ++)
	{
		if (a[i] != ' ')
		{
			j = i;
			head = i;
			while(a[j] != ' ' && a[j] != '\0')
			{
				j ++;
			}
			lens = j - head;
			if (lens >= max)
			{
				tail = j - 1;
				max = lens;
			}
			i = j;
		}
	}
	
	for (i = tail - max + 1; i <= tail ;i ++)
	{
		printf("%c",a[i]);
	}
}
