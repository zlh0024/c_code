#define _CRT_SECURE_NO_WARNINGS 1
//例8.1：通过指针变量访问整型变量
//#include<stdio.h>
//int main()
//{
//	int a=100,b=10;
//	int * pointer_1,* pointer_2;
//	pointer_1=&a;
//	pointer_2=&b;
//	printf("a=%d,b=%d\n",a,b);
//	printf("* pointer_1=%d,* pointer_2=%d\n",* pointer_1,*pointer_2);
//	return 0;
//}

//例8.2：输入a和b两个整数，按先大后小的顺序输出a,b
//#include<stdio.h>
//int main()
//{
//	int a,b,tmp;
//	printf("输入a,b两个整数分别为：\n");
//	scanf("%d%d",&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	if(a<b)
//	{
//		tmp=a;
//		a=b;
//		b=tmp;
//	}
//	printf("先大后小的顺序输出为：%d,%d",a,b);
//	return 0;
//}

//更改1：使用指针为：
//#include<stdio.h>
//int main()
//{
//	int * p1,* p2,* p,a,b;
//	printf("输入a,b两个整数分别为：\n");
//	scanf("%d%d",&a,&b);
//	p1=&a;
//    p2=&b;
//	if(a<b)
//	{
//		//p=p1;
//		//p1=p2;
//		//p2=p;
//        p1=&b;
//        p2=&a;
//	}
//	printf("a=%d,b=%d\n",a,b);
//	printf("max=%d,min=%d\n",* p1,* p2);
//	return 0;
//}

//例8.3：题目要求同8.2，现用函数处理，而且指针类型的数据做函数参数
//#include<stdio.h>
//int main()
//{
//	void swap(int * p1,int * p2);
//	int a,b;
//	int * pointer_1,* pointer_2;
//	printf("输入a,b两个整数分别为：\n");
//	scanf("%d%d",&a,&b);
//	pointer_1=&a;
//	pointer_2=&b;
//	if(a<b)
//		swap(pointer_1,pointer_2);
//	printf("max=%d,min=%d",a,b);
//	return 0;
//}
//void swap(int * p1,int * p2)
//{
//	int temp;
//	temp=* p1;
//    * p1=* p2;
//	* p2=temp;
//}

//例8.8：将数组a中n个整数按相反顺序取反
//#include<stdio.h>
//#define M 3
//int main()
//{
//	void inv(int a[],int n);
//	int i,n,a[M]={0};
//	printf("输入%d个整数：\n",M);
//	for(i=0;i<M;i++)
//		scanf("%d",&a[i]);
//	for(i=0;i<M;i++)
//		printf("%d ",a[i]);
//	printf("\n");
//	n=M;
//	inv(a,n);
//	printf("按反序存放为：\n");
//	for(i=0;i<M;i++)
//		printf("%d ",a[i]);
//    printf("\n");
//	return 0;
//}
//void inv(int a[],int n)
//{
	//int right=n-1;
	//int left=0;
	//int tmp;
	//for(;left<right;left++,right--)
	//{
	//	tmp=a[left];
	//	a[left]=a[right];
	//	a[right]=tmp;
	//}
//	int temp,i,j,m=(n-1)/2;
//	for(i=0;i<=m;i++)
//	{
//		j=n-1-i;
//		temp=a[i];
//		a[i]=a[j];
//		a[j]=temp;
//	}
//}

//改进1：
//#include<stdio.h>
//#define M 3
//int main()
//{
//	void inv(int * a,int n);
//	int i,n,a[M]={0};
//	printf("输入%d个整数：\n",M);
//	for(i=0;i<M;i++)
//		scanf("%d",&a[i]);
//	for(i=0;i<M;i++)
//		printf("%d ",a[i]);
//	printf("\n");
//	n=M;
//	inv(a,n);
//	printf("按反序存放为：\n");
//	for(i=0;i<M;i++)
//		printf("%d ",a[i]);
//    printf("\n");
//	return 0;
//}
//void inv(int * a,int n)
//{
//	int *p,temp,*i,*j,m=(n-1)/2;
//	i=a;
//	j=a+n-1;
//	p=a+m;
//	for(;i<=p;i++,j--)
//	{
//		temp=*i;
//		*i=*j;
//		*j=temp;
//	}
//}

//例8.10：用指针方法对10个整数按由大到小顺序排序
//#include<stdio.h>
//int main()
//{
//	void sort(int a[],int n);
//	int i,a[10]={0},* p;
//	p=a;
//	printf("输入数组a的元素：\n");
//	for(i=0;i<10;i++,p++)
//		scanf("%d",p);
//	printf("\n");
//	p=a;
//	sort(p,10);
//	printf("输出数组b的元素：\n");
//	for(p=a;p<a+10;p++)
//		printf("%d ",* p);
//	printf("\n");
//	return 0;
//}
//void sort(int a[],int n)
//{
//	int i,j,tmp;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=0;j<n-i-1;j++)
//		{
//			if(a[j]<a[j+1])
//			{
//				tmp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=tmp;
//			}
//		}
//	}
//}

