#define _CRT_SECURE_NO_WARNINGS 1
//��8.1��ͨ��ָ������������ͱ���
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

//��8.2������a��b�������������ȴ��С��˳�����a,b
//#include<stdio.h>
//int main()
//{
//	int a,b,tmp;
//	printf("����a,b���������ֱ�Ϊ��\n");
//	scanf("%d%d",&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	if(a<b)
//	{
//		tmp=a;
//		a=b;
//		b=tmp;
//	}
//	printf("�ȴ��С��˳�����Ϊ��%d,%d",a,b);
//	return 0;
//}

//����1��ʹ��ָ��Ϊ��
//#include<stdio.h>
//int main()
//{
//	int * p1,* p2,* p,a,b;
//	printf("����a,b���������ֱ�Ϊ��\n");
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

//��8.3����ĿҪ��ͬ8.2�����ú�����������ָ�����͵���������������
//#include<stdio.h>
//int main()
//{
//	void swap(int * p1,int * p2);
//	int a,b;
//	int * pointer_1,* pointer_2;
//	printf("����a,b���������ֱ�Ϊ��\n");
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

//��8.8��������a��n���������෴˳��ȡ��
//#include<stdio.h>
//#define M 3
//int main()
//{
//	void inv(int a[],int n);
//	int i,n,a[M]={0};
//	printf("����%d��������\n",M);
//	for(i=0;i<M;i++)
//		scanf("%d",&a[i]);
//	for(i=0;i<M;i++)
//		printf("%d ",a[i]);
//	printf("\n");
//	n=M;
//	inv(a,n);
//	printf("��������Ϊ��\n");
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

//�Ľ�1��
//#include<stdio.h>
//#define M 3
//int main()
//{
//	void inv(int * a,int n);
//	int i,n,a[M]={0};
//	printf("����%d��������\n",M);
//	for(i=0;i<M;i++)
//		scanf("%d",&a[i]);
//	for(i=0;i<M;i++)
//		printf("%d ",a[i]);
//	printf("\n");
//	n=M;
//	inv(a,n);
//	printf("��������Ϊ��\n");
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

//��8.10����ָ�뷽����10���������ɴ�С˳������
#include<stdio.h>
int main()
{
	void sort(int a[],int n);
	int i,a[10]={0},* p;
	p=a;
	printf("��������a��Ԫ�أ�\n");
	for(i=0;i<10;i++,p++)
		scanf("%d",p);
	printf("\n");
	p=a;
	sort(p,10);
	printf("�������b��Ԫ�أ�\n");
	for(p=a;p<a+10;p++)
		printf("%d ",* p);
	printf("\n");
	return 0;
}
void sort(int a[],int n)
{
	int i,j,tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
