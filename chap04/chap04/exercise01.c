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


//4.10：企业发放的奖金根据利润提成
//利润I
//        I<=100 000   0.1
//100 000<I<=200 000   0.075
//200 000<I<=400 000   0.05
//400 000<I<=600 000   0.03
//600 000<I<=1 000 000 0.015
//        I>1 000 000  0.01
//奖金总数m(money)
//利润p(profit)
//p=I/100000.0;
//（1）使用if语句
//#include<stdio.h>
//int main()
//{
//	double I,p,m;
//	printf("请输入利润：");
//	scanf("%lf",&I);
//	p=I/100000.0;
//	if(p<=1)
//		m=I*0.1;
//	else if(p<=2)
//		m=100000*0.1+(I-100000)*0.075;
//	else if(p<=4)
//		m=100000*0.1+100000*0.075+(I-200000)*0.05;
//	else if(p<=6)
//		m=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;
//	else if(p<=10)
//		m=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;
//	else
//		m=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;
//	printf("应发奖金总数：%.2f\n",m);
//	return 0;
//}

//更改1：
//#include<stdio.h>
//int main()
//{
//	double I,p,m,bon1,bon2,bon4,bon6,bon10;
//	printf("请输入利润：");
//	scanf("%lf",&I);
//	p=I/100000.0;
//	bon1=100000*0.1;
//	bon2=bon1+100000*0.075;
//	bon4=bon2+200000*0.05;
//	bon6=bon4+200000*0.03;
//	bon10=bon6+400000*0.015;
//	if(p<=1)
//		m=I*0.1;
//	else if(p<=2)
//		m=bon1+(I-100000)*0.075;
//	else if(p<=4)
//		m=bon2+(I-200000)*0.05;
//	else if(p<=6)
//		m=bon4+(I-400000)*0.03;
//	else if(p<=10)
//		m=bon6+(I-600000)*0.015;
//	else
//		m=bon10+(I-1000000)*0.01;
//	printf("应发奖金总数：%.2f\n",m);
//	return 0;
//}

//（2）switch语句
//#include<stdio.h>
//int main()
//{
//	double I,m,bon1,bon2,bon4,bon6,bon10;
//	int p;
//	printf("请输入利润：");
//	scanf("%lf",&I);
//	p=(int)I/100000.0;
//	bon1=100000*0.1;
//	bon2=bon1+100000*0.075;
//	bon4=bon2+200000*0.05;
//	bon6=bon4+200000*0.03;
//	bon10=bon6+400000*0.015;
//	if(p>10)
//		p=10;
//	switch(p)
//	{
//	case 0:
//		m=I*0.1;
//		break;
//	case 1:
//		m=bon1+(I-100000)*0.075;
//		break;
//	case 2:
//	case 3:
//		m=bon2+(I-200000)*0.05;
//		break;
//	case 4:
//	case 5:
//		m=bon4+(I-400000)*0.03;
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		m=bon6+(I-600000)*0.015;
//		break;
//	case 10:
//		m=bon10+(I-1000000)*0.01;
//	}
//	printf("应发奖金总数：%.2f\n",m);
//	return 0;
//}

//4.11：输入4个整数，要求由小到大的顺序输出
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,tep;
//	printf("请输入4个整数：");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	if(a>b)
//	{
//		//交换a,b
//		tep=a;
//		a=b;
//		b=tep;
//	}//此时a<b
//	if(a>c)
//	{
//		//交换a,c
//		tep=a;
//		a=c;
//		c=tep;
//	}//此时a<c
//	if(a>d)
//	{
//		//交换a,d
//		tep=a;
//		a=d;
//		d=tep;
//	}//此时a<d
//	if(b>c)
//	{
//		//交换b,c
//		tep=b;
//		b=c;
//		c=tep;
//	}//此时b<c
//	if(b>d)
//	{
//		//交换b,d
//		tep=b;
//		b=d;
//		d=tep;
//	}//此时b<d
//	if(c>d)
//	{
//		//交换c,d
//		tep=c;
//		c=d;
//		d=tep;
//	}//此时c<d
//	printf("由小到大循序输出为：%d  %d  %d  %d\n",a,b,c,d);
//	return 0;
//}

//4.12：有4个圆塔
//圆心分别为（2，2）（-2，2）（-2，-2）（2，-2）
//圆半径为1
//这4个塔的高度为10m,塔以外无建筑物
//今输入任意点坐标，求该点的建筑高度
//(x,y)到（2，2）（-2，2）（-2，-2）（2，-2）的距离>1   高度为0
//(x,y)到（2，2）（-2，2）（-2，-2）（2，-2）的距离<=1  高度为10
//#include<stdio.h>
//int main()
//{
//	
//    double d_2(double,double,double,double);
//	double x,y,d1,d2,d3,d4;
//	printf("输入一点坐标：");
//	scanf("%lf%lf",&x,&y);
//	printf("x=%.2f,y=%.2f\n",x,y);
//	d1=d_2(x,y,2,2);
//	d2=d_2(x,y,-2,2);
//	d3=d_2(x,y,2,-2);
//	d4=d_2(x,y,-2,-2);
//	if(d1>1&&d2>1&&d3>1&&d4>1)
//		printf("该点的建筑高度为0\n");
//	else
//		printf("该点的建筑高度为10\n");
//	return 0;
//}
//
//double d_2(double x,double y,double a,double b)
//{
//	return (x-a)*(x-a)+(x-b)*(a-b);
//}

//#include<stdio.h>
//int main()
//{
//	
//    double d_2(double,double,double,double);
//	double x,y,d1,d2,d3,d4;
//	int h=10;
//	printf("输入一点坐标(x,y)：");
//	scanf("%lf%lf",&x,&y);
//	printf("x=%.2f,y=%.2f\n",x,y);
//	d1=d_2(x,y,2,2);
//	d2=d_2(x,y,-2,2);
//	d3=d_2(x,y,2,-2);
//	d4=d_2(x,y,-2,-2);
//	if(d1>1&&d2>1&&d3>1&&d4>1)
//		h=0;
//	printf("该点的建筑高度为%d\n",h);
//	return 0;
//}
//
//double d_2(double x,double y,double a,double b)
//{
//	return (x-a)*(x-a)+(x-b)*(a-b);
//}