#define _CRT_SECURE_NO_WARNINGS 1

//例2.1：求1*2*3*4*5=120
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	int ret=1;
//	for(i=1;i<=5;i++)
//	{
//		ret=ret*i;
//	}
//	printf("输出:%d!=%d\n",i-1,ret);
//	return 0;
//}

//求1*3*5*7*9*11
#include<stdio.h>
int main()
{
	int i=1;
	int ret=1;
	for(i=1;i<=11;i+=2)
	{
		ret=ret*i;
	}
	printf("输出:1*3*5*...*%d=%d\n",i-2,ret);
	return 0;
}


//例2.2：有50个学生，要求输出成绩在80分以上的学生的学号和成绩

