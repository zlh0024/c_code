#define _CRT_SECURE_NO_WARNINGS 1

//3.1:假如我国国民生产总值的年增长率为7%
//计算10年后我国国民生产总值与现在相比增长多少百分比
//计算公式为：p=(1+r)^n
//r为年增长率，n为年数，p为与现在相比的倍数
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


//3.2存款利息的计算
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
//	p1=p*(1+r5*5);         //一次存5年期
//	p2=p*(1+r3*3)*(1+r2*2);//先存3年期，到期后将本息再存2年期
//	p3=p*(1+r2*2)*(1+r3*3);//先存2年期，到期后将本息再存3年期
//	p4=p*pow(1+r1,5);      //先存1年期，到期后将本息再存入1年期，连续存5次
//	p5=p*pow(1+r0/4,4*5);  //存活期存款，活期利息每一季度结算一次
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

//3.6：将”China“译成密码
//字母后面第4个字母代替原有字母
//#include<stdio.h>
//int main()
//{
//	char c1,c2,c3,c4,c5;
//	printf("请输入：");
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

//3.7：圆周长、圆面积、圆球表面积、圆球体积、圆柱体积
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float r,h,l,s,sq,vq,vz;
//	float pi=3.1415926;
//	printf("请输入圆半径、圆柱高分别为：");
//	scanf("%f%f",&r,&h);
//	l=2*pi*r;
//	s=pi*r*r;
//	sq=4*pi*r*r;
//	vq=(4.0/3.0)*pi*r*r*r;
//	vz=pi*r*r*h;
//	printf("圆周长：%6.2f\n圆面积：%6.2f\n圆球表面积：%6.2f\n圆球体积：%6.2f\n圆柱体积：%6.2f\n",l,s,sq,vq,vz);
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