#define _CRT_SECURE_NO_WARNINGS 1

//3.1:�����ҹ�����������ֵ����������Ϊ7%
//����10����ҹ�����������ֵ����������������ٰٷֱ�
//���㹫ʽΪ��p=(1+r)^n
//rΪ�������ʣ�nΪ������pΪ��������ȵı���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float p,r,n; 
//	r=0.07;
//	n=10;
//	p=pow(1+r,n);
//	printf("p=%f\n",p);
//	return 0;
//}


//3.2�����Ϣ�ļ���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float r1,r2,r3,r5,r0,p1,p2,p3,p4,p5,p;
//	p=1000;
//	r1=0.015;
//	r2=0.021;
//	r3=0.0275;
//	r5=0.03;
//	r0=0.0035;
//	p1=p*(1+r5*5);         //һ�δ�5����
//	p2=p*(1+r3*3)*(1+r2*2);//�ȴ�3���ڣ����ں󽫱�Ϣ�ٴ�2����
//	p3=p*(1+r2*2)*(1+r3*3);//�ȴ�2���ڣ����ں󽫱�Ϣ�ٴ�3����
//	p4=p*pow(1+r1,5);      //�ȴ�1���ڣ����ں󽫱�Ϣ�ٴ���1���ڣ�������5��
//	p5=p*pow(1+r0/4,4*5);  //����ڴ�������Ϣÿһ���Ƚ���һ��
//	printf("p1=%f\np2=%f\np3=%f\np4=%f\np5=%f\n",p1,p2,p3,p4,p5);
//	return 0;
//}

//3.3
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float d,p,r,m;
//	d=300000;
//	p=6000;
//	r=0.01;
//	m=log10(p/(p-d*r))/log10(1+r);
//	printf("m=%6.1f\n",m);
//	return 0;
//}

//3.4
//3.5
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	float x,y;
//	char c1,c2;
//	scanf("a=%db=%d",&a,&b);
//	scanf("%f%e",&x,&y);
//	scanf("%c%c",&c1,&c2);
//	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);
//	return 0;
//}

//3.6������China���������
//��ĸ�����4����ĸ����ԭ����ĸ
//#include<stdio.h>
//int main()
//{
//	char c1,c2,c3,c4,c5;
//	printf("�����룺");
//	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
//	c1=c1+4;
//	c2=c2+4;
//	c3=c3+4;
//	c4=c4+4;
//	c5=c5+4;
//	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//	putchar('\n');
//	return 0;
//}

//3.7��Բ�ܳ���Բ�����Բ��������Բ�������Բ�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float r,h,l,s,sq,vq,vz;
//	float pi=3.1415926;
//	printf("������Բ�뾶��Բ���߷ֱ�Ϊ��");
//	scanf("%f%f",&r,&h);
//	l=2*pi*r;
//	s=pi*r*r;
//	sq=4*pi*r*r;
//	vq=(4.0/3.0)*pi*r*r*r;
//	vz=pi*r*r*h;
//	printf("Բ�ܳ���%6.2f\nԲ�����%6.2f\nԲ��������%6.2f\nԲ�������%6.2f\nԲ�������%6.2f\n",l,s,sq,vq,vz);
//	return 0;
//}


//3.8
//#include<stdio.h>
//int main()
//{
//	//char c1,c2;
//	int c1,c2;
//	c1=getchar();
//	c2=getchar();
//	putchar(c1);
//	putchar(c2);
//	putchar('\n');
//	printf("%c%c\n",c1,c2);
//	return 0;
//}