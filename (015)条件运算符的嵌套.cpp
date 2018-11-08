#include <stdio.h>
int main() 
{
	int score;
	char grade;
	printf ("Please input your score:");
	scanf ("%d",&score);
	grade = (score>=90)?'A':((score>=60)?'B':'C');
	printf ("Your grade is: %c",grade);
	return 0;
} 
