#define _CRT_SECURE_NO_WARNINGS 1


//��3.1���������¶ȼƲ��Գ��û��Ϸ���ʾ���¶ȣ���64oF��
//��Ҫ�����ת��Ϊ�����Ϸ���ʾ�ĵ��¶ȣ���17.8oC��
//c=5/9(f-32)
//#include<stdio.h>
//int main()
//{
//	float c,f;
//	c=0;
//	f=0;
//	printf("���뻪���¶ȣ�");
//	scanf("%f",&f);
//	c=(5.0/9)*(f-32);
//	printf("��������¶ȣ�%f\n",c);
//	return 0;
//}


//��3.2����������Ϣ����1000Ԫ�����һ�ꡣ�����ַ�����ѡ��
//(1)���ڣ�������Ϊr1��           p0*(1+r1)
//(2)һ���ڶ��ڣ�������Ϊr2��     p0*(1+r2)
//(3)�����ΰ��궨�ڣ�������Ϊr3�� p0*(1+r3/2)*(1+r3/2)
//��ֱ�����һ������ַ������õ��ı�Ϣ�͡�
//#include<stdio.h>
//int main()
//{
//	float p0,p1,p2,p3,r1,r2,r3;
//	p0=0;
//	printf("���뱾��");
//	scanf("%f",&p0);
//	printf("�������ִ��������ʣ��ֱ�Ϊ��");
//	scanf("%f,%f,%f",&r1,&r2,&r3);
//	p1= p0*(1+r1);
//	p2= p0*(1+r2);
//	p3= p0*(1+r3/2)*(1+r3/2);
//	printf("�����\n p1=%f\n p2=%f\n p3=%f\n",p1,p2,p3);
//	return 0;
//
//}


//��3.3������һ����д��ĸ��Ҫ����Сд��ĸ���
//'a'��ASC��ֵΪ97��'A'��ASC��ֵΪ65��  ��д��ĸ+32-->Сд��ĸ
//#include<stdio.h>
//int main()
//{
//	char ch1,ch2;
//	printf("�����д��ĸ��");
//	scanf("%c",&ch1);
//	ch2=ch1+32;
//	printf("���Сд��ĸ��%c\n",ch2);
//	return 0;
//}


//��3.4�����������ε����߳����������ε����
//area=sqrt(s*(s-a)*(s-b)*(s-c))
//s=(a+b+c)/2
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a,b,c,s,area;
//	printf("�����������ε����߳����ֱ�Ϊ��");
//    scanf("%f%f%f",&a,&b,&c);
//	//�жϳ����Ƿ����0
//	if(a<=0||b<=0||c<=0)
//		printf("�߳�����Υ���������0������������\n");
//	s=(a+b+c)/2;
//	area=sqrt(s*(s-a)*(s-b)*(s-c));
//	printf("�����ε����Ϊ��%f",area);
//	return 0;
//}


//��3.5����ax^2+bx+c=0���̵ĸ���a��b��c�ɼ������룬��b^2-4*a*c>0
//x1=(-b+sqrt(b^2-4*a*c))/2a
//x1=(-b-sqrt(b^2-4*a*c))/2a
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a,b,c,daiet,x1,x2;
//	printf("������a,b,c�ֱ�Ϊ��");
//	scanf("%f,%f,%f",&a,&b,&c);
//	daiet=b*b-4*a*c;
//	if(daiet>0)
//	{
//		x1=(-b+sqrt(daiet))/(2*a);
//		x2=(-b-sqrt(daiet))/(2*a);
//	}
//	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
//	return 0;
//}


//��3.6����%f���ʵ����ֻ�ܵõ�6λС��
//#include<stdio.h>
//int main()
//{
//	double a;
//	printf("����һ��ʵ����");
//	scanf("%lf",&a);
//	printf("���ʵ����%8.6f\n",a/3);
//	return 0;
//}


//��3.7��float�����ݵ���Чλ��
//#include<stdio.h>
//int main()
//{
//	float a;
//	a=10000/3.0;
//	printf("%f\n",a);
//	return 0;
//}


//��3.8���Ⱥ����BOY�����ַ�
//#include<stdio.h>
//int main()
//{
//	//int a=66,b=79,c=89;
//	char a='B',b='O',c='Y';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	printf("\n");
//	return 0;
//}


//��3.9���Ӽ�������BOY�����ַ���Ȼ��������������Ļ
//#include<stdio.h>
//int main()
//{
//	//int a=66,b=79,c=89;
//	char a,b,c;
//	a=getchar();
//	b=getchar();
//	c=getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	printf("\n");
//	return 0;
//}


//��3.10:�Ӽ�����������һ����д��ĸ������ʾ���������Ӧ��Сд��ĸ
//'a'��ASC��ֵΪ97��'A'��ASC��ֵΪ65��  ��д��ĸ+32-->Сд��ĸ
//#include<stdio.h>
//int main()
//{
//	char ch1,ch2;
//	printf("�����д��ĸ��");
//	//scanf("%c",&ch1);
//	ch1=getchar();
//	ch2=ch1+32;
//	//printf("���Сд��ĸ��%c\n",ch2);
//	putchar(ch2);
//	putchar('\n');
//	return 0;
//}