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
#include<stdio.h>
int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int (*p)[4],i,j;
	p=a;
	printf("输入行和列分别为：");
	scanf("%d%d",&i,&j);
	printf("a[%d,%d]=%d",i,j,*(*(p+i)+j));
	printf("\n");
	return 0;
}