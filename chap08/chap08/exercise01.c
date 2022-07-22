#define _CRT_SECURE_NO_WARNINGS 1
////1. 输入3个整数，要求按由小到大的顺序输出。
////#include<stdio.h>
////int main()
////{
////	int a,b,c,temp;
////	printf("输入3个整数a,b,c分别为:\n");
////	scanf("%d%d%d",&a,&b,&c);
////	if(a>b)
////	{
////		temp=a;
////		a=b;
////		b=temp;
////	}
////	if(a>c)
////    {
////		temp=a;
////		a=c;
////		c=temp;
////	}
////	if(b>c)
////    {
////		temp=b;
////		b=c;
////		c=temp;
////	}
////	printf("由小到大循序输出为：%d,%d,%d\n",a,b,c);
////	return 0;
////}
//
////改进1：
////#include<stdio.h>
////int main()
////{
////	void sort(int a,int b,int c);
////	int a,b,c;
////	printf("输入3个整数a,b,c分别为:\n");
////	scanf("%d%d%d",&a,&b,&c);
////	sort(a,b,c);
////	return 0;
////}
////void sort(int a,int b,int c)
////{
////	int temp;
////	if(a>b)
////	{
////		temp=a;
////		a=b;
////		b=temp;
////	}
////	if(a>c)
////    {
////		temp=a;
////		a=c;
////		c=temp;
////	}
////	if(b>c)
////    {
////		temp=b;
////		b=c;
////		c=temp;
////	}
////	printf("由小到大循序输出为：%d,%d,%d\n",a,b,c);
////}
//
////改进2：
////#include<stdio.h>
////int main()
////{
////	void sort(int * a,int * b,int * c);
////	int a,b,c;
////	int *p1,*p2,*p3;
////	printf("输入3个整数a,b,c分别为:\n");
////	scanf("%d%d%d",&a,&b,&c);
////	p1=&a;
////	p2=&b;
////	p3=&c;
////	sort(p1,p2,p3);
////	return 0;
////}
////void sort(int * a,int * b,int * c)
////{
////	int temp;
////	if(*a>*b)
////	{
////		temp=*a;
////		*a=*b;
////		*b=temp;
////	}
////	if(*a>*c)
////    {
////		temp=*a;
////		*a=*c;
////		*c=temp;
////	}
////	if(*b>*c)
////    {
////		temp=*b;
////		*b=*c;
////		*c=temp;
////	}
////	printf("由小到大循序输出为：%d,%d,%d\n",*a,*b,*c);
////}
//
////改进3：
////#include <stdio.h>
////void swap(int *p_a, int *p_b)
////{ 
////	int temp = *p_a;
////	*p_a = *p_b;
////	*p_b = temp;
////}
////int main()
////{
////	int a, b, c, *p_a = &a, *p_b = &b, *p_c = &c; // 获取每个变量空间的地址  
////	printf("Please enter three numbers:");
////	scanf("%d%d%d", p_a, p_b, p_c); 
////	if (*p_a > *p_b) 
////	{
////		swap(p_a, p_b);//通过指针进行指向空间内的数据交换 
////	}
////	if (*p_a > *p_c)
////	{
////		swap(p_a, p_c);
////	}
////	if (*p_b > *p_c)
////	{
////		swap(p_b, p_c);
////	}
////	printf("%d %d %d\n", *p_a, *p_b, *p_c); 
////	system("pause");
////	return 0;
////}
//
////2. 输入3个字符串，要求按由小到大的顺序输出。
////#include<stdio.h>
////#include<string.h>
////int main()
////{
////	void sort(char *p0,char *p1);
////	char *str[3]={NULL};
////	char *p1=str[1],*p2=str[2],*p0=str[0];
////	int i;
////	printf("输入3个字符串分别为：\n");
////	for(i=0;i<3;i++)
////	{
////		gets(str[i]);
////	}
////	printf("\n");
////	sort(p0,p1);
////	sort(p0,p2);
////	sort(p1,p2);
////	printf("由小到大的顺序输出为：\n%s\n%s\n%s\n",*p0,*p1,*p2);
////	return 0;
////}
////void sort(char *p0,char *p1)
////{
////	char *temp;
////	if(strcmp(p0,p1)>0)
////	{
////		temp=p0;
////		p0=p1;
////		p1=temp;
////	}
////}
////该程序有错误，要更改
////如下：
////
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char str[3][32];
////	char *p[3];//数组指针
////	int i,j;
////	printf("Please enter three strings:"); 
////	for (i = 0; i < 3; i++)
////	{
////		p[i] = str[i];
////		scanf_s("%s", p[i], 32);//后边的数字限制缓冲区边界，防止缓冲区溢出访问越界
////	}
////	//让p[0]和p[1]/p[2]分别进行比较，找出最大的字符串，i+1之后，则让p[1]和p[2]进行比较，找出第二大
////    //i循环总个数-1次,最后一个是不需要比较的
////	for (i = 0; i < 2; i++)
////	{
////		for (j = i + 1; j < 3; j++)
////		{
////			if (strcmp(p[i], p[j]) > 0) 
////			{
////				char *tmp = p[i];
////				p[i] = p[j];
////				p[j] = tmp;
////			}
////		}
////	}
////	printf("%s %s %s\n", p[0], p[1], p[2]); 
////	return 0;
////}
//
////更改2：
////#include<stdio.h>
////#include<string.h.>
////int main()
////{
////	void swap(char *p1,char *p2);
////	char str1[20],str2[30],str3[30];
////	printf("Please enter three strings:"); 
////	gets(str1);
////	gets(str2);
////	gets(str3);
////	if(strcmp(str1,str2)>0)
////		swap(str1,str2);
////	if(strcmp(str1,str3)>0)
////		swap(str1,str3);
////	if(strcmp(str2,str3)>0)
////		swap(str2,str3);
////	printf("The new order is:\n");
////	printf("%s\n%s\n%s\n",str1,str2,str3);
////	return 0;
////}
////void swap(char *p1,char *p2)
////{
////	char p[20];
////	strcpy(p,p1);
////	strcpy(p1,p2);
////	strcpy(p2,p);
////}
//
////3. 输入10个整数,将其中最小的数与第一个数对换, 把最大的数与最后一个数对换。 
////写3个函数:①输人10个数; ②进行处理; ③输出10个数。
////#include <stdio.h>
////void input(int *arry, int len)
////{
////	int i;
////	for (i = 0; i < len; i++)
////	{
////		scanf_s("%d", &arry[i]);
////	}
////}
////void print(int *arry, int len)
////{
////	int i;
////	for (i = 0; i < len; i++) 
////	{
////		printf("%d ", arry[i]); 
////	}
////	printf("\n");
////}
////void handle(int *arry, int len)
////{
////	int i,tmp;
////	int max_num = arry[0], min_num = arry[0];
////	int *p_max = NULL, *p_min = NULL; 
////	for (i = 1; i < len; i++)
////	{
////		if (min_num > arry[i])
////		{
////			//逐个比对后找出最小值 
////			min_num = arry[i];
////			p_min = &arry[i];
////			//逐个比对后找到最小值的空间地址
////		}
////		if (max_num < arry[i]) 
////		{
////			//逐个比对后找出最大值 
////			max_num = arry[i];
////			p_max = &arry[i];
////			//逐个比对后找到最大值的空间地址 
////		}
////	} 
////	tmp = *p_min;
////	*p_min = arry[0];
////	arry[0] = tmp;
////	//最小值与第一个数据交换 
////	tmp = *p_max;
////	*p_max = arry[len - 1];
////	arry[len - 1] = tmp;
////	//最大值与最后一个数据交换
////}
////int main()
////{
////	int arry[10];
////	printf("Please enter ten nums:");
////	input(arry, 10);
////	handle(arry, 10);
////	print(arry, 10);
////	return 0;
////}
//
////4. 有n个整数,使前面各数顺序向后移m个位置,最后m个数变成最前面m个数,见图8.43。 
////写一函数实现以上功能,在主函数中输人n个整数和输出调整后的n个数。 
////#include<stdio.h>
////int main()
////{
////	void input(int * p,int n);
////	void print(int * p,int n);
////	void move(int *p1,int *p2,int m,int n);
////	int a[10]={0},b[10]={0};
////	int n=10,m;
////	printf("输入%d个整数：\n",n);
////	input(a,n);
////	printf("输入m:");
////	scanf("%d",&m);
////	printf("各数顺序向后移%d个位置\n",m);
////	move(a,b,m,n);
////	printf("输出更改后的整数：\n");
////	print(b,n);
////}
////void input(int * p,int n)
////{
////	int i;
////	for(i=0;i<n;i++)
////		scanf("%d",p+i);
////}
////void print(int * p,int n)
////{
////	int i;
////	for(i=0;i<n;i++)
////		printf("%d ",*(p+i));
////	printf("\n");
////}
//////使前面各数顺序向后移m个位置,最后m个数变成最前面m个数
////void move(int *p1,int *p2,int m,int n)
////{
////	int i,j;
////	for(i=n-m,j=0;i<n;i++,j++)
////	{
////		*(p2+j)=*(p1+i);
////	}
////	for(i=0,j=m;i<n-m;i++,j++)
////	{
////        *(p2+j)=*(p1+i);
////	}
////}
//
////更改1：
////#include <stdio.h>
////void move(int *arry, int n, int m)
////{
////	int i,j;
////	int end_idx = n - m;//找到倒数第m个数据的位置，也就是要移动到数组首部的数据的起始位置
////	for (i = 0; i < m; i++) 
////	{
////		int *p = arry + end_idx + i;//从倒数第m个数据的位置开始逐渐向后偏移直到数组尾部 
////		int tmp = *p;//获取到这个位置的值，用于数组前边数据向后偏移1位之后，向数组第i位赋值
////		for (j = end_idx + i; j > i; j--)
////		{
////			//从第i位开始逐个向后偏移一位
////			*p = *(p - 1);
////			p--;
////		}
////		*(arry + i) = tmp;//数组的前第i个数字逐个替换为后边被覆盖的值 
////	}
////}
////int main()
////{
////	int number[32], n, m, i;
////	printf("Please enter the number of numbers: "); 
////	scanf_s("%d", &n);//先确定要输入多少个数字 
////	printf("Please enter %d numbers: ", n); 
////	for (i = 0; i < n; i++) 
////	{
////		scanf_s("%d", &number[i]);//输入指定个数的数字 
////	}
////	printf("Number of positions to move: "); 
////	scanf_s("%d", &m);
////	//确定要向后移动多少个位置 
////	move(number, n, m);
////	for (i = 0; i < n; i++) 
////	{
////		printf("%d ", number[i]);
////	}
////	printf("\n");
////	return 0;
////}
//
////5. 有n个人围成一圈，顺序排号。从第1个人开始报数(从1到3报数),凡报到3的人退出圈子,问最后留下的是原来第几号的那位。
//// 从第一个人开始，逐个报数，谁报3就退出，并且重置报数，直到最后一个人后，
//// 又重新从第一个人继续报数，直到最终只剩一个人的时候退出即可
////#include<stdio.h>
////int main()
////{
////	int a[33]={0},n,i;
////	printf("围成一圈的人数：");
////	scanf("%d",&n);
////	for(i=0;i<n;i++)
////	{
////		a[i]=(i+1)%3;
////	}
////	printf("最后留下的是原来的：\n");
////	for(i=0;i<n;i++)
////	{
////		if(a[i]!=0)
////		{
////			printf("第%d号\n",i+1);
////		}
////	}
////	printf("\n");
////	return 0;
////}
////凡报到3的人退出圈子
//
////更改1：
////#include <stdio.h>
////int main()
////{
////	int people[128]={0},n,remain,num_off,i;
////	int * p;
////	printf("Please input how many people: ");
////	scanf_s("%d", &n);
////	for (i = 0; i < n; i++)
////	{
////		people[i] = i + 1; //对每个人顺序排号 
////	}
////	remain = n;
////	num_off = 0;
////	p = NULL;
////	while (remain > 1) 
////	{
////		p = people;
////		while (p != people + n)
////		{
////			// 每次从第一个位置开始，直到最后一个位置,报数是一直递增的
////			if ((*p) != 0)
////			{
////				//若这个位置人还在 
////				num_off++; //则报数
////				if (num_off == 3)
////				{
////					//否则当前的人即将要报的数字是3
////					*p = 0;
////					//则剔除这个人 
////					num_off = 0;
////					//并且重新开始计数，下边会++，所以是从1开始报数
////					remain--;
////					//剩余人数-1 
////				}
////			}
////			p++;
////		}
////	}
////	for (i = 0; i < n; i++) 
////	{
////		if (people[i] != 0)
////		{
////			printf("Serial number of the remaining person:%d\n", people[i]);
////		}
////	}
////	printf("\n");
////	return 0;
////}
//
////6. 写一函数,求一个字符串的长度。在main函数中输入字符串,并输出其长度。
////#include<stdio.h>
////int strlength(char *p)
////{
////	int num=0;
////	for(;*p!='\0';p++)
////	{
////         num++;
////	}
////	return num;
////}
////int main()
////{
////	char string[100];
////	gets(string);
////	printf("字符串的长度为：%d\n",strlength(string));
////	return 0;
////}
//
////更改1：
////#include <stdio.h>
////int mystrlen(char *str)
////{
////	int len = 0;
////	char *ptr = str;
////	while (*ptr != '\0') 
////	{
////		ptr++;
////		len++;
////	}
////	return len;
////}
////int main()
////{
////	char buf[1024];
////	printf("Please enter a string: ");
////	scanf_s("%s", buf, 1024); 
////	printf("string len:%d\n", mystrlen(buf));
////	return 0;
////}
//
////7. 有一字符串,包含n个字符。写一函数,将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。
////#include<stdio.h>
////#include<string.h>
////void mystrcpy(char *p1,char *p2,int m)
////{
////	char * pt1=p1+(m-1);
////	char * pt2=p2;
////	for(;*pt1!='\0';pt1++,pt2++)
////	{
////		*pt2=*pt1;
////	}
////	*pt2='\0';
////}
////int main()
////{
////	int m;
////	char string1[100]={0},string2[100]={0};
////	printf("输入一个字符串:\n");
////	gets(string1);
////	printf("输入要复制字符的开始次序：\n");
////	scanf("%d",&m);
////	mystrcpy(string1,string2,m);
////	printf("输出新字符串:%s\n",string2);
////	return 0;
////}
//
////更改1：
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char buf1[1024], buf2[1024],*ptr1,*ptr2;
////	int m; 
////	printf("Please enter a string: "); 
////	scanf_s("%s", buf1, 1024);
////	printf("Please enter a location to start copying: "); 
////	scanf_s("%d", &m); 
////	if (m < 0 || m > strlen(buf1)) 
////	{
////		//检测输入的位置是否合法 
////		printf("Illegal location entered\n");
////		return -1;
////	}
////	ptr1 = buf1 + m; // 从第m个位置开始复制新数据 
////	ptr2 = buf2;
////	while (*ptr1 != '\0')
////	{
////		*ptr2++ = *ptr1++; 
////	}
////	*ptr2 = '\0';//不要忘了字符串结尾标志 
////	printf("%s\n", buf2);
////	return 0;
////}
//
////8. 输入一行文字,找出其中大写字母、小写字母、空格、数字以及其他字符各有多少。
////#include<stdio.h>
////int main()
////{
////	char string[30]={0};
////	char *pt1=string;
////	int sum_upper=0,sum_lower=0,sum_blank=0,sum_digit=0,sum_other=0;
////	printf("输入一行文字：\n");
////	gets(string);
////	for(;*pt1!='\0';pt1++)
////	{
////		if(*pt1>='A'&&*pt1<='Z')
////			sum_upper++;
////		else if(*pt1>='a'&&*pt1<='z')
////			sum_lower++;
////		else if(*pt1==' ')
////			sum_blank++;
////		else if(*pt1>='0'&&*pt1<='9')
////			sum_digit++;
////		else
////			sum_other++;
////	}
////	printf("输出其中\n大写字母:%d\n小写字母:%d\n空格:%d\n数字:%d\n其他字符:%d\n",sum_upper,sum_lower,sum_blank,sum_digit,sum_other);
////	return 0;
////}
//
////改进1：
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char buf[1024];
////	int upper_count = 0, lower_count = 0, digit_count = 0, space_count = 0, other_count = 0;
////	char *ptr = buf; 
////	printf("Please enter a string: ");
////	gets_s(buf, 1024);
////	while (*ptr != '\0') 
////	{
////		if (*ptr >= 'A' && *ptr <= 'Z') 
////		{
////			//大写字母 
////			upper_count++;
////		}
////		else if (*ptr >= 'a' && *ptr <= 'z')
////		{
////			//小写字母
////			lower_count++;
////		}
////		else if (*ptr >= '0' && *ptr <= '9') 
////		{
////			//数字字符 
////			digit_count++; 
////		}
////		else if (*ptr== ' ')
////		{
////			//空格字符 
////			space_count++; 
////		}
////		else
////		{
////			//其他字符
////			other_count++;
////		}
////		ptr++;
////	}
////	printf("upper:%d; lower:%d; digit:%d; space:%d; other:%d\n",upper_count, lower_count, digit_count, space_count, other_count);
////	return 0;
////}
//
////9. 写一函数,将一个3x3的整型矩阵转置。
////解题思路： 
////矩阵转置就是行变列，列变行，说白了就是 arry[i][j] 转换为 arry[j][i] ; 但是需要注意的是，
////一. 因为行列个数可能并非相同，转换后行数或者列数变多了或者变少，因此不能直接转换。
////需要重新申请空间存储转换后的数据。
////二. 二维数组是线性扁平化存储的，无法确定列数的情况下传参后，
////在函数中使用时需要头指针向后偏移列数*第n行才能访问到第n行的数据。
////例如在函数中访问 arry[i][j] ,需要通过arry + col_num*i + j 方式进行访问。
////#include<stdio.h>
////int main()
////{
////	void transform(int arry1[][55],int arry2[][55],int row_count, int col_count);
////	int arry1[][55]={0},arry2[][55]={0};
////	int i,j,row_count,col_count;
////	printf("输入整形矩阵的行号和列号分别为：\n");
////	scanf("%d%d",&row_count,&col_count);
////	printf("输入整形矩阵a：\n");
////	for(i=0;i<row_count;i++)
////	{
////		for(j=0;j<col_count;j++)
////		{
////			scanf("%d",&arry1[i][j]);
////		}
////	}
////	printf("输出整形矩阵a：\n");
////	for(i=0;i<row_count;i++)
////	{
////		for(j=0;j<col_count;j++)
////		{
////			printf("%3d ",arry1[i][j]);
////		}
////		printf("\n");
////	}
////	transform(arry1,arry2,row_count,col_count);
////	printf("输出转置后的整形矩阵b：\n");
////	for(i=0;i<col_count;i++)
////	{
////		for(j=0;j<row_count;j++)
////		{
////			printf("%3d ",arry2[i][j]);
////		}
////		printf("\n");
////	}
////	return 0;
////}
////void transform(int arry1[][55],int arry2[][55],int row_count, int col_count)
////{
////	int i,j;
////	for(i=0;i<row_count;i++)
////	{
////		for(j=0;j<col_count;j++)
////		{
////			arry2[j][i]=arry1[i][j];
////		}
////	}
////}
//
////更改2;
////#include <stdio.h>
////#include <stdlib.h>//int **arry,(int *)*arry,指向int型指针的指针变量，使arry指向int *类型
////int **transform(int **arry, int row_count, int col_count)//指向函数类型为int *的函数
////{
////	//列变行，行变列，则行的个数是以前列的个数，列的个数是以前行的个数 
////	int **p = NULL;
////	//矩阵中有多少行，取决于以前有多少列，然后申请地址空间 
////	p = (int **)malloc(sizeof(int *) * col_count);//sizeof(int *),col_count列的数量
////	for (int i = 0; i < col_count; i++)//列的存储空间
////	{
////		//一行中有多少列，取决于以前有多少行，然后申请空间 
////		p[i] = (int *)malloc(sizeof(int) * row_count);
////	}//p数组的元素为地址
////	for (int i = 0; i < col_count; i++) 
////	{
////		for (int j = 0; j < row_count; j++)
////		{
////			//二维数组的存储是扁平化的， 访问第j行第i列的数据，应该是 arry + j*列数 + i
////		    //j是新数组的列，但是是源数组的行 
////			p[i][j] = (arry + col_count * j)[i];
////		}
////	}
////	return p;
////}
////int main()
////{
////	int arry[3][4];
////	printf("Please enter a 3 x 4 matrix: \n"); 
////	for (int i = 0; i < 3; i++)
////	{
////		for (int j = 0; j < 4; j++)
////		{
////			scanf_s("%d", &arry[i][j]);
////		}
////	}
////	int **p = transform(arry, 3, 4);
////	printf("\n");
////	for (int i = 0; i < 4; i++) 
////	{
////		for (int j = 0; j < 3; j++)
////		{
////			printf("%d ", p[i][j]);
////		}
////		free(p[i]); 
////		// 释放二级指针中每个一级指针申请的空间 
////		printf("\n");
////	}
////	free(p);
////	//释放总体二级指针的空间 
////	system("pause");
////	return 0;
////}
////很难理解！！！
//
////更改4：
////#include<stdio.h>
////int main()
////{
////	void move(int * pointer);
////	int a[3][3],*p,i;
////	printf("input matrix:\n");
////	for(i=0;i<3;i++)
////		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
////	p=&a[0][0];
////	move(p);
////	printf("Now,matrix:\n");
////	for(i=0;i<3;i++)
////	{
////		printf("%d %d %d",a[i][0],a[i][1],a[i][2]);
////	    printf("\n");
////	}
////	return 0;
////}
////void move(int * pointer)
////{
////	int i,j,t;
////	for(i=0;i<3;i++)
////		for(j=i;j<3;j++)
////		{
////			t=*(pointer+3*i+j);
////			*(pointer+3*i+j)=*(pointer+3*j+i);
////			*(pointer+3*j+i)=t;
////		}
////}
//	
//
////更改5：
////#include <stdio.h>
////#include <stdlib.h>
////void input(int *num);                             //定义输入函数
////void print(int *num);                             //定义输出函数
////void trans(int *num);                             //定义转置函数
////int main()
////{
////    int *number;
////    number=(int *)calloc(3, 3*sizeof(int));       //分配数组空间
////    input(number);                                //调用输入函数
////    trans(number);                                //调用转置函数
////    print(number);                                //调用输出函数
////    system("pause");
////    return 0;
////}
//////输入函数
////void input(int *num)
////{
////    int *p;
////    for (p=num, printf("Please enter array: "); p<num+9; scanf("%d", p++));
////}
//////输出函数
////void print(int *num)
////{
////    int *p, i;
////    for (p=num, i=0, printf("New Array:\n"); p<num+9; printf("%d ", *p++), i++)
////        if (i&&i%3==0) printf("\n");
////    printf("\n");
////}
//////转置函数
////void trans(int *num)
////{
////    int *p, i, temp;
////    for (p=num, i=0; i<9; i++)
////	{
////        if (i==1||i==5) temp=*(p+i), *(p+i)=*(p+i+2), *(p+i+2)=temp;
////        else if (i==2) temp=*(p+i), *(p+i)=*(p+i+4), *(p+i+4)=temp;
////    }
////}
//
////更改6：
////C程序设计第四版（谭浩强）
////章节：第八章 善于利用指针 
////题号：8.9
////题目:写一函数，将一个3*3的整型矩阵转置。
////#include <stdio.h>
////void convert(int (*p)[3],int (*q)[3])	//定义行指针 
////{
////	int i,j;
////	for(i=0;i<3;i++)
////		for(j=0;j<3;j++)
////			*(*(q+j)+i)=*(*(p+i)+j);
////}
////int main()
////{
////	int a[3][3],b[3][3],i,j;
////	printf("input 3*3 matrix:\n");
////	for(i=0;i<3;i++)
////		for(j=0;j<3;j++)
////			scanf("%d",&a[i][j]);
////	convert(a,b);
////	printf("after convert:\n");
////	for(i=0;i<3;i++)
////	{
////		for(j=0;j<3;j++)
////			printf("%d ",b[i][j]);
////		printf("\n");
////	}
////	return 0;
//// } 
//
////10. 将一个5x5的矩阵中最大的元素放在中心,4个角分别放4个最小的元素
////(顺序为从左到右,从上到下依次从小到大存放),写一函数实现之。用main函数调用。 
////解题思路： 将二维数组当做一维数组进行处理比较方便，而二维数组本身就是扁平化存储，
////所以直接使用首地址即可。
////先遍历找到最大值，将其与中间数字交换，而中间数字的下标就是数字总数除以2；
////其次寻找四次最小值，每次寻找的时候将最小值的下标记录起来，
////前提是这个数字如果已经是选中的最小数字之一，则需要跳过，也就是只跟剩余的数字作比较。
////（第二次开始遍历找最小数字的时候，千万不能与第一个最小数进行比较，否则永远都只有一个最小数）
////#include<stdio.h>
////#include<stdlib.h>
////void transform(int *arry, int col_row)
////{
////	int i,j,k,tmp;
////	int min_idx[4],min_tmp;
////	int max = arry[0],max_idx,center_idx;
////	//找到最大值
////	for (i = 0; i < col_row * col_row; i++)
////	{
////		if (max < arry[i])
////			max = arry[i];
////		//找出最大数 
////		max_idx = i;
////	}
////	//行列相乘得到总数量，除以2后加1则为中心点（暂时不考虑偶数的情况）
////	center_idx = (col_row * col_row) / 2;
////	tmp = arry[center_idx]; 
////	arry[center_idx] = arry[max_idx];
////	arry[max_idx] = tmp; 
////	//找到四个最小值,min_idx[4]
////	for (i = 0; i < 4; i++) 
////	{
////		//循环4次获取到最小值
////		min_tmp = arry[col_row * col_row - 1];
////		for (j = 0; j < col_row * col_row; j++)
////		{
////			//遍历所有数据，逐个比较获取最小值
////			k = 0;
////			for (; k < i; k++)
////			{
////				// 但是要注意如果某个下标的数据已经是获取过的最小值,则不能进行判断
////				//（因为这个肯定是最小的）
////				if (j == min_idx[k]) //min_idx[k]
////					break;
////			}
////			if (k != i) 
////			{
////				continue;
////			}
////			//k和i不同表示j这个坐标已经是找到的最小的几个数字之一，则找下一个判断
////			if (min_tmp > arry[j]) 
////			{
////				// 相当于在剩下的数中找到最小的那个数字 
////				min_tmp = arry[j];
////				min_idx[i] = j;
////				//并且记录这个数字的位置 
////			}
////		}
////	}
////	int change_idx[4];
////	//先计算四个角的下标，便于后边进行交换 
////	change_idx[0] = 0;
////	//第一个要置换的数据的下标，也就是左上角 
////	change_idx[1] = col_row - 1;
////	//第二个要置换的数据的下标，也就是右上角
////	change_idx[2] = col_row * (col_row - 1);
////	//第一个要置换的数据的下标，也就是左下角 
////	change_idx[3] = (col_row * col_row) - 1;
////	//第一个要置换的数据的下标，也就是右下角 
////	for (int i = 0; i < 4; i++) 
////	{
////		int tmp = arry[change_idx[i]]; 
////		arry[change_idx[i]] = arry[min_idx[i]];
////		arry[min_idx[i]] = tmp;
////	}
////	return ;
////}
////int main()
////{
////	int arry[5][5];
////	printf("Please enter a 5x5 matrix: \n");
////	for (int i = 0; i < 5; i++) 
////	{
////		for (int j = 0; j < 5; j++) 
////		{
////			scanf_s("%d", &arry[i][j]);
////		}
////	}
////	transform(*arry, 5);
////	//将二维数组当做一维数组传入处理，并且传入行列数 
////	printf("\n");
////	for (int i = 0; i < 5; i++) 
////	{
////		for (int j = 0; j < 5; j++)
////		{
////			printf("%d ", arry[i][j]);
////		}
////		printf("\n");
////	}
////	system("pause");
////	return 0;
////}
//
////更改1：
////#include<stdio.h>
////int main()
////{
////
////	return 0;
////}
////void change(int *p)  //交换函数
////{
////	int i,j,temp;
////	int * pmax,* pmin;
////	pmax=p;
////	pmin=p;
////	for(i=0;i<5;i++)
////	{
////		for(j=j;j<5;j++)
////		{
////			if(*pmax<*(p+5*i+j))
////				pmax=p+5*i+j;
////			if(*pmin>*(p+5*i+j))
////				pmin=p+5*i+j;
////		}
////	}
////}

