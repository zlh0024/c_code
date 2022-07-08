#define _CRT_SECURE_NO_WARNINGS 1
//6.1：用筛选法求100之内的素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i,j,n,a[101];
//	for(i=1;i<=100;i++)
//	{
//		a[i]=i;
//	}
//	a[1]=0;
//	for(i=2;i<sqrt(100.0);i++)
//	{
//		for(j=i+1;j<=100;j++)
//		{
//			if(a[i]!=0&&a[j]!=0)
//			{
//				if(a[j]%a[i]==0)
//					a[j]=0;
//			}
//		}
//	}
//	printf("\n");
//	for(i=2,n=0;i<=100;i++)
//	{
//		if(a[i]!=0)
//		{
//			printf("%5d",a[i]);
//			n++;
//		}
//		if(n==10)
//		{
//            printf("\n");
//			n=0;
//	    }
//	}
//	printf("\n");
//	return 0;
//}

//6.2:用选择法对10个整数排序
//#include<stdio.h>
//int main()
//{
//	int a[11],i,j,min,temp;
//	printf("Enter data:\n");
//	for(i=1;i<=10;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//	}
//	printf("\n");
//	printf("The orginal number:\n");
//	for(i=1;i<=10;i++)
//	{
//		printf("%5d",a[i]);
//	}
//	printf("\n");
//	for(i=1;i<=9;i++)
//	{
//		min=i;
//		for(j=i+1;j<=10;j++)
//		{
//			if(a[min]>a[j])
//		   {
//			   min=j;
//		   }
//		}
//		temp=a[i];
//		a[i]=a[min];
//		a[min]=temp;
//	}
//	printf("\nThe sorted numbers:\n");
//	for(i=1;i<=10;i++)
//	{
//		printf("%5d",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//6.3：求一个3*3的整数矩阵对角线元素之和
//#include<stdio.h>
//int main()
//{
//	int a[3][3],i,j,sum=0;
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=2;j++)
//		{
//			printf("a[%d][%d]=",i,j);
//			scanf("%2d",&a[i][j]);
//		}
//	}
//	printf("\n");
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=2;j++)
//		{
//			printf("%3d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for(i=0;i<=2;i++)
//	{
//		sum+=a[i][i];
//	}
//	printf("对角线元素之和:%d\n",sum);
//	return 0;
//}

