#define _CRT_SECURE_NO_WARNINGS 1
//��7.1����������½�����ú�������ʵ��
//       ****************
//        How do you do!
//       ****************
//#include<stdio.h>
//int main()
//{
//	void print_star();
//	void print_message();
//	print_star();
//	print_message();
//	print_star();
//	return 0;
//}
//void print_star()
//{
//	printf("****************\n");
//}
//void print_message()
//{
//	printf(" How do you do!\n");
//}

//��7.2����������������Ҫ���������ֵ�ϴ��ߡ�Ҫ���ú������ҵ�������
//#include<stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int a,b,c;
//	printf("������������x,y,�ֱ�Ϊ��");
//	scanf("%d%d",&a,&b);
//	printf("x=%d,y=%d\n",a,b);
//	c=max(a,b);
//	printf("�����еĽϴ�ֵΪ��%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	//return (x>y?x:y);
//  int z;
//  z=x>y?x:y;
//  return z;
//}

//��7.3������max�����ж���ı���z��Ϊfloat��
//#include<stdio.h>
//int main()
//{
//	int max(float x,float y);
//	float a,b;
//	int c;
//	printf("������������x,y,�ֱ�Ϊ��");
//	scanf("%f%f",&a,&b);
//	printf("x=%f,y=%f\n",a,b);
//	c=max(a,b);
//	printf("�����еĽϴ�ֵΪ��%d\n",c);
//	return 0;
//}
//int max(float x,float y)
//{
//	//return (x>y?x:y);
//  float z;
//  z=x>y?x:y;
//  return z;
//}

//��7.4����������ʵ������һ�������������֮��
//#include<stdio.h>
//int main()
//{
//	int sum(int,int);
//	int a,b,c;
//	printf("��������ʵ����");
//	scanf("%d%d",&a,&b);
//	c=sum(a,b);
//	printf("����֮��Ϊ��%d\n",c);
//	return 0;
//}
//int sum(int x,int y)
//{
//	return x+y;
//}

//�Ľ�1��
//#include<stdio.h>
//int main()
//{
//	float add(float x,float y);
//	float a,b,c;
//	printf("��������ʵ����");
//	scanf("%f%f",&a,&b);
//	c=add(a,b);
//	printf("����֮��Ϊ��%f\n",c);
//	return 0;
//}
//float add(float x,float y)
//{
//	return x+y;
//}

//��7.5������4���������ҳ��������������ú�����Ƕ�׵���������
//#include<stdio.h>
//int main()
//{
//	int max_2(int x,int y);
//	int max_3(int x,int y,int z);
//	int max(int x,int y,int z,int j);
//	int a,b,c,d,e;
//	printf("����4��������\n");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	e=max(a,b,c,d);
//	printf("���ֵ��%d\n",e);
//	return 0;
//}
//
//int max(int x,int y,int z,int j)
//{
//	int p;
//	p=max_3(x,y,z);
//	return max_2(p,j);
//}
//int max_3(int x,int y,int z)
//{
//	int p;
//	p=max_2(x,y);
//	return max_2(p,z);
//}
//int max_2(int x,int y)
//{
//	return (x>y?x:y);
//}
//�Ľ�1��
//#include<stdio.h>
//int main()
//{
//	int max4(int a,int b,int c,int d);
//	int a,b,c,d,max;
//	printf("����4��������\n");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	max=max4(a,b,c,d);
//	printf("���ֵ��%d\n",max);
//	return 0;
//}
//int max4(int a,int b,int c,int d)
//{
//	int max2(int a,int b);
//	int m;
//	m=max2(a,b);
//	m=max2(m,c);
//	m=max2(m,d);
//	return m;
//}
//int max2(int a,int b)
//{
//	return (a>b?a:b);
//}

//��7.6����5��ѧ������һ���ʵ�5��ѧ�������꣬��˵�ȵ�4��ѧ����2�ꡣ
//�ʵ�4��ѧ����������˵�ȵ�3��ѧ����2��   age(4)=age(3)+2
//�ʵ�3��ѧ����������˵�ȵ�2��ѧ����2��   age(3)=age(2)+2
//�ʵ�2��ѧ����������˵�ȵ�1��ѧ����2��   age(2)=age(1)+2
//����ʵ�1��ѧ������˵��10��             age(1)=10
//���ʵ�5��ѧ�����
//#include<stdio.h>
//int main()
//{
//	int age(int n);
//	int n;
//	scanf("%d",&n);
//	printf("�����%d��ѧ���ĳɼ�Ϊ��%d\n",n,age(n));
//	return 0;
//}
//int age(int n)
//{
//	int c;
//	if(n==1)
//		c=10;
//	else
//		c=age(n-1)+2;
//	return c;
//}

