#define _CRT_SECURE_NO_WARNINGS 1

//4.4����3������a,b,c,�ɼ������룬����������ֵ
//#include<stdio.h>
//int main()
//{
//	int a,b,c,max;
//	printf("����3������a,b,c�ֱ�Ϊ��\n");
//	scanf("%d%d%d",&a,&b,&c);
//	max=(a>b)?a:b;
//	max=(max>c)?max:c;
//	printf("������ֵΪ��%d\n",max);
//	return 0;
//}

//4.5���Ӽ�������һ��С��1000��������Ҫ���������ƽ����
//��ƽ�����������������������������
//Ҫ����������ݺ������м���Ƿ�ΪС��1000������
//�����ǣ���Ҫ����������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x;
//	int sqrt_x;
//	printf("����һ��С��1000��������\n");
//	scanf("%f",&x);
//	
//	if(x>0&&x<1000)
//	{
//		sqrt_x=(int)sqrt(x);
//		printf("%fΪС��1000������\n",x);
//		printf("%f��ƽ�������������֣�%d\n",x,sqrt_x);
//	}
//	else
//	{
//		printf("�������룡\n");
//	}
//	return 0;
//}
//����1��
//#include<stdio.h>
//#include<math.h>
//#define M 1000
//int main()
//{
//	float x;
//	int sqrt_x;
//	printf("������һ��С��%d������x��",M);
//	scanf("%f",&x);
//	
//	if(x>M)
//	{
//		printf("��������ݲ�����Ҫ������������һ��С��%d������x��",M);
//		scanf("%f",&x);
//	}
//	sqrt_x=(int)sqrt(x);
//	printf("%f��ƽ�������������֣�%d\n",x,sqrt_x);
//	return 0;
//}
//����2
//#include<stdio.h>
//#include<math.h>
//#define M 1000
//int main()
//{
//	float x;
//	int sqrt_x;
//	printf("������һ��С��%d������x��",M);
//	scanf("%f",&x);
//	while(x>=M)
//	{
//		printf("��������ݲ�����Ҫ������������һ��С��%d������x��",M);
//		scanf("%f",&x);
//	}
//	sqrt_x=(int)sqrt(x);
//	printf("%f��ƽ�������������֣�%d\n",x,sqrt_x);
//	return 0;
//}

//4.6����һ��������
//y=x       x<1
//y=2x-1    1<=x<10
//y=3x-11   x>=10
//д��������x��ֵ�������Ӧy��ֵ
//#include<stdio.h>
//int main()
//{
//	double x,y;
//	printf("����x:");
//	scanf("%lf",&x);
//	if(x<1)
//	{
//		y=x;
//	}
//	else if(x<10)
//	{
//		y=2*x-1;
//	}
//	else
//	{
//		y=3*x-11;
//	}
//	printf("���y:%.2f\n",y);
//	return 0;
//}

//4.8������100���Ƴɼ���Ҫ������ɼ��ȼ�'A','B','C','D','E'
//90������  'A'
//80~89     'B'
//70~79     'C'
//60~69     'D'
//60������  'E'
//#include<stdio.h>
//int main()
//{
//	double grade;
//	printf("����ɼ���");
//	scanf("%lf",&grade);
//	if(grade<0||grade>100)
//		printf("����ɼ��Ƿ������������룡\n");
//	else
//	{
//		if(grade>=90)
//			printf("����ɼ��ȼ�'A'\n");
//		else if(grade>=80)
//			printf("����ɼ��ȼ�'B'\n");
//		else if(grade>=70)
//			printf("����ɼ��ȼ�'C'\n");
//		else if(grade>=60)
//			printf("����ɼ��ȼ�'C'\n");
//		else
//			printf("����ɼ��ȼ�'E'\n");
//		}
//	return 0;
//}

//�Ľ�1��
//


//4.9����һ��������5λ����������Ҫ��
//������Ǽ�λ��
//�ֱ����ÿһλ����
//�����������λ���֣�����ԭ��Ϊ321��Ӧ���123
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count(int);
//	void print_num_for(int,int);
//	void print_num_back(int);
//	int a,n;
//	printf("����һ��������5λ��������a:");
//	scanf("%d",&a);
//	//a%10      ��λ
//	//a/10%10   ʮλ
//	//a/100%10  ��λ
//    n=count(a);
//	print_num_for(a,n);
//	print_num_back(a);
//	return 0;
//}
//int count(int x)
//{
//	int n=0;
//	while(x!=0)
//	{
//		x=x/10;
//		n++;
//	}
//	printf("����%dλ��\n",n);
//	return n;
//}
//void print_num_for(int x,int n)
//{
//	int x1,m;
//	printf("�ֱ����ÿһλ���֣�");
//	while(n>=1)
//	{
//		m=pow((float)10,n-1);
//		x1=x/m;
//		x=x-x1*m;
//		n--;
//		printf("%d  ",x1);
//	}
//}
//void print_num_back(int x)
//{
//	int x1;
//	printf("\n���������ÿһλ���֣�");
//	while(x!=0)
//	{
//		x1=x%10;
//		x=x/10;
//		printf("%d  ",x1);
//	}
//}