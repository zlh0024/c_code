#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test()
{
	int a=1;
	a++;
	printf("a=%d\n",a);
}
int main()
{
	int i=0;
	while(i<5)
	{
		test();
		i++;
	}
	return 0;

}
//int main()
//{
//	//register int a=10;//�����a����ɼĴ�������
//
//	return 0;
//	//struct //-�ṹ��ؼ���
//
//}