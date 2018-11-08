#include<stdio.h>
int main()
{
	char a[1000],x;
	int sum,i,j;
	printf("Enter the string(press enter to stop):\n");
	for(i = 0; i < 1000; i ++)
	{
		scanf("%c",&a[i]);
		if (a[i] == '\n')
		{
			a[i] = '\0';
			break;
		}
	}
	
	printf("Enter the letter you want to delete:");
	
	scanf("%c",&x);
	
	for(i = 0; a[i] != '\0'; i ++)
	{
		if (a[i] == x)
		{
			for (j = i; a[j] != '\0'; j ++)
			{
				a[j] = a[j + 1];
			}
			i --;		//修改了各元素位置，还要让指针回到位置 
		}
	}
	for(i = 0; a[i] != '\0'; i ++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
