#define _CRT_SECURE_NO_WARNINGS 1
//例7.1：想输出以下结果，用函数调用实现
//       ****************
//        How do you do!
//       ****************
//#include<stdio.h>
//int main()
//{
//	void print_star();
//	void print_message();
//	print_star();
//	print_message();
//	print_star();
//	return 0;
//}
//void print_star()
//{
//	printf("****************\n");
//}
//void print_message()
//{
//	printf(" How do you do!\n");
//}

//例7.2：输入两个整数，要求输出其中值较大者。要求用函数来找到大数。
//#include<stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int a,b,c;
//	printf("输入两个整数x,y,分别为：");
//	scanf("%d%d",&a,&b);
//	printf("x=%d,y=%d\n",a,b);
//	c=max(a,b);
//	printf("两者中的较大值为：%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	//return (x>y?x:y);
//  int z;
//  z=x>y?x:y;
//  return z;
//}

//例7.3：将在max函数中定义的变量z改为float型
//#include<stdio.h>
//int main()
//{
//	int max(float x,float y);
//	float a,b;
//	int c;
//	printf("输入两个整数x,y,分别为：");
//	scanf("%f%f",&a,&b);
//	printf("x=%f,y=%f\n",a,b);
//	c=max(a,b);
//	printf("两者中的较大值为：%d\n",c);
//	return 0;
//}
//int max(float x,float y)
//{
//	//return (x>y?x:y);
//  float z;
//  z=x>y?x:y;
//  return z;
//}

//例7.4：输入两个实数，用一个函数求出它们之和
//#include<stdio.h>
//int main()
//{
//	int sum(int,int);
//	int a,b,c;
//	printf("输入两个实数：");
//	scanf("%d%d",&a,&b);
//	c=sum(a,b);
//	printf("两数之和为：%d\n",c);
//	return 0;
//}
//int sum(int x,int y)
//{
//	return x+y;
//}

//改进1：
//#include<stdio.h>
//int main()
//{
//	float add(float x,float y);
//	float a,b,c;
//	printf("输入两个实数：");
//	scanf("%f%f",&a,&b);
//	c=add(a,b);
//	printf("两数之和为：%f\n",c);
//	return 0;
//}
//float add(float x,float y)
//{
//	return x+y;
//}

//例7.5：输入4个整数，找出其中最大的数。用函数的嵌套调用来处理
//#include<stdio.h>
//int main()
//{
//	int max_2(int x,int y);
//	int max_3(int x,int y,int z);
//	int max(int x,int y,int z,int j);
//	int a,b,c,d,e;
//	printf("输入4个整数：\n");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	e=max(a,b,c,d);
//	printf("最大值：%d\n",e);
//	return 0;
//}
//
//int max(int x,int y,int z,int j)
//{
//	int p;
//	p=max_3(x,y,z);
//	return max_2(p,j);
//}
//int max_3(int x,int y,int z)
//{
//	int p;
//	p=max_2(x,y);
//	return max_2(p,z);
//}
//int max_2(int x,int y)
//{
//	return (x>y?x:y);
//}
//改进1：
//#include<stdio.h>
//int main()
//{
//	int max4(int a,int b,int c,int d);
//	int a,b,c,d,max;
//	printf("输入4个整数：\n");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	max=max4(a,b,c,d);
//	printf("最大值：%d\n",max);
//	return 0;
//}
//int max4(int a,int b,int c,int d)
//{
//	int max2(int a,int b);
//	int m;
//	m=max2(a,b);
//	m=max2(m,c);
//	m=max2(m,d);
//	return m;
//}
//int max2(int a,int b)
//{
//	return (a>b?a:b);
//}

//例7.6：有5个学生坐在一起，问第5个学生多少岁，他说比第4个学生大2岁。
//问第4的学生岁数，他说比第3个学生大2岁   age(4)=age(3)+2
//问第3的学生岁数，他说比第2个学生大2岁   age(3)=age(2)+2
//问第2的学生岁数，他说比第1个学生大2岁   age(2)=age(1)+2
//最后问第1个学生，他说是10岁             age(1)=10
//请问第5个学生多大
//#include<stdio.h>
//int main()
//{
//	int age(int n);
//	int n;
//	scanf("%d",&n);
//	printf("输出第%d个学生的成绩为：%d\n",n,age(n));
//	return 0;
//}
//int age(int n)
//{
//	int c;
//	if(n==1)
//		c=10;
//	else
//		c=age(n-1)+2;
//	return c;
//}

