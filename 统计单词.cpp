#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct node
{
	char word[50];
	int sum;
	int lens;
	struct node * next; 
};
#define LEN sizeof(struct node)

int getword(char word[])
{
	int i,k = 0;
	word[0] = getchar();
	
	while(word[0] == ' ')
	{
		word[0] = getchar();
	}
	if(word[0] == '*')
	{
		k = -1;
	}
	
	for (i = 1; i < 50; i ++)
	{
		word[i] = getchar();
		if (word [i] == ' ')
		{
			word[i] = '\0';
			break;
		}
		else if (word [i] == '*')
		{
			word[i] = '\0';
			k = -1;
			break;
		}
	}
	return (k);
}

struct node * search_list(struct node * head,char word[])
{
	struct node * p;
	p = head;
	while (p != NULL)
	{
		if (strcmp(word,p -> word) == 0)
		{
			break;
		}
		
		p = p -> next;
	}
	return p;
}

struct node * add_node(struct node * head,char word[])
{
	struct node * p;
	p = (struct node *)malloc(LEN);
	strcpy(p -> word,word);
	p -> next = head;
	p -> sum = 1;
	return (p);
}

void prt(struct node  * head)
{
	int i;
	struct node * p;
	p = head;
	printf("Statistics:\n");
	while (p != NULL)
	{
		printf("%s",p -> word);
		printf(" %d\n",p -> sum);
		p = p -> next;
	}
}

int main()
{
	struct node * p,* head;
	char word[50];
	head = NULL;
	int k;
	
	while ((k = getword(word)) != -1)
	{
		p = search_list(head,word);
		if (p != NULL)
		{
			p -> sum ++;
		}
		else
		{
			head = add_node(head,word);
		}
	}
	
	prt(head);
	
	return 0;
}