//11. 在主函数中输入10个等长的字符串。用另一函数对它们排序。
//然后在主函数输出这10个已排好序的字符串。
//解题思路： 排序方式与数字比较没什么不同，先遍历比较找出最大的字符串，
//与第一个字符串进行交换，然后剩下的进行比较找出最大的字符串与第二个交换..
//需要主机的就是字符串的比较采用strcmp接口，返回值大于0表示第一个字符串大于第二个字符串
//#include<stdio.h>
//#include<string.h>
//void sort(char s[10][6])
//{
//	int i,j;
//	char *p,temp[10];
//	p=temp;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9-i; j++)
//		{
//			if (strcmp(s[j], s[j+1])> 0)
//			{
//				strcpy(p, s[j]);
//				strcpy(s[j],s[j+1]);
//				strcpy(s[j+1],p);
//			}
//		}
//	}
//}
//int main()
//{
//	int i;
//	char str[10][6];
//	printf("input 10 strings:\n");
//	for(i=0;i<10;i++)
//		scanf("%s",str[i]);
//	sort(str);
//	printf("Now,the sequence is:\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%s\n",str[i]);
//	}
//	return 0;
//}

//更改1：
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void sort(char (*s)[6]);
//	int i;
//	char str[10][6];
//	char (* p)[6];
//	printf("input 10 strings:\n");
//	for(i=0;i<10;i++)
//		scanf("%s",str[i]);
//	p=str;
//	sort(p);
//	printf("Now,the sequence is:\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%s\n",str[i]);
//	}
//	return 0;
//}
//void sort(char (*s)[6])
//{
//	int i,j;
//	char temp[6],*t=temp;
//	for(i=0;i<9;i++)
//	{
//		for(j=0;j<9-i;j++)
//		{
//			if(strcmp(s[j],s[j+1])>0)
//			{
//				strcpy(t,s[j]);
//				strcpy(s[j],s[j+1]);
//				strcpy(s[j+1],t);
//			}
//		}
//	}
//}