//例7.7：用递归方法求n!
//2!=1*2
//3!=3*2!
//4!=4*3!
//5!=5*4!
//#include<stdio.h>
//int main()
//{
//	int fac(int n);
//	int n;
//	printf("输入n:");
//	scanf("%d",&n);
//	printf("%d!=%d\n",n,fac(n));
//	return 0;
//}
//int fac(int n)
//{
//	int f;
//	if(n<0)
//		printf("n<0,data error!");
//	else if(n==1||n==0)
//		f=1;
//	else
//	    f=fac(n-1)*n;
//	return f;
//}

//例7.8：Hanoi（汉诺）塔问题
//#include<stdio.h>
//int main()
//{
//	void hanoi(int n,char one,char two,char three);
//	int m;
//	printf("input the number of diskes:");
//	scanf("%d",&m);
//	printf("The step to move %d diskes:\n",m);
//	hanoi(m,'A','B','C');
//	return 0;
//}
//void hanoi(int n,char one,char two,char three)
//{
//	void move(char x,char y);
//	if(n==1)
//		move(one,three);
//	else
//	{
//		hanoi(n-1,one,three,two);
//		move(one,three);
//		hanoi(n-1,two,one,three);
//	}
//}
//void move(char x,char y)
//{
//	printf("%c-->%c\n",x,y);
//}

//例7.9：输入10个数，要求输出其中值最大的元素和该数是第几个数
//#include<stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int i,a[10]={0},m,n;
//	printf("输入10个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\n");
//	for(i=1,m=a[0],n=0;i<10;i++)
//	{
//		if(max(m,a[i])>m)
//		{
//			m=max(m,a[i]);
//			n=i;
//		}
//	}
//	printf("最大为%d,为第%d个\n",m,n+1);
//
//}
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}

//例7.10：有一个一维数组score，内存放10个学生成绩，求平均成绩
//#include<stdio.h>
//int main()
//{
//	//float average(float array[10]);
//	float average(float* a);
//	float score[10]={0},aver;
//	int i;
//	printf("输入10个学生的成绩：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&score[i]);
//	}
//	printf("\n");
//	aver=average(score);
//	printf("平均数为：%5.2f\n",aver);
//	return 0;
//}
////float average(float array[])
////{
////	int i;
////	float aver,sum=array[0];
////	for(i=1;i<10;i++)
////	{
////		sum+=array[i];
////	}
////	aver=sum/10;
////	return aver;
////}
//float average(float* a)
//{
//	int i;
//	float aver,sum=*a;
//	for(i=1;i<10;i++)
//	{
//		//sum+=*(a++);
//		sum+=*(++a);
//	}
//	aver=sum/10;
//	return aver;
//}

//例7.11：有两个班级，分别有35名和30名学生，调用一个average函数，
//分别求这两个班的学生的平均成绩
//#include<stdio.h>
//#define m 5
//#define n 10
//int main()
//{
//	float average(float array[],int numb);
//	float score1[m]={0},score2[n]={0},aver1,aver2;
//	int i;
//	printf("输入%d个学生的成绩：\n",m);
//	for(i=0;i<m;i++)
//	{
//		scanf("%f",&score1[i]);
//	}
//	printf("输入%d个学生的成绩：\n",n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%f",&score2[i]);
//	}
//	printf("\n");
//	aver1=average(score1,m);
//	aver2=average(score2,n);
//	printf("%d个学生平均数为：%5.2f\n",m,aver1);
//	printf("%d个学生平均数为：%5.2f\n",n,aver2);
//	return 0;
//}
////求平均值
//float average(float array[],int numb)
//{
//	int i;
//	float aver,sum=array[0];
//	for(i=1;i<numb;i++)
//	{
//		sum+=array[i];
//	}
//	aver=sum/numb;
//	return aver;
//}

