#define _CRT_SECURE_NO_WARNINGS 1

//习题1.4：编写一个C程序，运行时输出
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



//习题1.5：编写一个C程序，运行时输出
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


//习题1.6：编写一个C程序，输入a,b,c三个值，输出其中最大值
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