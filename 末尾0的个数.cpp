#include<stdio.h>
int main()
{
	int num,key,t,f;
	int i;
	t = 0;
	f = 0;
	
	for(scanf("%d",&num); num != 0; scanf("%d",&num))
	{
		key = num;
		while(key % 2 == 0)
		{
			t ++;
			key = key / 2;
		}
		while (key % 5 == 0)
		{
			f ++;
			key = key / 5;
		}
	}
	
	if (t <= f)
		printf("%d",t);
	else 
		printf("%d",f);
	
	return 0;		
}
