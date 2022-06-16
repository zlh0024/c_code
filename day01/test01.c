#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	int arr[10]={0};

	return 0;

}

//int main()
//{
//	int a=3;
//	int b=5;
//	int* pa=&a;
//	* pa=b;
//	int* pb=&b;
//	* pb=a;
//	printf("%d%d",a,b);
//
//
//}


////#include <math.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("****1.play    0.exit*******\n");
//	printf("***************************\n")；
//}
//
//void game()
//{
//
//}
//void test01()
//{
//	int input=0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//			default:
//				printf("选择错误，请重新选择！\n");
//
//		}
//		
//
//
//
//	}whlie();
//}
//int main()
//{
//	test01();
//	return 0;
//}



//int binary_search(int arr[],int k,int sz)
//{
//	//算法的实现
//	//二分查找
//
//	int left=0;
//	int right=sz-1;
//	
//	while(left<=right)//<=注意
//	{
//		int mid=(left+right)/2;
//	    if(k<arr[mid])
//	    {
//			
//		    right=mid-1;
//
//        }
//	    else if(k>arr[mid])
//	    {
//		    left=mid+1;
//	    }
//	    else
//    	{
//		    return mid;
//       	}
//	}
//	return -1;
//
//}
//int main()
//{
//
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回下标，这个数的下标，找不到返回-1
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if(ret==-1)
//	{
//		printf("找不到指定数字\n");
//
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//
//}



//int is_lea
//
//
//int main()
//{
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		if(1==is_leap_year(year))
//		{
//			printf("%d",year);
//		}
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int j=0;
//	for(j=2;j<=n/2;j++)
//	{
//		if(n%j==0)
//		{ 
//			return 0;//函数彻底结束
//		}
//	}
//	//if(j=n/2)
//	//	return 1;
//	return 1;
//}
//
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		if(is_prime(i)==1)
//			printf("%d\n",i);
//	}
//	return 0;
//}


////猜数字游戏
////1、电脑会生成一个随机数
////2、猜数字
//int main()
//{
//	do
//	{
//		menu();
//
//	}while();
//	return 0;
//}
//


//int main()
//{
//	int i=0;
//	int j=0;
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=i;j++)
//			printf("%d*%d=%-2d ",i,j,i*j);
//		printf("\n");
//	}
//	return 0;
//}
//能被4整除且不能被100整除的为闰年
//int main()
//{
//	int i=0;
//	for(i=1000;i<=2000;i++)
//	{
//		if(i%4==0&&i%100!=0)
//		{
//			printf("输出闰年：%d\n",i);
//		
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int x=0;
//	int sum=0;
//	for(x=1;x<=100;x++)
//	{
//		if(x%3==0)
//	    {
//			printf("输出3的倍数：%d\n",x);
//			sum=sum+x;
//	    }
//
//	}
//	printf("输出3的倍数的和：%d\n",sum);
//	
//	return 0;
//}
////将三个数按从大到小输出
//float Max_Min(float x,float y,float z)
//{
//	if(x>=y)
//	{
//		if(x>=z)
//		{
//			if(y>=z)
//				printf("%f%f%f\n",x,y,z);
//			else
//				printf("%f%f%f\n",x,z,y);
//		}
//			
//		else
//			printf("%f%f%f\n",z,x,y);
//	}
//	else
//	{
//		if(x>=z)
//		    printf("%f%f%f\n",y,x,z);	
//		else
//		{
//			if(y>=z)
//				printf("%f%f%f\n",y,z,x);
//			else
//				printf("%f%f%f\n",z,y,x);
//		 }
//	}
//
//}
//
//
//int main()
//{
//	float a=0;
//	float b=0;
//	float c=0;
//	float zhi=0;
//	scanf("%f",&a,&b,&c);
//	zhi=Max_Min(a,b,c);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//    int i,n;
//    double sum=1;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//        sum=sum*i;
//    printf("%d!=%lf",n,sum);
//    printf("\n");
//    return 0;
//}
//int main()
//{
//	int m=0;
//	int put1=1;
//	for(m=1;m<4;m++)
//	{
//		
//		put1=put1*m;
//
//	}
//	printf("输出：%d\n",put1);
//	return 0;
//}




//int main()
//{
//	int x=1;
//	while(x<=100)
//	{
//		if(x%2==1)
//		{
//			printf("奇数有：%d\n",x);
//		}
//		x++;
//
//	}
//	return 0;
//}


//#include <stdio.h>
//void test()
//{
//	static int a=1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//
//}
////int main()
////{
////	//register int a=10;//建议把a定义成寄存器变量
////
////	return 0;
////	//struct //-结构体关键字
////
////}
//

////打印100~200之间的素数
////(数学上指在大于1的整数中只能被1和它本身整除的数)
//
//int main()
//{
//	int i=100;
//	while(i>=100&&i<=200)
//	{
//		int j=2;
//		while(j<2&&j<i)
//		{
//			if(i%j==0)
//			{
//			
//
//			}
//
//		
//		}
//		
//	}
	//return 0;
//}