//��7.7���õݹ鷽����n!
//2!=1*2
//3!=3*2!
//4!=4*3!
//5!=5*4!
//#include<stdio.h>
//int main()
//{
//	int fac(int n);
//	int n;
//	printf("����n:");
//	scanf("%d",&n);
//	printf("%d!=%d\n",n,fac(n));
//	return 0;
//}
//int fac(int n)
//{
//	int f;
//	if(n<0)
//		printf("n<0,data error!");
//	else if(n==1||n==0)
//		f=1;
//	else
//	    f=fac(n-1)*n;
//	return f;
//}

//��7.8��Hanoi����ŵ��������
//#include<stdio.h>
//int main()
//{
//	void hanoi(int n,char one,char two,char three);
//	int m;
//	printf("input the number of diskes:");
//	scanf("%d",&m);
//	printf("The step to move %d diskes:\n",m);
//	hanoi(m,'A','B','C');
//	return 0;
//}
//void hanoi(int n,char one,char two,char three)
//{
//	void move(char x,char y);
//	if(n==1)
//		move(one,three);
//	else
//	{
//		hanoi(n-1,one,three,two);
//		move(one,three);
//		hanoi(n-1,two,one,three);
//	}
//}
//void move(char x,char y)
//{
//	printf("%c-->%c\n",x,y);
//}

//��7.9������10������Ҫ���������ֵ����Ԫ�غ͸����ǵڼ�����
//#include<stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int i,a[10]={0},m,n;
//	printf("����10������\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\n");
//	for(i=1,m=a[0],n=0;i<10;i++)
//	{
//		if(max(m,a[i])>m)
//		{
//			m=max(m,a[i]);
//			n=i;
//		}
//	}
//	printf("���Ϊ%d,Ϊ��%d��\n",m,n+1);
//
//}
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}

//��7.10����һ��һά����score���ڴ��10��ѧ���ɼ�����ƽ���ɼ�
//#include<stdio.h>
//int main()
//{
//	//float average(float array[10]);
//	float average(float* a);
//	float score[10]={0},aver;
//	int i;
//	printf("����10��ѧ���ĳɼ���\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&score[i]);
//	}
//	printf("\n");
//	aver=average(score);
//	printf("ƽ����Ϊ��%5.2f\n",aver);
//	return 0;
//}
////float average(float array[])
////{
////	int i;
////	float aver,sum=array[0];
////	for(i=1;i<10;i++)
////	{
////		sum+=array[i];
////	}
////	aver=sum/10;
////	return aver;
////}
//float average(float* a)
//{
//	int i;
//	float aver,sum=*a;
//	for(i=1;i<10;i++)
//	{
//		//sum+=*(a++);
//		sum+=*(++a);
//	}
//	aver=sum/10;
//	return aver;
//}

//��7.11���������༶���ֱ���35����30��ѧ��������һ��average������
//�ֱ������������ѧ����ƽ���ɼ�
//#include<stdio.h>
//#define m 5
//#define n 10
//int main()
//{
//	float average(float array[],int numb);
//	float score1[m]={0},score2[n]={0},aver1,aver2;
//	int i;
//	printf("����%d��ѧ���ĳɼ���\n",m);
//	for(i=0;i<m;i++)
//	{
//		scanf("%f",&score1[i]);
//	}
//	printf("����%d��ѧ���ĳɼ���\n",n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%f",&score2[i]);
//	}
//	printf("\n");
//	aver1=average(score1,m);
//	aver2=average(score2,n);
//	printf("%d��ѧ��ƽ����Ϊ��%5.2f\n",m,aver1);
//	printf("%d��ѧ��ƽ����Ϊ��%5.2f\n",n,aver2);
//	return 0;
//}
////��ƽ��ֵ
//float average(float array[],int numb)
//{
//	int i;
//	float aver,sum=array[0];
//	for(i=1;i<numb;i++)
//	{
//		sum+=array[i];
//	}
//	aver=sum/numb;
//	return aver;
//}