//例7.12：用选择法对数组中10个整数按由小到大排序
//#include<stdio.h>
//int main()
//{
//	int arr[10]={0},i,j,temp;
//	printf("输入10个整数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(arr[i]>arr[j])
//			{
//				arr[i]=arr[j];
//			}
//		}
//	}
//	printf("输出由小到大的10个整数为：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%3d",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//改进1：
//#include<stdio.h>
//int main()
//{
//	void sort(int array[],int n);
//	int arr[10]={0},i;
//	printf("输入10个整数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	sort(arr,10);
//	printf("输出由小到大的10个整数为：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%3d",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void sort(int array[],int n)
//{
//	int i,j,k,t;
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(array[k]>array[j])
//			{
//				k=j;
//			}
//		}
//		t=array[k];
//		array[k]=array[i];
//		array[i]=t;
//	}
//}

//例7.13：有一个3*4的矩阵，求所有元素中的最大值
//#include<stdio.h>
//#define m 3
//#define n 4
//int main()
//{
//	float max_value(float a[][n]);
//	float a[m][n];
//	int i,j,max1;
//	printf("输入%d*%d的矩阵a：\n",m,n);
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//			scanf("%f",&a[i][j]);
//	}
//	printf("\n");
//	printf("%d*%d的矩阵为a：\n",m,n);
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//			printf("%6.2f",a[i][j]);
//		printf("\n");
//	}
//	printf("所有元素中最大值为：%6.4f\n",max_value(a));
//	return 0;
//}
//float max_value(float a[][n])
//{
//	float max=a[0][0];
//	int i,j;
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			if(max<a[i][j])
//				max=a[i][j];
//		}
//	}
//	return max;
//}

//例7.14：有一个一维数组，内存放10个学生成绩，写一个函数，
//当主函数调用此函数后，能求出平均分、最高分、最低分。
//#include<stdio.h.>
//#define N 10
//float Max=0,Min=0;
//int main()
//{
//	float average(float a[],int n);
//	float a[N]={0},aver=0;
//	int i;
//	printf("输入%d个学生的成绩：\n",N);
//	for(i=0;i<N;i++)
//	{
//		scanf("%f",&a[i]);
//	}
//	aver=average(a,N);
//	printf("平均分为:%f\n最高分为:%f\n最低分为:%f\n",aver,Max,Min);
//	return 0;
//}
////求平均分、最高分、最低分
//float average(float a[],int n)
//{
//	float sum=a[0],aver;
//	int i;
//	Max=a[0];
//	Min=a[0];
//	for(i=1 ;i<n;i++)
//	{
//		if(Max<a[i])
//			Max=a[i];
//		else if(Min>a[i])
//			Min=a[i];
//		sum=sum+a[i];
//	}
//	aver=sum/n;
//	return aver;
//}

//例7.17：输出1~5的阶乘值
//#include<stdio.h>
//int main()
//{
//	int fac(int n);
//	int i=0;
//	for(i=1;i<=5;i++)
//	{
//		printf("%d!=%d\n",i,fac(i));
//	}
//	return 0;
//}
//int fac(int n)
//{
//	static int f=1;
//	f=f*n;
//	return f;
//}

//例7.18：
//#include<stdio.h>
//int main()
//{
//	int max();
//	extern int A,B,C;
//	scanf("%d%d%d",&A,&B,&C);
//	printf("最大值：%d",max());
//	return 0;
//}
//int A,B,C;
//int max()
//{
//	int m;
//	m=A>B?A:B;
//	if(C>m)
//		m=C;
//	return m;
//}

//例7.20：有一个字符串，内有若干个字符，
//现输入一个字符，要求程序将字符串中字符删去。用外部函数实现。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void enter_string(char str[]);
//	char delete_string(char str[],char c);
//	void print_string(char str[]);
//	char c,str[80];
//	printf("输入一个字符串：\n");
//	enter_string(str);
//	printf("输入一个字符：\n");
//	scanf("%c",&c);
//	delete_string(str,c);
//	printf("输出删除后的字符串：\n");
//	print_string(str);
//	return 0;
//}
//void enter_string(char str[])
//{
//	gets(str);
//}
//char delete_string(char str[],char c)
//{
//	int i,j;
//	for(i=j=0;str[i]!='\0';i++)
//	{
//		if(str[i]!=c)
//			str[j++]=str[i];
//	}
//	str[j]='\0';
//}
//void print_string(char str[])
//{
//	printf("%s\n",str);
//}
