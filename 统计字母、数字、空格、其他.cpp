#include<stdio.h>
void sta(char str[],int * p)
{
	int i; 
	for (i = 0; str[i] != '\0'; i ++)		//不存在 a <= b <= c的判断 
	{
		if (('a'  <= str[i]&& str[i] <= 'z') || ('A'  <= str[i]&& str[i] <= 'Z'))
			(*(p))++;
		else if ('0' <= str[i] && str[i] <= '9')	
			(*(p + 1)) ++;		//取值运算符 * 优先级与自加运算符 ++ 相同，从右向左结合 
		else if(str[i] == ' ')
			(*(p + 2)) ++;
		else
			(*(p + 3)) ++;	
				
	}
}

int main()
{
	char a[1000];
	int i,data[4];
	for (i = 0; i < 1000; i ++)
	{
		a[i] = getchar();
		if (a[i] == '*')
		{
			a[i] = '\0';
			break;
		}
	}
	
	for (i = 0; i < 4; i ++)
	{
		data[i] = 0;
	}
	 
	sta(a,data);
	
	i = 0;
	printf("letters : %d\n",data[0]);
	printf("numbers : %d\n",data[1]);
	printf("spaces : %d\n",data[2]);
	printf("others : %d",data[3]);

	
	return 0;
}
