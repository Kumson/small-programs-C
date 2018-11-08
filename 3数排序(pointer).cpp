#include<stdio.h>
void change(int *pt1,int *pt2)
{
	int b;
	b = *pt1;	/***/
	*pt1 = *pt2;
	*pt2 = b;
} 
void sort(int *p1,int *p2, int *p3)
{
	if(*p1<*p2)
		change(p1,p2);	/***/
	if(*p1<*p3)
		change(p1,p3);
	if(*p2<*p3)
		change(p2,p3);		
}
int main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	p1 = &a;	/***/
	p2 = &b;
	p3 = &c;
	sort(p1,p2,p3);
	printf("%d %d %d",*p1,*p2,*p3);
	return 0;
}
