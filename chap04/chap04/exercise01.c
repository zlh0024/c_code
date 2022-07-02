#define _CRT_SECURE_NO_WARNINGS 1

//4.4：有3个整数a,b,c,由键盘输入，输出其中最大值
//#include<stdio.h>
//int main()
//{
//	int a,b,c,max;
//	printf("输入3个整数a,b,c分别为：\n");
//	scanf("%d%d%d",&a,&b,&c);
//	max=(a>b)?a:b;
//	max=(max>c)?max:c;
//	printf("输出最大值为：%d\n",max);
//	return 0;
//}

//4.5：从键盘输入一个小于1000的正数，要求输出它的平方根
//如平方根不是整数，则输出其整数部分
//要求在输出数据后对其进行检查是否为小于1000的正数
//若不是，则要求重新输入
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x;
//	int sqrt_x;
//	printf("输入一个小于1000的正数：\n");
//	scanf("%f",&x);
//	
//	if(x>0&&x<1000)
//	{
//		sqrt_x=(int)sqrt(x);
//		printf("%f为小于1000的正数\n",x);
//		printf("%f的平方根的整数部分：%d\n",x,sqrt_x);
//	}
//	else
//	{
//		printf("重新输入！\n");
//	}
//	return 0;
//}
//更改1：
//#include<stdio.h>
//#include<math.h>
//#define M 1000
//int main()
//{
//	float x;
//	int sqrt_x;
//	printf("请输入一个小于%d的正数x：",M);
//	scanf("%f",&x);
//	
//	if(x>M)
//	{
//		printf("输入的数据不符合要求，请重新输入一个小于%d的正数x：",M);
//		scanf("%f",&x);
//	}
//	sqrt_x=(int)sqrt(x);
//	printf("%f的平方根的整数部分：%d\n",x,sqrt_x);
//	return 0;
//}
//更改2
//#include<stdio.h>
//#include<math.h>
//#define M 1000
//int main()
//{
//	float x;
//	int sqrt_x;
//	printf("请输入一个小于%d的正数x：",M);
//	scanf("%f",&x);
//	while(x>=M)
//	{
//		printf("输入的数据不符合要求，请重新输入一个小于%d的正数x：",M);
//		scanf("%f",&x);
//	}
//	sqrt_x=(int)sqrt(x);
//	printf("%f的平方根的整数部分：%d\n",x,sqrt_x);
//	return 0;
//}

//4.6：有一个函数：
//y=x       x<1
//y=2x-1    1<=x<10
//y=3x-11   x>=10
//写程序，输入x的值，输出相应y的值
//#include<stdio.h>
//int main()
//{
//	double x,y;
//	printf("输入x:");
//	scanf("%lf",&x);
//	if(x<1)
//	{
//		y=x;
//	}
//	else if(x<10)
//	{
//		y=2*x-1;
//	}
//	else
//	{
//		y=3*x-11;
//	}
//	printf("输出y:%.2f\n",y);
//	return 0;
//}

//4.8：给出100分制成绩，要求输出成绩等级'A','B','C','D','E'
//90分以上  'A'
//80~89     'B'
//70~79     'C'
//60~69     'D'
//60分以下  'E'
//#include<stdio.h>
//int main()
//{
//	double grade;
//	printf("输入成绩：");
//	scanf("%lf",&grade);
//	if(grade<0||grade>100)
//		printf("输入成绩非法，请重新输入！\n");
//	else
//	{
//		if(grade>=90)
//			printf("输出成绩等级'A'\n");
//		else if(grade>=80)
//			printf("输出成绩等级'B'\n");
//		else if(grade>=70)
//			printf("输出成绩等级'C'\n");
//		else if(grade>=60)
//			printf("输出成绩等级'C'\n");
//		else
//			printf("输出成绩等级'E'\n");
//		}
//	return 0;
//}

//改进1：
//


//4.9：给一个不多于5位的正整数，要求：
//求出它是几位数
//分别输出每一位数字
//按逆序输出各位数字，例如原数为321，应输出123
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count(int);
//	void print_num_for(int,int);
//	void print_num_back(int);
//	int a,n;
//	printf("输入一个不多于5位的正整数a:");
//	scanf("%d",&a);
//	//a%10      个位
//	//a/10%10   十位
//	//a/100%10  百位
//    n=count(a);
//	print_num_for(a,n);
//	print_num_back(a);
//	return 0;
//}
//int count(int x)
//{
//	int n=0;
//	while(x!=0)
//	{
//		x=x/10;
//		n++;
//	}
//	printf("它是%d位数\n",n);
//	return n;
//}
//void print_num_for(int x,int n)
//{
//	int x1,m;
//	printf("分别输出每一位数字：");
//	while(n>=1)
//	{
//		m=pow((float)10,n-1);
//		x1=x/m;
//		x=x-x1*m;
//		n--;
//		printf("%d  ",x1);
//	}
//}
//void print_num_back(int x)
//{
//	int x1;
//	printf("\n按逆序输出每一位数字：");
//	while(x!=0)
//	{
//		x1=x%10;
//		x=x/10;
//		printf("%d  ",x1);
//	}
//}