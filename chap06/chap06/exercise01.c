#define _CRT_SECURE_NO_WARNINGS 1
//6.1����ɸѡ����100֮�ڵ�����
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

//6.2:��ѡ�񷨶�10����������
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

//6.3����һ��3*3����������Խ���Ԫ��֮��
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
//	printf("�Խ���Ԫ��֮��:%d\n",sum);
//	return 0;
//}

//6.4����һ�����ź�������飬Ҫ������һ�����󣬰�ԭ������Ĺ��ɽ�������������
//#include<stdio.h>
//int main()
//{
//	double a[11],b,temp1,temp2;
//	int n=11,i,j;
//
//	printf("����һ�����ź��������(��10Ԫ��)��\n");
//	for(i=0;i<n-1;i++)
//	{
//		scanf("%lf",&a[i]);
//	}
//	printf("����һ������\n");
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
//	printf("��������У�\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%5.2f ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//6.5����һ�������е�ֵ���������´��
//���磺ԭ��˳��Ϊ8��6��5��4��1
//       Ҫ���Ϊ 1��4��5��6��8
#include<stdio.h>
int main()
{

	return 0;
}