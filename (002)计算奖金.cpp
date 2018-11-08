#include<stdio.h>
int main()
{
	int x;
	double  p,b1,b2,b3,b4,b5,s;		//p为总利润,b是各阶段奖金,s为总奖金,x为特征值 
	b1 = 10 * 0.1;
	b2 = b1 + 10 * 0.075;
	b3 = b2 + 20 * 0.05;
	b4 = b3 + 20 * 0.03;
	b5 = b4 + 40 * 0.015;	//重叠套用的数据通过公式事先算出来，编程中直接使用结果节省时间 
	x = 0;		
	printf ("总利润为(单位：万元）：");
	scanf ("%lf",&p); 		//*不能总是忘了"&"(会导致停止运行）	double型数据 scanf和printf时使用%lf 
	if (p<0)
	{
		x = 1; 
	}
	else if (p<=10)
	{
		s = p * 0.1;
	}
	else if (p<=20)
	{
		s = b1 + (p - 10) * 0.075;
	}
	else if (p<=40)
	{
		s = b2 + (p-20) * 0.05;
	} 
	else if (p<=60)
	{
		s = b3 + (p-40) * 0.03;
	}
	else if (p<=100)
	{
		s = b4 + (p-60) * 0.015;
	}
	else if (p>100)		//else if 可以直接封闭所有可能 
	{
		s = b5 + (p-100) *0.01;
	}
	/*这里是if函数的出口*/ 
	switch (x)		//switch () ←只能是int型或者字符型 
	{
		case 1:		//case后直接跟值，int型不要引号，记着冒号 
		printf ("错误：输入值为负数");
		break;  
		case 0:
		printf ("奖金总数为：%lf(万元)",s);
		break;		//default不是必须的 
	}
	return 0; 
}

