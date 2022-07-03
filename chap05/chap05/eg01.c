#define _CRT_SECURE_NO_WARNINGS 1

//例5.1：使用while语句，求1+2+3+...+100
//#include<stdio.h>
//int main()
//{
//	//int i,sum;
//	//sum=0;
//	//i=1;
//	int i=1,sum=0;
//	while(i<=100)
//	{
//		sum+=i;
//		i++;
//	}
//	printf("1+2+3+...+100=%d\n",sum);
//	return 0;
//}

//例5.2：使用do...while语句，求1+2+3+...+100
//#include<stdio.h>
//int main()
//{
//	int i=1,sum=0;
//	do
//	{
//		sum+=i;
//		i++;
//	}
//	while(i<=100);
//	printf("1+2+3+...+100=%d\n",sum);
//	return 0;
//}

//例5.3：

//例5.4：在全系1000名学生中举行慈善募捐
//当总数达到10万元时就结束
//统计此时捐款的人数以及平均每人捐款的数目
//#include<stdio.h>
//int main()
//{
//	double money,sum;
//	int n;
//	for(n=1,sum=0;n<=1000;n++)
//	{
//		printf("输入捐款数目：");
//	    scanf("%lf",&money);
//		sum+=money;
//		if(sum>=100000)
//		{
//			break;
//		}
//	}
//	printf("此时捐款的人数为：%d\n平均每人捐款的数目为：%.2f\n",n,sum/n);
//	return 0;
//}

//例5.5：要求输出100~200的不能被3整除的数
//#include<stdio.h>
//int main()
//{
//	int i;
//	printf("输出100~200的不能被3整除的数:\n");
//	for(i=100;i<=200;i++)
//	{
//		if(i%3==0)
//			continue;
//		printf("%d\n",i);
//	}
//	return 0;
//}

//例5.6：输出以下4*5的矩阵
//  1   2   3   4   5
//  2   4   6   8   10
//  3   6   9   12   15
//  4   8   12  16   20
//#include<stdio.h>
//int main()
//{
//	int i,j,n;
//	for(i=1;i<=4;i++)
//	{
//		for(j=0,n=1;n<=5;n++)
//		{
//		    j+=i;
//		    printf("%-3d   ",j);
//		}
//		printf("\n");
//	}
//}
//改进1：
//#include<stdio.h>
//int main()
//{
//	int i,j,n=0;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=5;j++,n++)
//		{
//		    if(n%5==0)
//				printf("\n");
//			printf("%d\t",i*j);
//		}
//	}
//	return 0;
//}


//例5.7：用公式pi/4~~1-1/3+1/5-1/7+...求pi的近似值
//直到发现某一项的绝对值小于10^(-6)为止（该项不累加）
//#include<stdio.h>
//int main()
//{
//	double x,i,pi;
//	int flag=1;
//	x=0;
//	for(i=1;1/i>1e-6;i+=2)
//	{
//		x+=flag*(1/i);
//		flag=-flag;
//	}
//	pi=4*x;
//	printf("pi的近似值为：%10.8f\n",pi);
//	return 0;
//}

//例5.8：求Fibonacci（斐波那契）数列的前40个数
//这个数列有如下特点：
//第1、2两个数为1，1
//从第三个数开始，该数是其前面两个数之和
//即该数列为：1，1，2，3，5，8，13，...
//用数学方式表示为：
//F1=1               n=1
//F2=1               n=2
//Fn=F(n-1)+F(n-2)   n>=3
//#include<stdio.h>
//int main()
//{
//	int n,F,F1,F2;
//	printf("输出前40个数：\n");
//	F1=1;
//	F2=1;
//	printf("%12d\n%12d\n",F1,F2);
//	for(n=3;n<=40;n++)
//	{
//		F=F1+F2;
//		F1=F2;
//		F2=F;
//		printf("%12d\n",F);
//	}
//	return 0;
//}


//更改1：
//#include<stdio.h>
//int main()
//{
//	int f1=1,f2=1;
//	int i;
//	for(i=1;i<=20;i++)
//	{
//		printf("%12d  %12d",f1,f2);
//		if(i%2==0)
//			printf("\n");
//		f1=f1+f2;
//		f2=f2+f1;
//	}
//	return 0;
//}


//例5.9：输入一个大于3的整数n,判定它是否为素数（prime,又称质数）
//素数：只能由1和它本身整除
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i,prime=1;
//	printf("输入一个大于3的整数：");
//	scanf("%d",&n);
//	for(i=2;i<=sqrt((float)n);i++)
//	{
//		if(n%i==0)
//		{
//			prime=0;
//	    	break;
//		}
//	}
//	if(prime)
//        printf("%d是素数\n",n);
//	else
//		printf("%d不是素数\n",n);
//	return 0;
//}

//或者1：
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i,k;
//	printf("输入一个大于3的整数：");
//	scanf("%d",&n);
//	k=sqrt(n);
//	for(i=2;i<=k;i++)
//          //i<=(int)sqrt(n)
//	{
//		if(n%i==0)
//	      break;
//	}
//	if(i<=k)
//        printf("%d不是素数\n",n);
//	else
//		printf("%d是素数\n",n);
//	return 0;
//}


//例5.10： 求100~200的所有素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i,k;
//	printf("100~200间的素数为：\n");
//	for(n=101;n<=200;n+=2)
//	{
//    	k=sqrt(n);
//	    for(i=2;i<=k;i++)
//     	{
//	     	if(n%i==0)
//	        break;
//	    }
//    	if(i>k)
//           printf("%d\n",n);
//	}
//	return 0;
//}


//例5.11：译密码
//#include<stdio.h>
//int main()
//{
//	char x;
//	int n,i;
//	printf("输入字符数量：\n");
//	scanf("%d",&n);
//	printf("输入一行字符(全为大写字母)：");
//	for(i=1;i<=n;i++)
//	{
//		scanf("%c",&x);
//	    if(x>='A'&&x<='V')
//		   x=x+4;
//	    if(x>='W'&&x<='Z')
//		   x=x-22;
//		printf("%c",x);
//		
//	}
//	printf("\n");
//	return 0;
//}

//改程序有问题，需改正
//更改1：
//#include<stdio.h>
//int main()
//{
//	char x;
//	printf("输入一行字符：\n");
//	x=getchar();
//	while(x!='\n')
//	{
//		if(x>='A'&&x<='Z'||x>='a'&&x<='z')
//		{
//			if(x>='W'&&x<='Z'||x>='w'&&x<='z')
//				x=x-22;
//			else
//				x=x+4;
//		}
//		printf("%c",x);
//		x=getchar();
//	}
//	printf("\n");
//	return 0;
//}
//改进1：
//#include<stdio.h>
//int main()
//{
//	char x;
//	printf("输入一行字符：\n");
//	while((x=getchar())!='\n')
//	{
//		if(x>='A'&&x<='Z'||x>='a'&&x<='z')
//		{
//			if(x>='W'&&x<='Z'||x>='w'&&x<='z')
//				x=x-22;
//			else
//				x=x+4;
//		}
//		printf("%c",x);
//	}
//	printf("\n");
//	return 0;
//}












































































































































































































































































































































































































































































































































































































































































































































































































































































































































































