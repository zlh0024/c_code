#define _CRT_SECURE_NO_WARNINGS 1

//ϰ��1.4����дһ��C��������ʱ���
//        ***************
//          Hello World!
//        ***************
//#include<stdio.h>
//int main()
//{
//
//	printf("****************\n\n");
//	printf("  Hello World!\n\n");
//	printf("****************\n");
//	return 0;
//}



//ϰ��1.5����дһ��C��������ʱ���
//*****
// *****    
//   *****
//     *****
//#include<stdio.h>
//int main()
//{
//
//	printf("*****\n");
//	printf(" *****\n");
//	printf("  *****\n");
//	printf("   *****\n");
//	return 0;
//}


//ϰ��1.6����дһ��C��������a,b,c����ֵ������������ֵ
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("please input a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	max=a;
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("The largest number is %d\n",max);
	return 0;
}