//��7.12����ѡ�񷨶�������10����������С��������
//#include<stdio.h>
//int main()
//{
//	int arr[10]={0},i,j,temp;
//	printf("����10��������\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(arr[i]>arr[j])
//			{
//				arr[i]=arr[j];
//			}
//		}
//	}
//	printf("�����С�����10������Ϊ��\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%3d",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//�Ľ�1��
//#include<stdio.h>
//int main()
//{
//	void sort(int array[],int n);
//	int arr[10]={0},i;
//	printf("����10��������\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	sort(arr,10);
//	printf("�����С�����10������Ϊ��\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%3d",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void sort(int array[],int n)
//{
//	int i,j,k,t;
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(array[k]>array[j])
//			{
//				k=j;
//			}
//		}
//		t=array[k];
//		array[k]=array[i];
//		array[i]=t;
//	}
//}

//��7.13����һ��3*4�ľ���������Ԫ���е����ֵ
//#include<stdio.h>
//#define m 3
//#define n 4
//int main()
//{
//	float max_value(float a[][n]);
//	float a[m][n];
//	int i,j,max1;
//	printf("����%d*%d�ľ���a��\n",m,n);
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//			scanf("%f",&a[i][j]);
//	}
//	printf("\n");
//	printf("%d*%d�ľ���Ϊa��\n",m,n);
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//			printf("%6.2f",a[i][j]);
//		printf("\n");
//	}
//	printf("����Ԫ�������ֵΪ��%6.4f\n",max_value(a));
//	return 0;
//}
//float max_value(float a[][n])
//{
//	float max=a[0][0];
//	int i,j;
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			if(max<a[i][j])
//				max=a[i][j];
//		}
//	}
//	return max;
//}

//��7.14����һ��һά���飬�ڴ��10��ѧ���ɼ���дһ��������
//�����������ô˺����������ƽ���֡���߷֡���ͷ֡�
//#include<stdio.h.>
//#define N 10
//float Max=0,Min=0;
//int main()
//{
//	float average(float a[],int n);
//	float a[N]={0},aver=0;
//	int i;
//	printf("����%d��ѧ���ĳɼ���\n",N);
//	for(i=0;i<N;i++)
//	{
//		scanf("%f",&a[i]);
//	}
//	aver=average(a,N);
//	printf("ƽ����Ϊ:%f\n��߷�Ϊ:%f\n��ͷ�Ϊ:%f\n",aver,Max,Min);
//	return 0;
//}
////��ƽ���֡���߷֡���ͷ�
//float average(float a[],int n)
//{
//	float sum=a[0],aver;
//	int i;
//	Max=a[0];
//	Min=a[0];
//	for(i=1 ;i<n;i++)
//	{
//		if(Max<a[i])
//			Max=a[i];
//		else if(Min>a[i])
//			Min=a[i];
//		sum=sum+a[i];
//	}
//	aver=sum/n;
//	return aver;
//}

//��7.17�����1~5�Ľ׳�ֵ
//#include<stdio.h>
//int main()
//{
//	int fac(int n);
//	int i=0;
//	for(i=1;i<=5;i++)
//	{
//		printf("%d!=%d\n",i,fac(i));
//	}
//	return 0;
//}
//int fac(int n)
//{
//	static int f=1;
//	f=f*n;
//	return f;
//}

//��7.18��
//#include<stdio.h>
//int main()
//{
//	int max();
//	extern int A,B,C;
//	scanf("%d%d%d",&A,&B,&C);
//	printf("���ֵ��%d",max());
//	return 0;
//}
//int A,B,C;
//int max()
//{
//	int m;
//	m=A>B?A:B;
//	if(C>m)
//		m=C;
//	return m;
//}

//��7.20����һ���ַ������������ɸ��ַ���
//������һ���ַ���Ҫ������ַ������ַ�ɾȥ�����ⲿ����ʵ�֡�
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void enter_string(char str[]);
//	char delete_string(char str[],char c);
//	void print_string(char str[]);
//	char c,str[80];
//	printf("����һ���ַ�����\n");
//	enter_string(str);
//	printf("����һ���ַ���\n");
//	scanf("%c",&c);
//	delete_string(str,c);
//	printf("���ɾ������ַ�����\n");
//	print_string(str);
//	return 0;
//}
//void enter_string(char str[])
//{
//	gets(str);
//}
//char delete_string(char str[],char c)
//{
//	int i,j;
//	for(i=j=0;str[i]!='\0';i++)
//	{
//		if(str[i]!=c)
//			str[j++]=str[i];
//	}
//	str[j]='\0';
//}
//void print_string(char str[])
//{
//	printf("%s\n",str);
//}
