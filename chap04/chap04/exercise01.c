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


//4.10����ҵ���ŵĽ�������������
//����I
//        I<=100 000   0.1
//100 000<I<=200 000   0.075
//200 000<I<=400 000   0.05
//400 000<I<=600 000   0.03
//600 000<I<=1 000 000 0.015
//        I>1 000 000  0.01
//��������m(money)
//����p(profit)
//p=I/100000.0;
//��1��ʹ��if���
//#include<stdio.h>
//int main()
//{
//	double I,p,m;
//	printf("����������");
//	scanf("%lf",&I);
//	p=I/100000.0;
//	if(p<=1)
//		m=I*0.1;
//	else if(p<=2)
//		m=100000*0.1+(I-100000)*0.075;
//	else if(p<=4)
//		m=100000*0.1+100000*0.075+(I-200000)*0.05;
//	else if(p<=6)
//		m=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;
//	else if(p<=10)
//		m=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;
//	else
//		m=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;
//	printf("Ӧ������������%.2f\n",m);
//	return 0;
//}

//����1��
//#include<stdio.h>
//int main()
//{
//	double I,p,m,bon1,bon2,bon4,bon6,bon10;
//	printf("����������");
//	scanf("%lf",&I);
//	p=I/100000.0;
//	bon1=100000*0.1;
//	bon2=bon1+100000*0.075;
//	bon4=bon2+200000*0.05;
//	bon6=bon4+200000*0.03;
//	bon10=bon6+400000*0.015;
//	if(p<=1)
//		m=I*0.1;
//	else if(p<=2)
//		m=bon1+(I-100000)*0.075;
//	else if(p<=4)
//		m=bon2+(I-200000)*0.05;
//	else if(p<=6)
//		m=bon4+(I-400000)*0.03;
//	else if(p<=10)
//		m=bon6+(I-600000)*0.015;
//	else
//		m=bon10+(I-1000000)*0.01;
//	printf("Ӧ������������%.2f\n",m);
//	return 0;
//}

//��2��switch���
//#include<stdio.h>
//int main()
//{
//	double I,m,bon1,bon2,bon4,bon6,bon10;
//	int p;
//	printf("����������");
//	scanf("%lf",&I);
//	p=(int)I/100000.0;
//	bon1=100000*0.1;
//	bon2=bon1+100000*0.075;
//	bon4=bon2+200000*0.05;
//	bon6=bon4+200000*0.03;
//	bon10=bon6+400000*0.015;
//	if(p>10)
//		p=10;
//	switch(p)
//	{
//	case 0:
//		m=I*0.1;
//		break;
//	case 1:
//		m=bon1+(I-100000)*0.075;
//		break;
//	case 2:
//	case 3:
//		m=bon2+(I-200000)*0.05;
//		break;
//	case 4:
//	case 5:
//		m=bon4+(I-400000)*0.03;
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		m=bon6+(I-600000)*0.015;
//		break;
//	case 10:
//		m=bon10+(I-1000000)*0.01;
//	}
//	printf("Ӧ������������%.2f\n",m);
//	return 0;
//}

//4.11������4��������Ҫ����С�����˳�����
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,tep;
//	printf("������4��������");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	if(a>b)
//	{
//		//����a,b
//		tep=a;
//		a=b;
//		b=tep;
//	}//��ʱa<b
//	if(a>c)
//	{
//		//����a,c
//		tep=a;
//		a=c;
//		c=tep;
//	}//��ʱa<c
//	if(a>d)
//	{
//		//����a,d
//		tep=a;
//		a=d;
//		d=tep;
//	}//��ʱa<d
//	if(b>c)
//	{
//		//����b,c
//		tep=b;
//		b=c;
//		c=tep;
//	}//��ʱb<c
//	if(b>d)
//	{
//		//����b,d
//		tep=b;
//		b=d;
//		d=tep;
//	}//��ʱb<d
//	if(c>d)
//	{
//		//����c,d
//		tep=c;
//		c=d;
//		d=tep;
//	}//��ʱc<d
//	printf("��С����ѭ�����Ϊ��%d  %d  %d  %d\n",a,b,c,d);
//	return 0;
//}

//4.12����4��Բ��
//Բ�ķֱ�Ϊ��2��2����-2��2����-2��-2����2��-2��
//Բ�뾶Ϊ1
//��4�����ĸ߶�Ϊ10m,�������޽�����
//��������������꣬��õ�Ľ����߶�
//(x,y)����2��2����-2��2����-2��-2����2��-2���ľ���>1   �߶�Ϊ0
//(x,y)����2��2����-2��2����-2��-2����2��-2���ľ���<=1  �߶�Ϊ10
//#include<stdio.h>
//int main()
//{
//	
//    double d_2(double,double,double,double);
//	double x,y,d1,d2,d3,d4;
//	printf("����һ�����꣺");
//	scanf("%lf%lf",&x,&y);
//	printf("x=%.2f,y=%.2f\n",x,y);
//	d1=d_2(x,y,2,2);
//	d2=d_2(x,y,-2,2);
//	d3=d_2(x,y,2,-2);
//	d4=d_2(x,y,-2,-2);
//	if(d1>1&&d2>1&&d3>1&&d4>1)
//		printf("�õ�Ľ����߶�Ϊ0\n");
//	else
//		printf("�õ�Ľ����߶�Ϊ10\n");
//	return 0;
//}
//
//double d_2(double x,double y,double a,double b)
//{
//	return (x-a)*(x-a)+(x-b)*(a-b);
//}

//#include<stdio.h>
//int main()
//{
//	
//    double d_2(double,double,double,double);
//	double x,y,d1,d2,d3,d4;
//	int h=10;
//	printf("����һ������(x,y)��");
//	scanf("%lf%lf",&x,&y);
//	printf("x=%.2f,y=%.2f\n",x,y);
//	d1=d_2(x,y,2,2);
//	d2=d_2(x,y,-2,2);
//	d3=d_2(x,y,2,-2);
//	d4=d_2(x,y,-2,-2);
//	if(d1>1&&d2>1&&d3>1&&d4>1)
//		h=0;
//	printf("�õ�Ľ����߶�Ϊ%d\n",h);
//	return 0;
//}
//
//double d_2(double x,double y,double a,double b)
//{
//	return (x-a)*(x-a)+(x-b)*(a-b);
//}