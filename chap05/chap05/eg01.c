#define _CRT_SECURE_NO_WARNINGS 1

//��5.1��ʹ��while��䣬��1+2+3+...+100
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

//��5.2��ʹ��do...while��䣬��1+2+3+...+100
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

//��5.3��

//��5.4����ȫϵ1000��ѧ���о��д���ļ��
//�������ﵽ10��Ԫʱ�ͽ���
//ͳ�ƴ�ʱ���������Լ�ƽ��ÿ�˾�����Ŀ
//#include<stdio.h>
//int main()
//{
//	double money,sum;
//	int n;
//	for(n=1,sum=0;n<=1000;n++)
//	{
//		printf("��������Ŀ��");
//	    scanf("%lf",&money);
//		sum+=money;
//		if(sum>=100000)
//		{
//			break;
//		}
//	}
//	printf("��ʱ��������Ϊ��%d\nƽ��ÿ�˾�����ĿΪ��%.2f\n",n,sum/n);
//	return 0;
//}

//��5.5��Ҫ�����100~200�Ĳ��ܱ�3��������
//#include<stdio.h>
//int main()
//{
//	int i;
//	printf("���100~200�Ĳ��ܱ�3��������:\n");
//	for(i=100;i<=200;i++)
//	{
//		if(i%3==0)
//			continue;
//		printf("%d\n",i);
//	}
//	return 0;
//}

//��5.6���������4*5�ľ���
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
//�Ľ�1��
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


//��5.7���ù�ʽpi/4~~1-1/3+1/5-1/7+...��pi�Ľ���ֵ
//ֱ������ĳһ��ľ���ֵС��10^(-6)Ϊֹ������ۼӣ�
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
//	printf("pi�Ľ���ֵΪ��%10.8f\n",pi);
//	return 0;
//}

//��5.8����Fibonacci��쳲����������е�ǰ40����
//��������������ص㣺
//��1��2������Ϊ1��1
//�ӵ���������ʼ����������ǰ��������֮��
//��������Ϊ��1��1��2��3��5��8��13��...
//����ѧ��ʽ��ʾΪ��
//F1=1               n=1
//F2=1               n=2
//Fn=F(n-1)+F(n-2)   n>=3
//#include<stdio.h>
//int main()
//{
//	int n,F,F1,F2;
//	printf("���ǰ40������\n");
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


//����1��
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


//��5.9������һ������3������n,�ж����Ƿ�Ϊ������prime,�ֳ�������
//������ֻ����1������������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i,prime=1;
//	printf("����һ������3��������");
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
//        printf("%d������\n",n);
//	else
//		printf("%d��������\n",n);
//	return 0;
//}

//����1��
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i,k;
//	printf("����һ������3��������");
//	scanf("%d",&n);
//	k=sqrt(n);
//	for(i=2;i<=k;i++)
//          //i<=(int)sqrt(n)
//	{
//		if(n%i==0)
//	      break;
//	}
//	if(i<=k)
//        printf("%d��������\n",n);
//	else
//		printf("%d������\n",n);
//	return 0;
//}


//��5.10�� ��100~200����������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i,k;
//	printf("100~200�������Ϊ��\n");
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


//��5.11��������
//#include<stdio.h>
//int main()
//{
//	char x;
//	int n,i;
//	printf("�����ַ�������\n");
//	scanf("%d",&n);
//	printf("����һ���ַ�(ȫΪ��д��ĸ)��");
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

//�ĳ��������⣬�����
//����1��
//#include<stdio.h>
//int main()
//{
//	char x;
//	printf("����һ���ַ���\n");
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
//�Ľ�1��
//#include<stdio.h>
//int main()
//{
//	char x;
//	printf("����һ���ַ���\n");
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












































































































































































































































































































































































































































































































































































































































































































































































































































































































































































