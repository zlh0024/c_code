#define _CRT_SECURE_NO_WARNINGS 1

//��4.1������ax^2+bx+c=0���̵ĸ�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a,b,c,disc,x1,x2;
//	printf("������a��b��c�ֱ�Ϊ��");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	disc=b*b-4*a*c;
//	if(disc>=0)
//	{
//		x1=(-b+sqrt(disc))/(2*a);
//		x2=(-b-sqrt(disc))/(2*a);
//		printf("x1=%7.2f\nx2=%7.2f",x1,x2);
//	}
//	else
//	{
//		printf("�˷�����ʵ��");
//	}
//	return 0;
//}


//��4.2����������ʵ��������С�����˳�������������
//#include<stdio.h>
//int main()
//{
//	double a,b,c;
//	printf("��������ʵ����");
//	scanf("%lf%lf",&a,&b);
//	if(b<a)
//	{
//		c=b;
//		b=a;
//		a=c;
//	}
//	printf("��С�������Ϊ��%.3f  %.3f\n",a,b);
//	return 0;
//}


//��4.3������������a,b,c��Ҫ����С��������
//#include<stdio.h>
//int main()
//{
//	double a,b,c,tep;
//	printf("��������������");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	if(a>b)
//	{
//		//����a,b
//		tep=a;
//		a=b;
//		b=tep;
//	}
//	//��ʱa<b
//	if(a>c)
//	{
//		//����a,c
//		tep=a;
//		a=c;
//		c=tep;
//	}
//	if(b>c)
//	{
//		//����b,c
//		tep=b;
//		b=c;
//		c=tep;
//	}
//	//��ʱb<c
//	printf("��С��������Ϊ��%.3f %.3f %.3f\n",a,b,c);
//	return 0;
//}

//��4.4������һ���ַ��ж����Ƿ�Ϊ��д��ĸ
//���ǣ�����ת��ΪСд��ĸ
//�����ǣ���ת��
//Ȼ��������õ����ַ�
//A-->65       Z-->90
//a-->97       z-->122
//#include<stdio.h>
//int main()
//{
//	char c;
//	printf("����һ���ַ���");
//	scanf("%c",&c);
//	//if(c>=65&&c<=90)
//	//{
//	//	c=c+32;
//	//}
//	c=(c>'A'&&c<'Z')?(c+32):c;
//	printf("����ַ���%c\n",c);
//	return 0;
//}


//��4.5����һ��Ծ����
//y=-1(x<0)
// =0 (x=0)
// =1 (x>0)
//��һ��������һ��xֵ��Ҫ��������Ӧ��yֵ��
//#include<stdio.h>
//int main()
//{
//	double x;
//	int y;
//	printf("����һ��xֵ��");
//	scanf("%lf",&x);
//	if(x<0)
//	{
//		y=-1;
//	}else if(x==0)
//	{
//		y=0;
//	}else
//	{
//		y=1;
//	}
//	printf("�����Ӧ��yֵ��%d\n",y);
//	return 0;
//}


//��4.6��Ҫ���տ��Գɼ��ĵȼ�����ٷ��Ʒ�����
//A�ȣ�85������
//B�ȣ�70~84��
//C�ȣ�60~69��
//D�ȣ�60������
//�ɼ��ĵȼ��ɼ�������
//#include<stdio.h>
//int main()
//{
//	char grade;
//	printf("����ɼ��ĵȼ���");
//	scanf("%c",&grade);
//	switch(grade)
//	{
//	case 'A':
//		printf("85������\n");
//		break;
//	case 'B':
//		printf("70~84��\n");
//		break;
//	case 'C':
//		printf("60~69��\n");
//		break;
//	case 'D':
//		printf("60������\n");
//		break;
//	default:
//		printf("����������������룡\n");
//	}
//	return 0;
//
//}

