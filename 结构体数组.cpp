#include<stdio.h>
struct Student
	{
		int num;
		char name[20];
		float score;
	};

int main()
{
	struct Student stu[5] = {
							{10101,"Zhang",78},
							{10102,"Wang",98.5},
							{10106,"Li",86},
							{10108,"Ling",73.5},
							{10110,"Sun",100}
							};
	struct Student bot;
	#define sum 5
	int i,j,key;
	
	for(i = 0; i < sum - 1; i ++)
	{
		key = i;
		for (j = 0; j < sum; j ++)
		{
			if (stu[j].score > stu[key].score)		/***/
			{
				key = j;
				bot = stu[key];
				stu[key] = stu[i];
				stu[i] = bot;
			}
		}
	}
	
	for (i = 0; i < sum; i ++)
	{
		printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
	}						
	return 0;
}	
