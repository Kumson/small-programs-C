#include<stdio.h>
int main()
{
	char i,c;
	printf("Enter the first letter:");
	scanf("%c",&i);
	getchar();		/*scanf("%c",&j);的问题，
	****			第二次是读入的一个换行符，
	****			而不是输入的字符，
	****			因此需要加一个getchar() 吃掉换行符*/
	switch (i)
	{
		case 'm':
		case 'M':
			printf("Monday");
			break;
		case 't':
		case 'T':
			printf("Enter the next letter:");
			scanf("%c",&c);
			if (c == 'u')
				printf("Tuesday");
			else if(c == 'h')
				printf("Thursday");
			else
				printf("Error");
			break;	
		case 'w':
		case 'W':
			printf("Wednesday");
			break;
		case 'f':
		case 'F':
			printf("Friday");
			break;
		case 's':
		case 'S':
			printf("Enter the next letter:");
			scanf("%c",&c);
			if (c == 'a')
				printf("Saturday");
			else if(c == 'u')
				printf("Sunday");
			else
				printf("Error");
			break;	
		default:
			printf("Error");
			break;								
	}
	return 0;
}