//12. 用指针数组处理上一题目,字符串不等长。
//#include<stdio.h>
//#include<string.h>
//void sort(char *s[10]) //char *s[10],指针数组，数组里有10个char *型的元素
//{
//	int i, j;
//	char * tmp;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9-i; j++)
//		{
//			if (strcmp(s[j], s[j+i])> 0)
//			{
//				tmp = s[i]; //指针的好处在于直接通过赋值可以改变指向 
//				s[i] = s[j]; //只要交换了字符串的地址就实现了字符串的交换
//				s[j] = tmp;//因此通过指针指向的交换就能够实现数组中字符串的排序 
//			}
//		}
//	}
//}
//int main()
//{
//	int i;
//	char *p[10],str[10][20];
//	for(i=0;i<10;i++)
//		p[i]=str[i];
//	printf("Please enter ten strings:\n"); 
//	for (i = 0; i < 10; i++) 
//	{
//		scanf("%s", str[i]); 
//	}
//	sort(p);
//	printf("\n");
//	printf("Now,the sequence is:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%s\n", p[i]); 
//	}
//	return 0;
//}

//13. 写一个用矩形法求定积分的通用函数,分别求$\int_0^1 sinxdx, \quad\int_0^1 cosxdx, \quad \int_0^1 e^xdx,$ ,
//说明: sin,cos,exp 函数已在系统的数学函数库中，程序开头要用#include <math. h>。
//解题思路： 矩形法，学过高等数学就知道化曲为直的思想。将定积分化为多个函数连续的和。
//基本思想是将区间[a，b]化成n等分，当n越大的时候结果越准确。图形化成一小块一小块的矩形。
//底边长都为(b-a)/n.高为每个等分点的函数值。然后将每个矩形的面积相加即为所求。
//因为被分成n等分，就可以认为每一等分是一个矩形，那么每一矩形的面积为：
//每一个矩形面积为：Sn=f(x)(b-a)/n ；总面积为：S=S1+S2+…+Sn；
//具体计算过程根据公式套即可这里主要在于函数指针的应用，将函数作为参数传递给另一个函数，
//在另一个函数中进行调用的方式向外提供统一接口，而接口内的处理方式随着传入的函数而不同。
//#include<stdio.h>
//#include<math.h>
//double integral(double(*handler)(double), double a, double b, int n)
//{
//	double i,s = 0, h = (b - a) / n;
//	for (i = a; i <= b; i += h)
//	{
//		s += handler(i) * h; 
//	}
//	return s;
//}
//int main()
//{
//	double a, b; 
//	int n = 200000; // 区间划分个数 
//	int func_idx; // 计算函数选择id 
//	printf("Please enter the lower and upper limit of integration:");
//	scanf_s("%lf %lf", &a, &b);
//	printf("Please enter specific calculation function(1-sin/2-cos/3-exp): ");
//	scanf_s("%d", &func_idx);
//	switch (func_idx) 
//	{
//
//	    case 1:printf("The integral of sin(x) is:%lf\n", integral(sin, a, b, n));
//		    break;
//	    case 2:printf("The integral of cos(x) is:%lf\n", integral(cos, a, b, n)); 
//			break;
//		case 3:printf("The integral of exp(x) is:%lf\n", integral(exp, a, b, n));
//			break; 
//		default: printf("function id error\n"); 
//			return -1; 
//	}
//	return 0;
//}

