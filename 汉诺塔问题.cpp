#include<stdio.h>
int sum,step = 0;
char one, two, three; 
int main()
{
	void hanoi(int sum, char one, char two, char three);
	
	printf("Enter the sum of diskes:");
	scanf("%d",&sum);
	hanoi(sum, 'A', 'B', 'C');
	printf("Used %d steps",step);
	return 0;
} 
void hanoi(int sum, char one, char two, char three)
{
	void move(char x, char y);
	if (sum == 1)
	{
		move(one, three);
	}
	else
	{
		hanoi(sum - 1, one, three, two);
		move(one, three);
		hanoi(sum - 1, two, one, three);
	}
}
void move(char x, char y)
{
	printf("%c-->%c\n",x,y);
	step ++;
}