//��4.7����switch��䴦��˵�����
//#include<stdio.h>
//int main()
//{
//	void action1(int,int);
//	void action2(int,int);
//	int a,b;
//	char ch;
//	//a=15;
//	//b=23;
//	printf("����a,b:\n");
//	scanf("%d%d",&a,&b);
//	getchar();
//	printf("����ch:\n");
//	ch=getchar();
//	switch(ch)
//	{
//	case 'a':
//	case 'A':
//		action1(a,b);
//		break;
//	case 'b':
//	case 'B':
//		action2(a,b);
//		break;
//	default:
//		putchar('\a');
//	}
//	return 0;
//}
//void action1(int x,int y)
//{
//	printf("x+y=%d\n",x+y);
//}
//void action2(int x,int y)
//{
//	printf("x-y=%d\n",x-y);
//}


//��4.8��дһ�����ж�ĳһ���Ƿ�Ϊ����
//�ܱ�400�����������ܱ�4���������ܱ�100�����Ķ�������
//#include<stdio.h>
//int main()
//{
//	int year;
//	printf("������ݣ�");
//	scanf("%d",&year);
//	if(year%400==0||(year%4==0&&year%100!=0))
//	{
//		printf("%d��Ϊ����\n",year);
//	}
//	else
//	{
//	printf("%d�겻������\n",year);
//	}
//	return 0;
//}
//���ߣ�
//#include<stdio.h>
//int main()
//{
//	int year,leap;
//	leap=0;
//	printf("������ݣ�");
//	scanf("%d",&year);
//	if(year%400==0||(year%4==0&&year%100!=0))
//	{
//		leap=1;
//	}
//	if(leap==1)
//	{
//		printf("%d��Ϊ����\n",year);
//	}
//	else
//	{
//		printf("%d�겻������\n",year);
//	}
//	return 0;
//}

//��ax^2+bx+c=0���̵ĸ�
//a=0         ���Ƕ��η���
//b^2-4ac=0   ���������ʵ��
//b^2-4ac>0   ����������ʵ��
//b^2-4ac<0   ���������ȸ���
//p+qi  p=-b/2a  q=sqrt(b^2-4ac)/2a
//p-qi
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a,b,c,disc,x1,x2,realpart,imagpart;
//	printf("������a,b,c:");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	if(fabs(a)<=1e-6)
//	{
//		printf("���Ƕ��η���\n");
//	}
//	else
//	{
//		disc=b*b-4*a*c;
//		if(fabs(disc)<=1e-6)
//		{
//			printf("���������ʵ����\n%8.4f\n",-b/(2*a));
//		}
//		else if(disc>1e-6)
//		{
//			x1=(-b+sqrt(disc))/(2*a);
//			x2=(-b-sqrt(disc))/(2*a);
//			printf("����������ʵ����\nx1=%8.4f\nx2=%8.4f\n",x1,x2);
//		}
//		else
//		{
//			realpart=-b/(2*a);
//			imagpart=sqrt(-disc)/(2*a);
//			printf("���������ȸ�����\nx1=%8.4f+%8.4fi\nx2=%8.4f-%8.4fi\n",realpart,imagpart,realpart,imagpart);
//		}
//	}
//	return 0;
//}

//��4.10�����乫˾���û�����������á�·��ԽԶ������Խ�͡�
//��ÿ��ÿǧ�׻���Ļ����˷�Ϊp(price)
//������Ϊw(weight)
//����Ϊs  c=s/250
//�ۿ�Ϊd(discout)
//�����˷�Ϊf(freight)�ļ��㹫ʽΪ��
//f=p*w*s*(1-d)
//c<1      ���ۿ�
//1<=c<2   0.02
//2<=c<4   0.05
//4<=c<8   0.08
//8<=c<12  0.1
//c>=12    0.15
//#include<stdio.h>
//int main()
//{
//	double p,w,d,s,f;
//	int c;
//	printf("������p,w,d,s�ֱ�Ϊ��");
//	scanf("%lf%lf%lf%lf",&p,&w,&d,&s);
//	c=s/250;
//	switch(c)
//	{
//	case 0:
//		d=0;
//		break;
//	case 1:
//		d=0.02;
//		break;
//	case 2:
//	case 3:
//		d=0.05;
//		break;
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//		d=0.08;
//		break;
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//		d=0.1;
//		break;
//	case 12:
//		d=0.15;
//		break;
//	}
//	f=p*w*s*(1-d);
//	printf("������˷�:%10.2f\n",f);
//	return 0;
//}
