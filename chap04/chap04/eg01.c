#define _CRT_SECURE_NO_WARNINGS 1

//例4.1：求解得ax^2+bx+c=0方程的根
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a,b,c,disc,x1,x2;
//	printf("请输入a、b、c分别为：");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	disc=b*b-4*a*c;
//	if(disc>=0)
//	{
//		x1=(-b+sqrt(disc))/(2*a);
//		x2=(-b-sqrt(disc))/(2*a);
//		printf("x1=%7.2f\nx2=%7.2f",x1,x2);
//	}
//	else
//	{
//		printf("此方程无实根");
//	}
//	return 0;
//}


//例4.2：输入两个实数，按从小到大的顺序输出这两个数
//#include<stdio.h>
//int main()
//{
//	double a,b,c;
//	printf("输入两个实数：");
//	scanf("%lf%lf",&a,&b);
//	if(b<a)
//	{
//		c=b;
//		b=a;
//		a=c;
//	}
//	printf("从小到大输出为：%.3f  %.3f\n",a,b);
//	return 0;
//}


//例4.3：输入三个数a,b,c，要求由小到大排序
//#include<stdio.h>
//int main()
//{
//	double a,b,c,tep;
//	printf("请输入三个数：");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	if(a>b)
//	{
//		//交换a,b
//		tep=a;
//		a=b;
//		b=tep;
//	}
//	//此时a<b
//	if(a>c)
//	{
//		//交换a,c
//		tep=a;
//		a=c;
//		c=tep;
//	}
//	if(b>c)
//	{
//		//交换b,c
//		tep=b;
//		b=c;
//		c=tep;
//	}
//	//此时b<c
//	printf("由小到大排序为：%.3f %.3f %.3f\n",a,b,c);
//	return 0;
//}

//例4.4：输入一个字符判断它是否为大写字母
//若是，则将它转化为小写字母
//若不是，则不转化
//然后输出最后得到的字符
//A-->65       Z-->90
//a-->97       z-->122
//#include<stdio.h>
//int main()
//{
//	char c;
//	printf("输入一个字符：");
//	scanf("%c",&c);
//	//if(c>=65&&c<=90)
//	//{
//	//	c=c+32;
//	//}
//	c=(c>'A'&&c<'Z')?(c+32):c;
//	printf("输出字符：%c\n",c);
//	return 0;
//}


//例4.5：有一跳跃函数
//y=-1(x<0)
// =0 (x=0)
// =1 (x>0)
//编一程序，输入一个x值，要求输入相应的y值】
//#include<stdio.h>
//int main()
//{
//	double x;
//	int y;
//	printf("输入一个x值：");
//	scanf("%lf",&x);
//	if(x<0)
//	{
//		y=-1;
//	}else if(x==0)
//	{
//		y=0;
//	}else
//	{
//		y=1;
//	}
//	printf("输出相应的y值：%d\n",y);
//	return 0;
//}


//例4.6：要求按照考试成绩的等级输出百分制分数段
//A等：85分以上
//B等：70~84分
//C等：60~69分
//D等：60分以下
//成绩的等级由键盘输入
//#include<stdio.h>
//int main()
//{
//	char grade;
//	printf("输入成绩的等级：");
//	scanf("%c",&grade);
//	switch(grade)
//	{
//	case 'A':
//		printf("85分以上\n");
//		break;
//	case 'B':
//		printf("70~84分\n");
//		break;
//	case 'C':
//		printf("60~69分\n");
//		break;
//	case 'D':
//		printf("60分以下\n");
//		break;
//	default:
//		printf("输入错误请重新输入！\n");
//	}
//	return 0;
//
//}

