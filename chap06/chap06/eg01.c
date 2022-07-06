#define _CRT_SECURE_NO_WARNINGS 1
//例6.1：对10个数组元素依次赋值为：
//0，1，2，3，4，5，6，7，8，9
//要求按逆序输出
//#include<stdio.h>
//int main()
//{
//	int i;
//	//int a[10]={0,1,2,3,4,5,6,7,8,9};
//	int a[10];
//	for(i=0;i<=9;i++)
//	{
//		a[i]=i;
//	}
//	printf("逆序输出数组元素：\n");
//	for(i=9;i>=0;i--)
//	{
//		printf("%d    ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//例6.2：用数组处理求Fibonacci数列问题
//求Fibonacci（斐波那契）数列
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
//	int f[20]={1,1},i;
//	printf("前20个斐波那契数列为：1 1 ");
//	for(i=2;i<=19;i++)
//	{
//		f[i]=f[i-1]+f[i-2];
//		printf("%d ",f[i]);
//	}
//	return 0;
//}

//有10各地区的面积，要求对它们由小到大的顺序排列
//冒泡法排序    升序排序
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int i,j,n=10,tep;
//	printf("请输入10个数字：\n");
//	for(i=0;i<=n-1;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("\n");
//	for(j=0;j<n-1;j++)
//	{
//		//第一趟
//	    for(i=0;i<n-j-1;i++)
//     	{
//	     	if(arr[i]>arr[i+1])
//		    {
//			    //交换
//			    tep=arr[i];
//			    arr[i]=arr[i+1];
//			    arr[i+1]=tep;
//		    }
//	    }
//	}
//	printf("升序排列为：\n");
//	for(i=0;i<=n-1;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//例6.4：将一个二维数组行和列互换，存到另一个二维数组中
//例如:a={{1,2,3},{4,5,6}}
//b={{1,4},{2,5},{3,6}}
//#include<stdio.h>
//int main()
//{
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int i,j,b[3][2];  
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=1;j++)
//		{
//			b[i][j]=a[j][i];
//			printf("%5d ",b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//更改1：
//#include<stdio.h>
//int main()
//{
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int i,j,b[3][2];
//	printf("输出矩阵a:\n");
//	for(i=0;i<=1;i++)
//	{
//		for(j=0;j<=2;j++)
//		{
//			printf("%5d ",a[i][j]);
//			b[j][i]=a[i][j];
//		}
//		printf("\n");
//	}  
//	printf("输出矩阵b:\n");
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=1;j++)
//		{
//			printf("%5d ",b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//例6.5：有一个3*4的矩阵
//要求求出其中值最大的那个元素的值
//以及其所在的行号和列号
//#include<stdio.h>
//int main()
//{
//	double arr[3][4],max;
//	int i,j,row=0,colum=0;
//	printf("输入一个3*4的矩阵：\n");
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=3;j++)
//		{
//			scanf("%lf",&arr[i][j]);
//		}
//		printf("\n");
//	}
//	max=arr[0][0];
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=3;j++)
//		{
//			if(max<arr[i][j])
//			{
//				max=arr[i][j];
//				row=i;
//				colum=j;
//			}
//		}
//	}
//	printf("值最大元素的值为：%.3f\n,行号为：%d,列号为：%d\n",max,row,colum);
//	return 0;
//}

//例6.6：输出一个已知的字符串
//#include<stdio.h>
//int main()
//{
//	char ch[10]={'I',' ','a','m',' ','h','a','p','p','y'};
//	int i;
//	for(i=0;i<=9;i++)
//	{
//		printf("%c",ch[i]);
//	}
//	printf("\n");
//	return 0;
//}

//例6.7：输出一个菱形图
//#include<stdio.h>
//int main()
//{
//	char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
//	int i,j;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%c",diamond[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

 //例6.8：输入一行字符，统计其中有多少个单词，单词之间用空格分隔开
//#include<stdio.h>
//int main()
//{
//	char string[81];
//	int i,num=0,word=0;
//	char c;
//	gets(string);
//	for(i=0;(c=string[i])!='\0';i++)
//	{
//		if(c==' ')
//			word=0;
//		else
//			if(word==0)
//			{
//				word=1;
//				num++;
//			}
//	}
//	printf("输出单词数：%d\n",num);
//	return 0;
//}

//例6.9：有三个字符串，要求找到其中“最大”者
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char c1[81],c2[81],c3[81];
//	printf("输入三个字符串，分别为：\n");
//	gets(c1);
//	gets(c2);
//    gets(c3);
//	if(strcmp(c1,c2)<0)
//	{
//		//c1的定义必须足够大
//		strcpy(c1,c2);
//	}
//	if(strcmp(c1,c3)<0)
//	{
//		//c1的定义必须足够大
//		strcpy(c1,c3);
//	}
//	printf("其中最大者为：%s",c1);
//	return 0;
//}

//更改1：
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[3][20];
//	char string[20];
//	int i;
//	printf("输入三个字符串，分别为：\n");
//	for(i=0;i<3;i++)
//	{
//		gets(str[i]);
//	}
//	if(strcmp(str[0],str[1])>0)
//	{
//		//c1的定义必须足够大
//		strcpy(string,str[0]);
//	}
//	else
//	{
//		strcpy(string,str[1]);
//	}
//	if(strcmp(str[2],string)>0)
//	{
//		strcpy(string,str[2]);
//	}
//	printf("其中最大者为：%s\n",string);
//	return 0;
//}