//14. 将n个数按输入时顺序的逆序排列,用函数实现。
//解题思路： 定义两个指针，一个指向数组头部，一个指向数组尾部，头部每次+1，尾部每次-1；
//则在头部小于尾部的情况下进行数据交换即可。
//#include<stdio.h>
//#include<math.h>
//void reorder(int *arry, int n)
//{
//	int tmp;
//	int *start = arry;
//	int *end = arry + n - 1; 
//	for (; start < end; start++, end--)
//	{
//		tmp = *start;
//		*start = *end;
//		*end = tmp;
//	}
//}
//int main()
//{
//	int arry[10];
//	int i;
//	printf("Please enter ten numbers:"); 
//	for (i = 0; i < 10; i++) 
//	{
//		scanf_s("%d", &arry[i]); 
//	}
//	reorder(arry, 10);
//	printf("\n"); 
//	for (i = 0; i < 10; i++) 
//	{ 
//		printf("%d ", arry[i]); 
//	}
//	printf("\n"); 
//	return 0;
//}

//15. 有一个班4个学生,5门课程。 ①求第1门课程的平均分;
//②找出有两门以上课程不及格的学生,输出他们的学号和全部课程成绩及平均成绩;
//③找出平均成绩在90分以上或全部课程成绩在85分以上的学生。
//分别编3个函数实现以上3个要求。
//解题思路： 4个学生，5门课程就是一个4x5的二维数组，
//1. 求第一门课的平均分，就是将第0列数据相加除以学生人数
//2. 遍历每个学生的成绩，判断不及格次数，若大于2则输出信息即可
//3. 统计每个学生总成绩，以及对每门课程成绩进行判断即可
//#include<stdio.h>
//float avg(int arry[][5], int n)
//{
//	int i;
//	float sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arry[i][0];
//	}
//	printf("Average of course 1:%f\n", (sum / n)); 
//	return (sum / n);
//}
//void fail(int arry[][5], int n)
//{
//	int sum,fail_count,i,j;
//	printf("Information on students who fail in more than two courses: ");
//	for (i = 0; i < n; i++)
//	{
//		sum = 0;
//		fail_count = 0;
//		for (j = 0; j < 5; j++) 
//		{
//			if (arry[i][j] < 60) 
//			{
//				fail_count++;
//			}
//		}
//		if (fail_count <= 2)
//		{
//			continue; 
//		}
//		printf("seq:%d ",i + 1);
//		printf("score: ");
//		for (j = 0; j < 5; j++) 
//		{
//			sum += arry[i][j];
//			printf("%d ", arry[i][j]);
//		}
//		printf("avg:%d ", sum / 5);
//		printf("\n");
//	}
//}
////找出平均成绩在90分以上或全部课程成绩在85分以上的学生。
//void excellent(int arry[][5], int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//	    int sum = 0, count = 0;
//		for (j = 0; j < 5; j++)
//		{
//			sum += arry[i][j]; //计算总分用于计算平均分
//		    if (arry[i][j] > 85) 
//			{
//				count++; //若每门课都大于85	则count总会与j同步++ 
//			}
//		}
//		if ((sum / 5) > 90 || count == j)
//		{
//			printf("Excellent students: %d\n", i + 1);
//		}
//	}
//	return;
//}
//int main()
//{
//	int arry[4][5]={0},i,j;
//	printf("Please enter a 4x5 matrix:\n");
//	for (i = 0; i < 4; i++) 
//	{
//		for (j = 0; j < 5; j++) 
//		{
//			scanf_s("%d", &arry[i][j]);
//		}
//	}
//	avg(arry, 4); 
//	fail(arry, 4);
//	excellent(arry, 4);
//	printf("\n"); 
//	return 0;
//}

