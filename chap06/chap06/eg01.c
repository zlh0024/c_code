#define _CRT_SECURE_NO_WARNINGS 1
//��6.1����10������Ԫ�����θ�ֵΪ��
//0��1��2��3��4��5��6��7��8��9
//Ҫ���������
//#include<stdio.h>
//int main()
//{
//	int i;
//	//int a[10]={0,1,2,3,4,5,6,7,8,9};
//	int a[10];
//	for(i=0;i<=9;i++)
//	{
//		a[i]=i;
//	}
//	printf("�����������Ԫ�أ�\n");
//	for(i=9;i>=0;i--)
//	{
//		printf("%d    ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//��6.2�������鴦����Fibonacci��������
//��Fibonacci��쳲�����������
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
//	int f[20]={1,1},i;
//	printf("ǰ20��쳲���������Ϊ��1 1 ");
//	for(i=2;i<=19;i++)
//	{
//		f[i]=f[i-1]+f[i-2];
//		printf("%d ",f[i]);
//	}
//	return 0;
//}

//��10�������������Ҫ���������С�����˳������
//ð�ݷ�����    ��������
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int i,j,n=10,tep;
//	printf("������10�����֣�\n");
//	for(i=0;i<=n-1;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("\n");
//	for(j=0;j<n-1;j++)
//	{
//		//��һ��
//	    for(i=0;i<n-j-1;i++)
//     	{
//	     	if(arr[i]>arr[i+1])
//		    {
//			    //����
//			    tep=arr[i];
//			    arr[i]=arr[i+1];
//			    arr[i+1]=tep;
//		    }
//	    }
//	}
//	printf("��������Ϊ��\n");
//	for(i=0;i<=n-1;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//��6.4����һ����ά�����к��л������浽��һ����ά������
//����:a={{1,2,3},{4,5,6}}
//b={{1,4},{2,5},{3,6}}
//#include<stdio.h>
//int main()
//{
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int i,j,b[3][2];  
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=1;j++)
//		{
//			b[i][j]=a[j][i];
//			printf("%5d ",b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����1��
//#include<stdio.h>
//int main()
//{
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int i,j,b[3][2];
//	printf("�������a:\n");
//	for(i=0;i<=1;i++)
//	{
//		for(j=0;j<=2;j++)
//		{
//			printf("%5d ",a[i][j]);
//			b[j][i]=a[i][j];
//		}
//		printf("\n");
//	}  
//	printf("�������b:\n");
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=1;j++)
//		{
//			printf("%5d ",b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��6.5����һ��3*4�ľ���
//Ҫ���������ֵ�����Ǹ�Ԫ�ص�ֵ
//�Լ������ڵ��кź��к�
//#include<stdio.h>
//int main()
//{
//	double arr[3][4],max;
//	int i,j,row=0,colum=0;
//	printf("����һ��3*4�ľ���\n");
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=3;j++)
//		{
//			scanf("%lf",&arr[i][j]);
//		}
//		printf("\n");
//	}
//	max=arr[0][0];
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=3;j++)
//		{
//			if(max<arr[i][j])
//			{
//				max=arr[i][j];
//				row=i;
//				colum=j;
//			}
//		}
//	}
//	printf("ֵ���Ԫ�ص�ֵΪ��%.3f\n,�к�Ϊ��%d,�к�Ϊ��%d\n",max,row,colum);
//	return 0;
//}

//��6.6�����һ����֪���ַ���
//#include<stdio.h>
//int main()
//{
//	char ch[10]={'I',' ','a','m',' ','h','a','p','p','y'};
//	int i;
//	for(i=0;i<=9;i++)
//	{
//		printf("%c",ch[i]);
//	}
//	printf("\n");
//	return 0;
//}

//��6.7�����һ������ͼ
//#include<stdio.h>
//int main()
//{
//	char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
//	int i,j;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%c",diamond[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

 //��6.8������һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ���
//#include<stdio.h>
//int main()
//{
//	char string[81];
//	int i,num=0,word=0;
//	char c;
//	gets(string);
//	for(i=0;(c=string[i])!='\0';i++)
//	{
//		if(c==' ')
//			word=0;
//		else
//			if(word==0)
//			{
//				word=1;
//				num++;
//			}
//	}
//	printf("�����������%d\n",num);
//	return 0;
//}

//��6.9���������ַ�����Ҫ���ҵ����С������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char c1[81],c2[81],c3[81];
//	printf("���������ַ������ֱ�Ϊ��\n");
//	gets(c1);
//	gets(c2);
//    gets(c3);
//	if(strcmp(c1,c2)<0)
//	{
//		//c1�Ķ�������㹻��
//		strcpy(c1,c2);
//	}
//	if(strcmp(c1,c3)<0)
//	{
//		//c1�Ķ�������㹻��
//		strcpy(c1,c3);
//	}
//	printf("���������Ϊ��%s",c1);
//	return 0;
//}

//����1��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[3][20];
//	char string[20];
//	int i;
//	printf("���������ַ������ֱ�Ϊ��\n");
//	for(i=0;i<3;i++)
//	{
//		gets(str[i]);
//	}
//	if(strcmp(str[0],str[1])>0)
//	{
//		//c1�Ķ�������㹻��
//		strcpy(string,str[0]);
//	}
//	else
//	{
//		strcpy(string,str[1]);
//	}
//	if(strcmp(str[2],string)>0)
//	{
//		strcpy(string,str[2]);
//	}
//	printf("���������Ϊ��%s\n",string);
//	return 0;
//}