//6.4：有一个已排好序的数组，要求输入一个数后，按原来排序的规律将他插入数组中
//#include<stdio.h>
//int main()
//{
//	double a[11],b,temp1,temp2;
//	int n=11,i,j;
//
//	printf("输入一个已排好序的数组(共10元素)：\n");
//	for(i=0;i<n-1;i++)
//	{
//		scanf("%lf",&a[i]);
//	}
//	printf("输入一个数：\n");
//	scanf("%lf",&b);
//	if(b>=a[n-2])
//		a[n-1]=b;
//	else
//	{
//        for(i=0;i<n-1;i++)
//	    {
//			if(a[i]>b)
//			{
//				temp1=a[i];
//				a[i]=b;
//				for(j=i+1;j<n;j++)
//				{
//					temp2=a[j];
//					a[j]=temp1;
//					temp1=temp2;
//				}
//				break;
//			}
//		}
//	}
//	printf("输出新数列：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%5.2f ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//6.5：将一个数组中的值按逆序重新存放
//例如：原来顺序为8，6，5，4，1
//       要求改为 1，4，5，6，8
//(1)按逆序输出
//#include<stdio.h>
//int main()
//{
//
//	int a[10],i,n=10;
//	printf("输入数组：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("按逆序输出为：\n");
//	for(i=n-1;i>=0;i--)
//	{
//		printf("%2d",a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//(2)按逆序存放
//#include<stdio.h>
//#include<math.h>
//#define n 5
//int main()
//{
//	int a[n],i,temp;
//	printf("输入数组a：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("数组a：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%4d",a[i]);
//	}
//	for(i=0;i<sqrt(1.0*n);i++)
//	{
//		temp=a[i];
//		a[i]=a[n-i-1];
//		a[n-i-1]=temp;
//	}
//	printf("\n按逆序存放为：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%2d",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//6.6：输出以下的杨辉三角形（要求输出10行）
//            1
//            1  1
//            1  2  1
//            1  3  3  1
//            1  4  6  4  1
//            1  5  10 10 5  1
//            .  .  .  .  .  .
//1、每个数等于它上方两数之和。
//2、每行数字左右对称，由 1 开始逐渐变大。
//3、第n 行的数字有n+1 项。
//4、第n 行数字和为2(n-1) （2 的(n-1) 次方）。
//5、(a+b) n 的展开式中的各项系数依次对应杨辉三角的第(n+1) 行中的每一项。
//6、第n 行的第m个数和第n-m 个数相等，即C(n,m)=C(n,n-m) 。
//#include<stdio.h>
//#define n 10
//int main()
//{
//	int i,j,a[n][n];
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<i+1;j++)
//		{
//			//a[i][j]=1;
//			a[i][i]=1;
//			a[i][0]=1;
//		}
//	}
//	for(i=2;i<n;i++)
//	{
//		for(j=1;j<i;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	printf("输出杨辉三角形为：\n");
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<i+1;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6.7：输出魔方阵
//魔方阵：它的每一行、每一列和对角线之和均相等
//例如：三阶魔方阵为：
//     8  1  6
//     3  5  7
//     4  9  2
//要求输出1~n^2的自然数构成的魔方阵
//魔方阵的阶数为奇数
//#include<stdio.h>
//int main()
//{
//	int i,j,a[15][15],n,p,k,i_0,j_0;//j为列坐标，i为行坐标，i_0记录行坐标，j_0记录列坐标
//	p=1;
//	while(p)
//	{
//		printf("enter n(n=1--15):");
//	    scanf("%d",&n);
//        if((n!=0)&&(n<=15)&&(n%2!=0))
//	    {
//		     p=0;
//	    }
//	}
//	//初始化
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			a[i][j]=0;
//		}
//	}
//	//建立奇数阶魔方阵
//    i=1;
//	j=n/2+1;
//	a[i][j]=1;
//	for(k=2;k<=n*n;k++)
//	{
//		i_0=i;j_0=j;//记录上一次循环行、列坐标
//		if(i==1&&j==n)//第1行第n列的情况
//        {
//            i=n;//行坐标转到第n行
//            j=1;//列坐标转到第1行
//        }
//        else if(i==1)//第1行非第n列的情况
//        {
//            i=n;//行坐标转到第n行
//            j++;//列坐标+1
//        }
//        else if(j==n)//第n列非第1行的情况
//        {
//            j=1;//列坐标转到第1列
//            i--;//行坐标-1
//        }
//        else//普通情况
//        {
//            i--;//行坐标-1
//            j++;//列坐标+1
//        }
//        if(a[i][j]!=0)//判断该位置是否有数字
//        {
//            i=i_0+1;//（基于本次for循环开始的坐标）行坐标+1，转跳到下一行
//            j=j_0;//（基于本次for循环开始的坐标）列坐标不变
//        }
//        a[i][j]=k;//赋值
//    }
//	//输出魔方阵
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////奇数阶魔方阵
//void odd_number(int n)
//{
//    int i;
//    int row,line,row_0,line_0;//row为列坐标，line为行坐标，row_0记录行坐标，line_0记录列坐标
//    line=0;row=(n+1)/2-1;//初始化行、列坐标
//    a[line][row]=1;
//    for(i=2;i<=n*n;i++)
//    {
//        line_0=line;row_0=row;//记录上一次循环行、列坐标
//        if(line==0&&row==n-1)//第1行第n列的情况
//        {
//            line=n-1;//行坐标转到第n行
//            row=0;//列坐标转到第1行
//        }
//        else if(line==0)//第1行非第n列的情况
//        {
//            line=n-1;//行坐标转到第n行
//            row++;//列坐标+1
//        }
//        else if(row==n-1)//第n列非第1行的情况
//        {
//            row=0;//列坐标转到第1列
//            line--;//行坐标-1
//        }
//        else//普通情况
//        {
//            line--;//行坐标-1
//            row++;//列坐标+1
//        }
//        if(a[line][row]!=0)//判断该位置是否有数字
//        {
//            line=line_0+1;//（基于本次for循环开始的坐标）行坐标-1，转跳到下一行
//            row=row_0;//（基于本次for循环开始的坐标）列坐标不变
//        }
//        a[line][row]=i;//赋值
//    }
//}