////16. 输入一个字符串,内有数字和非数字字符,
////例如：A123x456 17960? 302tab5876，
////将其中连续的数字作为一个整数,依次存放到一数组a中。
////例如,123放在a[0],456放在a[1].....统计共有多少个整数,并输出这些数。
////遇到数字字符，则开始统计连续数字字符的个数，统计完毕后，
////则从右往左每次乘以10（除了个位数）作为数字的单位，最终相加得到数字；
////然后越过这个数字，从后边继续查找。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void count_digit(char *str);
//	char str[100]={0};
//	printf("输入一个字符串：\n");
//	gets(str);
//	printf("输出数字：\n");
//	count_digit(str);
//	return 0;
//}
//void count_digit(char *str)
//{
//	int digit[32], count = 0;
//	char *ptr = str; 
//	int i = 0, str_len = strlen(str);
//	int len,sum,unit,j;
//	while (i < str_len)
//	{
//		if (*(ptr+i) >= '0' && *(ptr+i) <= '9')
//		{
//			len = 1;//用于统计连续数字的个数
//			while (*(ptr + i + len) >= '0' && *(ptr + i+ len) <= '9' && (i+len) < str_len)
//			{
//				//找出从当前位置连续数字的个数 
//				len++; 
//			}
//			sum = *(ptr + i + len - 1) - '0';//先获取个位数的数据
//			unit = 1;//每一位的单位，从十位开始每次乘以10作为单位
//			for (j = len - 2; j >= 0; j--) 
//			{
//				//从右往左逐个处理
//				unit *= 10;
//				sum += (*(ptr + i + j) - '0') * unit; 
//			}
//			digit[count++] = sum;
//			i += len; // i需要加上len的长度，越过这个数字，防止一个连续数字中的字符重复处理 
//			continue;
//		}
//		i++; 
//	}
//	for ( i = 0; i < count; i++)
//	{
//		printf("%d ", digit[i]);
//	}
//	return;
//}