//例8.11：输出二维数组的有关数据（地址和元素的值）
//#include<stdio.h>
//int main()
//{
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//	printf("%d,%d\n",a,*a);
//	printf("%d,%d\n",a[0],*(a+0));
//	printf("%d,%d\n",&a[0],&a[0][0]);
//	printf("%d,%d\n",a[1],a+1);
//	printf("%d,%d\n",&a[1][0],*(a+1)+0);
//	printf("%d,%d\n",a[2],*(a+2));
//	printf("%d,%d\n",&a[2],a+2);
//	printf("%d,%d\n",a[1][0],*(*(a+1)+0));
//	printf("%d,%d\n",*a[2],*(*(a+2)+0));
//	return 0;
//}

//指向数组元素的指针变量
//例8.12： 有一个3*4的二维数组，要求用指向元素的指针变量输出二维数组名个元素的值
//#include<stdio.h>
//int main()
//{
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int *p;
//	for(p=a[0];p<a[0]+12;p++)
//	{
//		if((p-a[0])%4==0)
//			printf("\n");
//		printf("%4d",*p);
//	}
//	printf("\n");
//	return 0;
//}

//例8.13：输出二维数组任一行任一列元素的值
//#include<stdio.h>
//int main()
//{
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int (*p)[4],i,j;
//	p=a;
//	printf("输入行和列分别为：");
//	scanf("%d%d",&i,&j);
//	printf("a[%d,%d]=%d",i,j,*(*(p+i)+j));
//	printf("\n");
//	return 0;
//}

//例8.14：有一个班，三个学生，各学4门课，计算总平均分数以及第n个学生的成绩。
//#include<stdio.h>
//int main()
//{
//	void average(float * p,int n);
//	void search(float (*p)[4],int n);
//	float score[3][4]={65,67,70,60,80,87,90,81,90,99,100,98};
//    average(score[0],12);
//	search(score,2);
//	return 0;
//}
//void average(float * p,int n)
//{
//	float sum=0,aver;
//	float * p_end=p+n-1;
//	for(;p<=p_end;p++)
//	{
//        sum+=*p;
//	}
//	aver=sum/n;
//	printf("aver=%5.2f\n",aver);
//}
//void search(float (*p)[4],int n)
//{
//	int i;
//	printf("The score of NO.%d are:\n",n);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f ",*(*(p+n)+i));
//	}
//	printf("\n");
//}

//例8.15：查找有一门以上课程不及格的学生，输出他们的全部课程的成绩
//#include<stdio.h>
//int main()
//{
//	void search(float (*p)[4],int n);
//	float score[3][4]={65,57,70,60,58,87,90,81,90,99,100,98};
//	search(score,3);
//	return 0;
//}
//void search(float (*p)[4],int n)
//{
//	int i,j,flag;
//	for(j=0;j<n;j++)
//	{
//		flag=0;
//		for(i=0;i<4;i++)
//	    {
//			if(*(*(p+j)+i)<60)
//				flag=1;
//	    }
//		if(flag==1)
//		{
//			printf("No.%d fails,his scores are:\n",j+1);
//			for(i=0;i<4;i++)
//		          printf("%5.2f ",*(*(p+j)+i));
//	        printf("\n");
//		}
//	}
//}

//例8.18：将字符串a复制为字符串b,然后输出字符串b
//#include<stdio.h>
//int main()
//{
//	void strcpy(char a[],char b[]);
//	char a[]="I am a student!",b[100]={0};
//	strcpy(a,b);
//	printf("%s\n",b);
//	return 0;
//}
//void strcpy(char a[],char b[])
//{
//	int i,j;
//	for(i=0,j=0;a[i]!='\0';i++,j++)
//	{
//		b[j]=a[i];
//	}
//}

//改进1：
//#include<stdio.h>
//int main()
//{
//	void strcpy(char a[],char b[]);
//	char a[]="I am a student!",b[100]={0};
//	strcpy(a,b);
//	printf("\n");
//	return 0;
//}
//void strcpy(char a[],char b[])
//{
//	int i;
//	for(i=0;*(a+i)!='\0';i++)
//	{
//		*(b+i)=*(a+i);
//	}
//	*(b+i)='\0';
//	printf("string a is:%s\n",a);
//	printf("string b is:");
//	for(i=0;b[i]!='\0';i++)
//	{
//		printf("%c",b[i]);
//	}
//}

