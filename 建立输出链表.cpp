#include<stdio.h>
#include<malloc.h>
struct node
{
int a;
struct node * next;
};
#define LEN sizeof(struct node)

int main()
{
	int i;
	struct node * p1,* p2, * head;
	p1 = p2 = (struct node *)malloc(LEN); 
	head = NULL;
	
	for (i = 0; i < 10; i ++)
	{
		if (i == 0)
		{
			head = p2;
			p2 -> a = i;
			p1 = (struct node *)malloc(LEN); 
			p2 -> next = p1;	
		}
		else
		{
			p2 = p1;
			p1 = (struct node *)malloc(LEN); 
			p2 -> a = i;
			p2 -> next = p1;
		}
	}
	p2 -> next = NULL; 
	
	struct node * p;
	p = head;
	while (p != NULL)
	{
		printf("%d ",p -> a);
		p = p -> next;
	}
	
	return 0;
} 