//17. 写一函数，实现两个字符串的比较。
//即自己写一个strcmp函数,函数原型为int strcmp(char * p1 ,char * p2);
//设p1指向字符串s1, p2指向字符串s2。
//要求当s1=s2时,返回值为0;
//若s1≠s2,返回它们二者第1个不同字符的ASCII码差值(如"BOY"与"BAD" ,第2个字母不同,0与A之差为79- 65=14)。
//如果s1>s2,则输出正值;如果s1<s2,则输出负值。
//#include<stdio.h>
//int main()
//{
//	int mystrcmp(char * p1 ,char * p2);
//	char str1[30]={0},str2[30]={0};
//	printf("输入字符串1：\n");
//	gets(str1);
//	printf("输入字符串2：\n");
//	gets(str2);
//	printf("输出两个字符串比较的值为：%d\n",mystrcmp(str1,str2));
//	return 0;
//}
//int mystrcmp(char *str1, char *str2)
//{
//	char *ptr1 = str1;
//	char *ptr2 = str2;
//	int res;
//	while (*ptr1 != '\0' && *ptr2 != '\0') 
//	{
//		if (*ptr1 != *ptr2)
//		{
//			res = *ptr1 - *ptr2;
//			break;
//		}
//		ptr1++;
//		ptr2++;
//	}
//	if (*ptr1 == '\0' || *ptr2 == '\0') 
//	{
//		//注意一个字符串到达结尾或者两个都到达结尾的情况
//		res = *ptr1 - *ptr2;
//	}
//	return res;
//}

