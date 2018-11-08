#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[20];
    char sex[5];
    int  age;
}Stu;
void input(Stu*stu);
void output(Stu*stu);
int main()
{
    Stu stu[5];		//结构体变量和结构体指针是不一样的，这里使用结构体变量即可 
    printf("输入5个学生的姓名、性别和年龄:\n");
    input(stu);
    printf("5个学生的信息:\n姓名  性别  年龄\n");
    output(stu);
    
    system("pause");
    return 0;
}
void input(Stu*stu)
{
    int i;
    for(i=0;i<5;i++)
        scanf("%s%s%d",stu[i].name,stu[i].sex,&(stu[i].age));
        /*结构体变量不能用 “->” 访问其中的元素*/
}
void output(Stu*stu)
{
    int i;
    for(i=0;i<5;i++)
        printf("%s %s %d\n",stu[i].name,stu[i].sex,stu[i].age);
}
