#define _CRT_SECURE_NO_WARNINGS 1

//��2.1����1*2*3*4*5=120
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	int ret=1;
//	for(i=1;i<=5;i++)
//	{
//		ret=ret*i;
//	}
//	printf("���:%d!=%d\n",i-1,ret);
//	return 0;
//}

//��1*3*5*7*9*11
#include<stdio.h>
int main()
{
	int i=1;
	int ret=1;
	for(i=1;i<=11;i+=2)
	{
		ret=ret*i;
	}
	printf("���:1*3*5*...*%d=%d\n",i-2,ret);
	return 0;
}


//��2.2����50��ѧ����Ҫ������ɼ���80�����ϵ�ѧ����ѧ�źͳɼ�

