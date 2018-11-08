#include <stdio.h>
int main ()
{	
	char a[100],b[100];
	int i;
	printf ("输入要加密的单词：");
	scanf ("%s",a);		//把输入的英语单词转化成一个个字母写入数组a[100]，数组a前可以不要& 
	i = 0;
	while (a[i]!='\0')		//'\0'表示编码为0的字符，带有终止的意思，删去a[100]后面的项 
	{
		b[i] = (a[i] -97 +3) % 26 +97;		
		i ++;
	}
	b[i] = '\0';
	printf ("源码：%s\n",a);
	printf ("密码：%s\n",b);
	return 0;
}