//6.8：找出1个二维数组中的鞍点，即该位置上的元素在该行上最大、在该列上最小。
//也可能没有鞍点
//#include<stdio.h>
//#define m 3
//#define n 2
//int main()
//{
//	int a[m][n],i,j,max,maxj,flag,k;
//	//输入数组
//	printf("输入数组a：\n");
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	//输出数组
//	printf("输出数组a：\n");
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			printf("%3d",a[i][j]);
//		}
//		printf("\n");
//	}
//	for(i=0;i<m;i++)
//	{
//		max=a[i][0];
//		maxj=0;
//		for(j=0;j<n;j++) //找出第i行中的最大数
//		{
//			if(a[i][j]>max)
//			{
//				max=a[i][j];
//				maxj=j;
//			}
//		}
//		flag=1;
//	    for(k=0;k<m;k++)
//	    {
//			if(max>a[k][maxj])
//			{
//				flag=0;
//				continue;
//			}
//	    }
//		if(flag==1)
//		{
//			printf("a[%d][%d]=%d\n",i,maxj,max);
//			break;
//		}
//	}
//	if(!flag)
//		printf("输出鞍点不存在：\n");
//	return 0;
//}

//6.9：有15个数按由小到大顺序存放在一个数组中
//输入一个数，要求用折半查找法找出该数是数组中第几个元素的值
//如果该数不在数组中，则输出“无此数”
//#include<stdio.h>
//#define n 3
//int main()
//{
//	int i,number,top,bott,mid,loca,a[n],flag=1,sign;
//    char ch;
//	printf("输入数据:\n");
//	scanf("%d",&a[0]);
//	i=1;
//	while(i<n)
//	{
//		scanf("%d",&a[i]);
//		if(a[i]>=a[i-1])
//			i++;
//		else
//			printf("重新输入此数：\n");
//	}
//	printf("\n");
//	printf("由小到大顺序存放在一个数组中：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%5d",a[i]);
//	}
//	printf("\n");
//	while(flag)
//	{
//		printf("输入要查找的数：");
//    	scanf("%d",&number);
//		sign=0;
//		top=0;
//		bott=n-1;
//		if((number<a[0])||(number>a[n-1]))
//			loca=-1;
//		while((!sign)&&(top<=bott))
//		{
//			mid=(bott+top)/2;
//			if(number==a[mid])
//			{
//				loca=mid;
//				printf("%d的位置是：%d\n",number,loca+1);
//				sign=1;
//			}
//			else if(number<a[mid])
//			{
//				bott=mid-1;
//			}
//			else
//			{
//				top=mid+1;
//			}
//		}
//		if(!sign||loca==-1)
//		{
//			printf("找不到%d.\n",number);
//		}
//		printf("continue or not(Y/N)?");
//		scanf(" %c",&ch);
//		if(ch=='N'||ch=='n')
//			flag=0;
//	}
//	return 0;
//}

//6.10：有一篇文章，共3行文字，每行有80个字符
//要求：反别统计出其中英文大写字母、小写字母、数字、空格及其他字符个数
//#include<stdio.h>
//#define m 3
//#define n 80
//int main()
//{
//	int i,j,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
//	char a[m][n];
//	for(i=0;i<m;i++)
//	{
//		printf("输入第%d行文字：\n",i+1);
//		gets(a[i]);
//		for(j=0;j<n&&a[i][j]!='\0';j++)
//		{
//			if(a[i][j]>='A'&&a[i][j]<='Z')
//				sum1++;
//			else if(a[i][j]>='a'&&a[i][j]<='z')
//				sum2++;
//			else if(a[i][j]>='0'&&a[i][j]<='9')
//				sum3++;
//			else if(a[i][j]==' ')
//				sum4++;
//			else
//				sum5++;
//		}
//	}
//	printf("英文大写字母:%d\n小写字母:%d\n数字:%d\n空格:%d\n其他字符个数:%d\n",sum1,sum2,sum3,sum4,sum5);
//	return 0;
//}

//6.11：输出以下图案
//  * * * * *
//   * * * * *
//    * * * * *
//     * * * * *
//      * * * * *
//#include<stdio.h>
//int main()
//{
//	char a[5]={'*','*','*','*','*'};
//	int i,j,k;
//	char space=' ';
//	for(i=0;i<5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%c",space);
//		}
//		for(k=0;k<5;k++)
//		{
//			printf("%c",a[k]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}

//6.12：将下面规律译成密码：
//   A->Z    a->z
//   B->Y    b->y
//   C->X    c->x
//将密码译回原码