//改进1：
//#include<stdio.h>
//int main()
//{
//	char buf1[1024] = { 0 };
//	char buf2[1024] = { 0 };
//	while (1) 
//	{
//		printf("Please enter two strings:\n");
//		gets_s(buf1, 1024);
//		gets_s(buf2, 1024);
//		printf("mystrcmp:%d", mystrcmp(buf1, buf2));
//		printf("\n");
//	}
//    return 0;
//}
//int mystrcmp(char *str1, char *str2)
//{
//	char *ptr1 = str1;
//	char *ptr2 = str2;
//	int res;
//	while (*ptr1 != '\0' && *ptr2 != '\0') 
//	{
//		if (*ptr1 != *ptr2)
//		{
//			res = *ptr1 - *ptr2;
//			break;
//		}
//		ptr1++;
//		ptr2++;
//	}
//	if (*ptr1 == '\0' || *ptr2 == '\0') 
//	{
//		//注意一个字符串到达结尾或者两个都到达结尾的情况
//		res = *ptr1 - *ptr2;
//	}
//	return res;
//}

//18. 编一程序,输入月份号,输出该月的英文月名。例如，输人3,则输出"March" ,要求用指针数组处理。 
//解题思路： 首先定义字符串指针数字，数组中每一个元素都存放一个字符串指针，每个指针指向不同字符串的位置。
//则输入月份数字后，根据下标获取对应月份字符串的地址即可答案.
//#include<stdio.h>
//int main()
//{
//	int month;
//	char* Month[12] = { "January","February","March","April","May","June", "July","August","September","October","November","December" };
//	while (1) 
//	{
//		printf("Please enter the month: "); 
//		scanf_s("%d", &month);
//		if (month < 1 || month>12)
//		{ 
//			printf("Input error, Month should be greater than 0 and less than 12\n");
//		}
//		printf("%s\n", Month[month - 1]);
//	}
//	return 0;
//}

