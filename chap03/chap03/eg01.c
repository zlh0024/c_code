#define _CRT_SECURE_NO_WARNINGS 1


//例3.1：有人用温度计测试出用华氏法表示的温度（如64oF）
//今要求把它转换为以摄氏法表示的的温度（如17.8oC）
//c=5/9(f-32)
//#include<stdio.h>
//int main()
//{
//	float c,f;
//	c=0;
//	f=0;
//	printf("输入华氏温度：");
//	scanf("%f",&f);
//	c=(5.0/9)*(f-32);
//	printf("输出摄氏温度：%f\n",c);
//	return 0;
//}


//例3.2：计算存款利息。有1000元，想存一年。有三种方法可选：
//(1)活期，年利率为r1；           p0*(1+r1)
//(2)一年期定期，年利率为r2；     p0*(1+r2)
//(3)存两次半年定期，年利率为r3。 p0*(1+r3/2)*(1+r3/2)
//请分别计算出一年后按三种方法所得到的本息和。
//#include<stdio.h>
//int main()
//{
//	float p0,p1,p2,p3,r1,r2,r3;
//	p0=0;
//	printf("输入本金：");
//	scanf("%f",&p0);
//	printf("输入三种存款的年利率，分别为：");
//	scanf("%f,%f,%f",&r1,&r2,&r3);
//	p1= p0*(1+r1);
//	p2= p0*(1+r2);
//	p3= p0*(1+r3/2)*(1+r3/2);
//	printf("输出：\n p1=%f\n p2=%f\n p3=%f\n",p1,p2,p3);
//	return 0;
//
//}


//例3.3：给定一个大写字母，要求用小写字母输出
//'a'的ASC码值为97，'A'的ASC码值为65，  大写字母+32-->小写字母
//#include<stdio.h>
//int main()
//{
//	char ch1,ch2;
//	printf("输入大写字母：");
//	scanf("%c",&ch1);
//	ch2=ch1+32;
//	printf("输出小写字母：%c\n",ch2);
//	return 0;
//}


//例3.4：给出三角形的三边长，求三角形的面积
//area=sqrt(s*(s-a)*(s-b)*(s-c))
//s=(a+b+c)/2
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a,b,c,s,area;
//	printf("请输入三角形的三边长，分别为：");
//    scanf("%f%f%f",&a,&b,&c);
//	//判断长度是否大于0
//	if(a<=0||b<=0||c<=0)
//		printf("边长输入违法，需大于0，请重新输入\n");
//	s=(a+b+c)/2;
//	area=sqrt(s*(s-a)*(s-b)*(s-c));
//	printf("三角形的面积为：%f",area);
//	return 0;
//}


//例3.5：求ax^2+bx+c=0方程的根。a、b、c由键盘输入，设b^2-4*a*c>0
//x1=(-b+sqrt(b^2-4*a*c))/2a
//x1=(-b-sqrt(b^2-4*a*c))/2a
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a,b,c,daiet,x1,x2;
//	printf("请输入a,b,c分别为：");
//	scanf("%f,%f,%f",&a,&b,&c);
//	daiet=b*b-4*a*c;
//	if(daiet>0)
//	{
//		x1=(-b+sqrt(daiet))/(2*a);
//		x2=(-b-sqrt(daiet))/(2*a);
//	}
//	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
//	return 0;
//}


//例3.6：用%f输出实数，只能得到6位小数
//#include<stdio.h>
//int main()
//{
//	double a;
//	printf("输入一个实数：");
//	scanf("%lf",&a);
//	printf("输出实数：%8.6f\n",a/3);
//	return 0;
//}


//例3.7：float型数据的有效位数
//#include<stdio.h>
//int main()
//{
//	float a;
//	a=10000/3.0;
//	printf("%f\n",a);
//	return 0;
//}


//例3.8：先后输出BOY三个字符
//#include<stdio.h>
//int main()
//{
//	//int a=66,b=79,c=89;
//	char a='B',b='O',c='Y';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	printf("\n");
//	return 0;
//}


//例3.9：从键盘输入BOY三个字符，然后把他们输出到屏幕
//#include<stdio.h>
//int main()
//{
//	//int a=66,b=79,c=89;
//	char a,b,c;
//	a=getchar();
//	b=getchar();
//	c=getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	printf("\n");
//	return 0;
//}


//例3.10:从键盘输入输入一个大写字母，在显示屏上输出对应的小写字母
//'a'的ASC码值为97，'A'的ASC码值为65，  大写字母+32-->小写字母
//#include<stdio.h>
//int main()
//{
//	char ch1,ch2;
//	printf("输入大写字母：");
//	//scanf("%c",&ch1);
//	ch1=getchar();
//	ch2=ch1+32;
//	//printf("输出小写字母：%c\n",ch2);
//	putchar(ch2);
//	putchar('\n');
//	return 0;
//}