//用指针变量
//#include<stdio.h>
//int main()
//{
//	void strcpy(char a[],char b[]);
//	char a[]="I am a student!",b[100]={0};
//	char *p1,*p2;
//	p1=a;
//	p2=b;
//	strcpy(p1,p2);
//	printf("string a is:%s\n",a);
//	printf("string b is:%s\n",b);
//	printf("\n");
//	return 0;
//}
//void strcpy(char *a,char *b)
//{
//	for(;*a!='\0';a++,b++)
//	{
//		*b=*a;
//	}
//	*b='\0';
//}

//例8.21：改变指针变量的值
//#include<stdio.h>
//int main()
//{
//	char *a="I love China!";
//	//char a[]={"I love China!"};//错误
//	a=a+7;
//	printf("%s\n",a);
//	return 0;
//}

//例8.22：用函数求整数a和b中的大者
//#include<stdio.h>
//int main()
//{
//	int max(int a,int b);
//	int a,b;
//	printf("输入a,b分别为：\n");
//	scanf("%d%d",&a,&b);
//	printf("a,b中最大值为：%d\n",max(a,b));
//	return 0;
//}
//int max(int a,int b)
//{
//	return (a>b?a:b);
//}

//使用函数指针
//#include<stdio.h>
//int main()
//{
//	int max(int a,int b);
//	int (* p)(int,int);
//	int a,b;
//	p=max;//函数名代表函数的起始地址
//	printf("输入a,b分别为：\n");
//	scanf("%d%d",&a,&b);
//	printf("a,b中最大值为：%d\n",(* p)(a,b));
//	return 0;
//}
//int max(int a,int b)
//{
//	return (a>b?a:b);
//}

//例8.23：输入两个整数，然后让用户选择1或2，
//选1时调用max函数，输出二者中的大数，选2时调用min函数，输出二者中的小数
//#include<stdio.h>
//int main()
//{
//  int max(int a,int b);
//  int min(int a,int b);
//	int a,b,n;
//	printf("please enter a and b:");
//	scanf("%d%d",&a,&b);
//	printf("please choose 1 or 2:");
//	scanf("%d",&n);
//	if(n==1)
//		printf("max=%d\n",max(a,b));
//	else if(n==2)
//		printf("min=%d\n",min(a,b));
//	return 0;
//}
//int max(int a,int b)
//{
//	return a>b?a:b;
//}
//int min(int a,int b)
//{
//	return a<b?a:b;
//}

//使用函数指针
//#include<stdio.h>
//int main()
//{
//	int max(int a,int b);
//	int min(int a,int b);
//	int (*p)(int,int);
//	int a,b,n;
//	printf("please enter a and b:");
//	scanf("%d%d",&a,&b);
//	printf("please choose 1 or 2:");
//	scanf("%d",&n);
//	if(n==1)
//	{
//		p=max;
//		printf("max=%d\n",(*p)(a,b));
//	}
//	else if(n==2)
//	{
//		p=min;
//		printf("min=%d\n",min(a,b));
//	}
//	return 0;
//}
//int max(int a,int b)
//{
//	return a>b?a:b;
//}
//int min(int a,int b)
//{
//	return a<b?a:b;
//}

//例8.24：有两个整数a和b,由用户输入1，2或3。如输入1，程序就给出a和b中的大者，
//输入2，就给出a和b中的小者，输入3，则求a和b之和
//#include<stdio.h>
//int main()
//{
//	int max(int a,int b);
//	int min(int a,int b);
//	int sum(int a,int b);
//	int (*p)(int,int);
//	int a,b,c,n;
//	printf("please enter a and b:");
//	scanf("%d%d",&a,&b);
//	printf("please choose 1,2 or 3:");
//	scanf("%d",&n);
//	if(n==1)
//		p=max;
//	else if(n==2)
//		p=min;
//	else if(n==3)
//		p=sum;
//	c=(*p)(a,b);
//	printf("a=%d,b=%d\n",a,b);
//	if(n==1)
//		printf("max=%d\n",c);
//	else if(n==2)
//		printf("min=%d\n",c);
//	else
//		printf("sum=%d\n",c);
//	return 0;
//}
//int max(int a,int b)
//{
//	return a>b?a:b;
//}
//int min(int a,int b)
//{
//	return a<b?a:b;
//}
//int sum(int a,int b)
//{
//	return a+b;
//}

