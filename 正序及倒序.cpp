#include<stdio.h>
#include<malloc.h>
struct node
{
int a;
struct node * next;
};
#define LEN sizeof(struct node)

struct node * create_list(int n)
{
	struct node *p1,*p2,*head;
	int i;
	p1 = p2 = (struct node *)malloc(LEN);//这两句话不要忘了，必须先指p1,p2指向的位置，head的赋值才有意义 
	head = NULL;
	
	for (i = 0; i < n; i ++)
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
	return (head);
} 

struct node * prt(struct node * head)
{
	struct node * p;
	p = head;
	while (p != NULL)
	{
		printf("%d ",p -> a);
		p = p -> next;
	}
}

struct node * overturn(struct node * head)
{
	struct node * add[100];
	struct node * p;
	struct node * head_new;
	p = head;
	int i;
	for (i = 0; p != NULL; i ++)
	{
		add[i] = p;
		p = p -> next;
	}
	head_new = add[i - 1];
	p = head_new;
	for (i = i - 1; i > 0; i --)
	{
		p -> next = add[i - 1];
		p = add[i - 1];
	}
	p -> next = NULL;
	return (head_new);
} 

int main()
{
	int i;
	struct node * p1,* p2, * head,* head_new;
	p1 = p2 = (struct node *)malloc(LEN); 
	head = NULL;
	int n = 10;
	
	head = create_list(n);
	
	prt(head);
	
	head_new = overturn (head);
	
	printf("\n");
	
	prt(head_new);
	
	return 0;
} 