//例4.7：用switch语句处理菜单命令
//#include<stdio.h>
//int main()
//{
//	void action1(int,int);
//	void action2(int,int);
//	int a,b;
//	char ch;
//	//a=15;
//	//b=23;
//	printf("输入a,b:\n");
//	scanf("%d%d",&a,&b);
//	getchar();
//	printf("输入ch:\n");
//	ch=getchar();
//	switch(ch)
//	{
//	case 'a':
//	case 'A':
//		action1(a,b);
//		break;
//	case 'b':
//	case 'B':
//		action2(a,b);
//		break;
//	default:
//		putchar('\a');
//	}
//	return 0;
//}
//void action1(int x,int y)
//{
//	printf("x+y=%d\n",x+y);
//}
//void action2(int x,int y)
//{
//	printf("x-y=%d\n",x-y);
//}


//例4.8：写一程序判断某一年是否为闰年
//能被400整除，或者能被4整除但不能被100整除的都是闰年
//#include<stdio.h>
//int main()
//{
//	int year;
//	printf("输入年份：");
//	scanf("%d",&year);
//	if(year%400==0||(year%4==0&&year%100!=0))
//	{
//		printf("%d年为闰年\n",year);
//	}
//	else
//	{
//	printf("%d年不是闰年\n",year);
//	}
//	return 0;
//}
//或者：
//#include<stdio.h>
//int main()
//{
//	int year,leap;
//	leap=0;
//	printf("输入年份：");
//	scanf("%d",&year);
//	if(year%400==0||(year%4==0&&year%100!=0))
//	{
//		leap=1;
//	}
//	if(leap==1)
//	{
//		printf("%d年为闰年\n",year);
//	}
//	else
//	{
//		printf("%d年不是闰年\n",year);
//	}
//	return 0;
//}

//求ax^2+bx+c=0方程的根
//a=0         不是二次方程
//b^2-4ac=0   有两个相等实根
//b^2-4ac>0   有两个不等实根
//b^2-4ac<0   有两个不等复根
//p+qi  p=-b/2a  q=sqrt(b^2-4ac)/2a
//p-qi
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a,b,c,disc,x1,x2,realpart,imagpart;
//	printf("请输入a,b,c:");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	if(fabs(a)<=1e-6)
//	{
//		printf("不是二次方程\n");
//	}
//	else
//	{
//		disc=b*b-4*a*c;
//		if(fabs(disc)<=1e-6)
//		{
//			printf("有两个相等实根：\n%8.4f\n",-b/(2*a));
//		}
//		else if(disc>1e-6)
//		{
//			x1=(-b+sqrt(disc))/(2*a);
//			x2=(-b-sqrt(disc))/(2*a);
//			printf("有两个不等实根：\nx1=%8.4f\nx2=%8.4f\n",x1,x2);
//		}
//		else
//		{
//			realpart=-b/(2*a);
//			imagpart=sqrt(-disc)/(2*a);
//			printf("有两个不等复根：\nx1=%8.4f+%8.4fi\nx2=%8.4f-%8.4fi\n",realpart,imagpart,realpart,imagpart);
//		}
//	}
//	return 0;
//}

//例4.10：运输公司对用户计算运输费用。路程越远，费用越低。
//设每吨每千米货物的基本运费为p(price)
//货物重为w(weight)
//距离为s  c=s/250
//折扣为d(discout)
//则总运费为f(freight)的计算公式为：
//f=p*w*s*(1-d)
//c<1      无折扣
//1<=c<2   0.02
//2<=c<4   0.05
//4<=c<8   0.08
//8<=c<12  0.1
//c>=12    0.15
//#include<stdio.h>
//int main()
//{
//	double p,w,d,s,f;
//	int c;
//	printf("请输入p,w,d,s分别为：");
//	scanf("%lf%lf%lf%lf",&p,&w,&d,&s);
//	c=s/250;
//	switch(c)
//	{
//	case 0:
//		d=0;
//		break;
//	case 1:
//		d=0.02;
//		break;
//	case 2:
//	case 3:
//		d=0.05;
//		break;
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//		d=0.08;
//		break;
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//		d=0.1;
//		break;
//	case 12:
//		d=0.15;
//		break;
//	}
//	f=p*w*s*(1-d);
//	printf("输出总运费:%10.2f\n",f);
//	return 0;
//}