//改进1：
//#include<stdio.h>
//int main()
//{
//	int fun(int a,int b,int(*p)(int,int));
//	int max(int a,int b);
//	int min(int a,int b);
//	int sum(int a,int b);
//	int a,b,c,n;
//	printf("please enter a and b:");
//	scanf("%d%d",&a,&b);
//	printf("please choose 1,2 or 3:");
//	scanf("%d",&n);
//	if(n==1)
//		fun(a,b,max);
//	else if(n==2)
//		fun(a,b,min);
//	else if(n==3)
//		fun(a,b,sum);
//	return 0;
//}
//int fun(int a,int b,int(*p)(int,int))
//{
//	printf("%d\n",(*p)(a,b));
//}
//int max(int a,int b)
//{
//	printf("max=");
//	return a>b?a:b;
//}
//int min(int a,int b)
//{
//	printf("min=");
//	return a<b?a:b;
//}
//int sum(int a,int b)
//{
//	printf("sum=");
//	return a+b;
//}

//例8.25：有a个学生，每个学生有b门课程的成绩。
//要求在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数来实现
//#include<stdio.h>
//#define a 2
//#define b 3
//int main()
//{
//	int score[a][b];
//	int i,j,n;
//	printf("enter the scores of student are:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//			scanf("%d",*(score+i)+j);
//		printf("\n");
//	}
//	printf("print the scores of student are:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//			printf("%3d",*(*(score+i)+j));
//		printf("\n");
//	}
//	printf("enter the number of student:");
//	scanf("%d",&n);
//	printf("print the scores of No.%d:\n",n+1);
//	for(i=0;i<b;i++)
//	    printf("%3d",*(*(score+n)+i));
//	printf("\n");
//	return 0;
//}

//改进1：
//#include<stdio.h>
//#define a 2
//#define b 3
//int main()
//{
//	float * search(float (*p)[b],int n);
//	float score[a][b]={0},* p;
//	int i,j,n;
//	printf("enter the scores of student are:\n");
//	for(i=0;i<a;i++)
//		for(j=0;j<b;j++)
//			scanf("%f",*(score+i)+j);
//	printf("print the scores of student are:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//			printf("%6.3f",*(*(score+i)+j));
//		printf("\n");
//	}
//	printf("enter the number of student:");
//	scanf("%d",&n);
//	p=search(score,n);
//	for(j=0;j<b;j++)
//			printf("%6.3f",*(p+j));
//	printf("\n");
//	return 0;
//}
//float * search(float (*p)[b],int n)
//{
//	float *pt;
//	pt=*(p+n);
//	return pt;
//}

//例8.26：找到其中不及格课程的学生及其学生号
//#include<stdio.h>
//#define a 2
//#define b 3
//int main()
//{
//	int score[a][b];
//	int i,j,flag;
//	printf("enter the scores of student are:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//			scanf("%d",*(score+i)+j);
//		printf("\n");
//	}
//	printf("print the scores of student are:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//			printf("%3d",*(*(score+i)+j));
//		printf("\n");
//	}
//	for(i=0;i<a;i++)
//	{
//		flag=0;
//		for(j=0;j<b;j++)
//			if(*(*(score+i)+j)<60)
//				flag=1;
//		if(flag==1)
//		{
//			printf("print the scores of No.%d:\n",i);
//			for(j=0;j<b;j++)
//			    printf("%5d",*(*(score+i)+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//改进1：
//#include<stdio.h>
//#define a 3
//#define b 4
//int main()
//{
//	float * search(float (*p)[b]);
//	float score[a][b],*p;
//	int i,j;
//	printf("enter the scores of student are:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//			scanf("%f",*(score+i)+j);
//		printf("\n");
//	}
//	printf("print the scores of student are:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//			printf("%5.2f  ",*(*(score+i)+j));
//		printf("\n");
//	}
//	for(i=0;i<a;i++)
//	{
//		p=search(score+i);
//		if(p==*(score+i))
//		{
//			printf("print the scores of No.%d:\n",i);
//			for(j=0;j<b;j++)
//			    printf("%5.2f  ",*(p+j));
//			printf("\n");
//		}
//	}
//	return 0;
//}
//float * search(float (*p)[b])
//{
//	int j;
//	float * pt;
//	pt=NULL;
//	for(j=0;j<b;j++)
//	{
//		if(*(*p+j)<60)
//			pt=* p;
//	}
//	return pt;
//}

//例8.27：将若干字符串按字母顺序（由小到大）输出
#include<stdio.h>
#include<string.h>
int main()
{
	void sort(char * name[],int n);
	void print(char * name[],int n);
	char * name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
	int n=5;
	sort(name,n);
	print(name,n);
	return 0;
}
void sort(char * name[],int n)
{
	char * temp;
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[k],name[j])>0)
				k=j;
		}
		if(k!=i)
		{
			temp=name[i];
			name[i]=name[k];
			name[k]=temp;
		}
	}
}
void print(char * name[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);
}