//19.(1) 编写一个函数new,对n个字符开辟连续的存储空间,此函数应返回一个指针(地址),指向字符串开始的空间。
//new(n)表示分配n个字节的内存空间。(2)写一函数free,将前面用new函数占用的空间释放。free(p)表示将p(地址)指向的单元以后的内存段释放。
//#include<stdio.h>
//#include<stdlib.h>
////new(n)表示分配n个字节的内存空间
//void * mynew(int n)
//{
//	return malloc(n);
//}
//void myfree(char *p)
//{
//	return free(p);
//}
//int main()
//{
//	int num; char *str = NULL; 
//	printf("Please enter number: ");
//	scanf_s("%d", &num);
//	printf("before new p--%p:%s\n", str, str);//申请空间之前，查看指针的地址和指向空间数据
//	str = (char*)mynew(num);
//	printf("after new p--%p:%s\n", str, str);//申请空间之后，查看指针的地址和指向空间数据 
//	printf("Please enter a string:"); 
//	scanf_s("%s", str, num);
//	printf("before free p--%p:%s\n", str, str);//释放空间之前，查看指针的地址和指向空间数据 
//	myfree(str);
//	printf("after free p--%p:%s\n", str, str);//释放空间之后，查看指针的地址和指向空间数据 
//	return 0;
//}

//更改1：
//#include<stdio.h>
//#define NEWSIZE 100
//char newbuf[NEWSIZE];
//char * newp=newbuf;
//char * mynew(int n)
//{
//	if(newp+n<=newbuf+NEWSIZE)
//	{
//		newp+=n;
//		return newp-n;
//	}
//	else
//		return NULL;
//}

//20. 用指向指针的指针的方法对5个字符串排序并输出。
//解题思路：指向指针的指针其实就是二级指针，使用二级指针的保存一级指针的地址，让这个一级指针指向具体的数据空间；
//定义一个字符串指针数组包含5个元素，每个元素可以保存一个字符串的首地址，而这个地址指向的是具体的字符串数据空间，
//通过指针访问实现对指向空间内的字符串进行比较排序交换即可。
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void sort(char *s[10])
//{
//	int i, j;
//	char *tmp;
//	for (i = 0; i <9; i++)
//	{
//		for (j =0; j < 9-i; j++)
//		{
//			if (strcmp(s[j], s[j+1])> 0)
//			{
//				//s[i]保存的就是一个字符串的首地址 
//				tmp = s[j]; //指针的好处在于直接通过赋值可以改变指向 
//				s[j] = s[j+1];//只要交换了字符串的地址就实现了字符串的交换 
//				s[j+1] = tmp;//因此通过指针指向的交换就能够实现数组中字符串的排序 
//			}
//		}
//	}
//}
//int main()
//{
//	int i;
//	char *str[5];//定义字符串指针数组，可以分别保存指向5个字符串所在空间首地址 
//	printf("Please enter five strings:\n"); 
//	for (i = 0; i < 5; i++) 
//	{
//		str[i]= malloc(32);//为每一个指针分配空间 
//		scanf_s("%s", str[i], 32);
//	}
//	sort(str);
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{ 
//		printf("%s\n", str[i]);
//		free(str[i]);
//	}
//	return 0;
//}

//21. 用指向指针的指针的方法对n个整数排序并输出。要求将排序单独写成一个函数。n个整数在主函数中输入,最后在主函数中输出。
//解题思路： 指向指针的指针其实就是二级指针，使用二级指针的保存一级指针的地址，让这个一级指针指向具体的数据空间。排序就是按照每个元素指针指向空间中的数据进行比对排序即可。
//#include<stdio.h>
//
//void sort(int **p,int n)
//{
//	int i,j;
//	int * temp;
//	for(i=0;i<n;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(**(p+i)>**(p+j))
//			{
//				temp=*(p+i);
//				*(p+i)=*(p+j);
//				*(p+j)=temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i,n,data[20],*pt[20],**p;
//	printf("input n:\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		pt[i]=&data[i];
//	}
//	printf("输入%d个整数\n",n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",pt[i]);
//	}
//	p=pt;
//	sort(p,n);
//	printf("Now,the sequence is:\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",*pt[i]);
//	}
//	printf("\n");
//	return 0;
//}