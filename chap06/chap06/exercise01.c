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
//(1)���������
//#include<stdio.h>
//int main()
//{
//
//	int a[10],i,n=10;
//	printf("�������飺\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("���������Ϊ��\n");
//	for(i=n-1;i>=0;i--)
//	{
//		printf("%2d",a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//(2)��������
//#include<stdio.h>
//#include<math.h>
//#define n 5
//int main()
//{
//	int a[n],i,temp;
//	printf("��������a��\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("����a��\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%4d",a[i]);
//	}
//	for(i=0;i<sqrt(1.0*n);i++)
//	{
//		temp=a[i];
//		a[i]=a[n-i-1];
//		a[n-i-1]=temp;
//	}
//	printf("\n��������Ϊ��\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%2d",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//6.6��������µ���������Σ�Ҫ�����10�У�
//            1
//            1  1
//            1  2  1
//            1  3  3  1
//            1  4  6  4  1
//            1  5  10 10 5  1
//            .  .  .  .  .  .
//1��ÿ�����������Ϸ�����֮�͡�
//2��ÿ���������ҶԳƣ��� 1 ��ʼ�𽥱��
//3����n �е�������n+1 �
//4����n �����ֺ�Ϊ2(n-1) ��2 ��(n-1) �η�����
//5��(a+b) n ��չ��ʽ�еĸ���ϵ�����ζ�Ӧ������ǵĵ�(n+1) ���е�ÿһ�
//6����n �еĵ�m�����͵�n-m ������ȣ���C(n,m)=C(n,n-m) ��
//#include<stdio.h>
//#define n 10
//int main()
//{
//	int i,j,a[n][n];
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<i+1;j++)
//		{
//			//a[i][j]=1;
//			a[i][i]=1;
//			a[i][0]=1;
//		}
//	}
//	for(i=2;i<n;i++)
//	{
//		for(j=1;j<i;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	printf("������������Ϊ��\n");
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<i+1;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6.7�����ħ����
//ħ��������ÿһ�С�ÿһ�кͶԽ���֮�;����
//���磺����ħ����Ϊ��
//     8  1  6
//     3  5  7
//     4  9  2
//Ҫ�����1~n^2����Ȼ�����ɵ�ħ����
//ħ����Ľ���Ϊ����
//#include<stdio.h>
//int main()
//{
//	int i,j,a[15][15],n,p,k,i_0,j_0;//jΪ�����꣬iΪ�����꣬i_0��¼�����꣬j_0��¼������
//	p=1;
//	while(p)
//	{
//		printf("enter n(n=1--15):");
//	    scanf("%d",&n);
//        if((n!=0)&&(n<=15)&&(n%2!=0))
//	    {
//		     p=0;
//	    }
//	}
//	//��ʼ��
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			a[i][j]=0;
//		}
//	}
//	//����������ħ����
//    i=1;
//	j=n/2+1;
//	a[i][j]=1;
//	for(k=2;k<=n*n;k++)
//	{
//		i_0=i;j_0=j;//��¼��һ��ѭ���С�������
//		if(i==1&&j==n)//��1�е�n�е����
//        {
//            i=n;//������ת����n��
//            j=1;//������ת����1��
//        }
//        else if(i==1)//��1�зǵ�n�е����
//        {
//            i=n;//������ת����n��
//            j++;//������+1
//        }
//        else if(j==n)//��n�зǵ�1�е����
//        {
//            j=1;//������ת����1��
//            i--;//������-1
//        }
//        else//��ͨ���
//        {
//            i--;//������-1
//            j++;//������+1
//        }
//        if(a[i][j]!=0)//�жϸ�λ���Ƿ�������
//        {
//            i=i_0+1;//�����ڱ���forѭ����ʼ�����꣩������+1��ת������һ��
//            j=j_0;//�����ڱ���forѭ����ʼ�����꣩�����겻��
//        }
//        a[i][j]=k;//��ֵ
//    }
//	//���ħ����
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////������ħ����
//void odd_number(int n)
//{
//    int i;
//    int row,line,row_0,line_0;//rowΪ�����꣬lineΪ�����꣬row_0��¼�����꣬line_0��¼������
//    line=0;row=(n+1)/2-1;//��ʼ���С�������
//    a[line][row]=1;
//    for(i=2;i<=n*n;i++)
//    {
//        line_0=line;row_0=row;//��¼��һ��ѭ���С�������
//        if(line==0&&row==n-1)//��1�е�n�е����
//        {
//            line=n-1;//������ת����n��
//            row=0;//������ת����1��
//        }
//        else if(line==0)//��1�зǵ�n�е����
//        {
//            line=n-1;//������ת����n��
//            row++;//������+1
//        }
//        else if(row==n-1)//��n�зǵ�1�е����
//        {
//            row=0;//������ת����1��
//            line--;//������-1
//        }
//        else//��ͨ���
//        {
//            line--;//������-1
//            row++;//������+1
//        }
//        if(a[line][row]!=0)//�жϸ�λ���Ƿ�������
//        {
//            line=line_0+1;//�����ڱ���forѭ����ʼ�����꣩������-1��ת������һ��
//            row=row_0;//�����ڱ���forѭ����ʼ�����꣩�����겻��
//        }
//        a[line][row]=i;//��ֵ
//    }
//}

//6.8���ҳ�1����ά�����еİ��㣬����λ���ϵ�Ԫ���ڸ���������ڸ�������С��
//Ҳ����û�а���
//#include<stdio.h>
//#define m 3
//#define n 2
//int main()
//{
//	int a[m][n],i,j,max,maxj,flag,k;
//	//��������
//	printf("��������a��\n");
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	//�������
//	printf("�������a��\n");
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			printf("%3d",a[i][j]);
//		}
//		printf("\n");
//	}
//	for(i=0;i<m;i++)
//	{
//		max=a[i][0];
//		maxj=0;
//		for(j=0;j<n;j++) //�ҳ���i���е������
//		{
//			if(a[i][j]>max)
//			{
//				max=a[i][j];
//				maxj=j;
//			}
//		}
//		flag=1;
//	    for(k=0;k<m;k++)
//	    {
//			if(max>a[k][maxj])
//			{
//				flag=0;
//				continue;
//			}
//	    }
//		if(flag==1)
//		{
//			printf("a[%d][%d]=%d\n",i,maxj,max);
//			break;
//		}
//	}
//	if(!flag)
//		printf("������㲻���ڣ�\n");
//	return 0;
//}

//6.9����15��������С����˳������һ��������
//����һ������Ҫ�����۰���ҷ��ҳ������������еڼ���Ԫ�ص�ֵ
//����������������У���������޴�����
//#include<stdio.h>
//#define n 3
//int main()
//{
//	int i,number,top,bott,mid,loca,a[n],flag=1,sign;
//    char ch;
//	printf("��������:\n");
//	scanf("%d",&a[0]);
//	i=1;
//	while(i<n)
//	{
//		scanf("%d",&a[i]);
//		if(a[i]>=a[i-1])
//			i++;
//		else
//			printf("�������������\n");
//	}
//	printf("\n");
//	printf("��С����˳������һ�������У�\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%5d",a[i]);
//	}
//	printf("\n");
//	while(flag)
//	{
//		printf("����Ҫ���ҵ�����");
//    	scanf("%d",&number);
//		sign=0;
//		top=0;
//		bott=n-1;
//		if((number<a[0])||(number>a[n-1]))
//			loca=-1;
//		while((!sign)&&(top<=bott))
//		{
//			mid=(bott+top)/2;
//			if(number==a[mid])
//			{
//				loca=mid;
//				printf("%d��λ���ǣ�%d\n",number,loca+1);
//				sign=1;
//			}
//			else if(number<a[mid])
//			{
//				bott=mid-1;
//			}
//			else
//			{
//				top=mid+1;
//			}
//		}
//		if(!sign||loca==-1)
//		{
//			printf("�Ҳ���%d.\n",number);
//		}
//		printf("continue or not(Y/N)?");
//		scanf(" %c",&ch);
//		if(ch=='N'||ch=='n')
//			flag=0;
//	}
//	return 0;
//}

//6.10����һƪ���£���3�����֣�ÿ����80���ַ�
//Ҫ�󣺷���ͳ�Ƴ�����Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո������ַ�����
//#include<stdio.h>
//#define m 3
//#define n 80
//int main()
//{
//	int i,j,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
//	char a[m][n];
//	for(i=0;i<m;i++)
//	{
//		printf("�����%d�����֣�\n",i+1);
//		gets(a[i]);
//		for(j=0;j<n&&a[i][j]!='\0';j++)
//		{
//			if(a[i][j]>='A'&&a[i][j]<='Z')
//				sum1++;
//			else if(a[i][j]>='a'&&a[i][j]<='z')
//				sum2++;
//			else if(a[i][j]>='0'&&a[i][j]<='9')
//				sum3++;
//			else if(a[i][j]==' ')
//				sum4++;
//			else
//				sum5++;
//		}
//	}
//	printf("Ӣ�Ĵ�д��ĸ:%d\nСд��ĸ:%d\n����:%d\n�ո�:%d\n�����ַ�����:%d\n",sum1,sum2,sum3,sum4,sum5);
//	return 0;
//}

//6.11���������ͼ��
//  * * * * *
//   * * * * *
//    * * * * *
//     * * * * *
//      * * * * *
//#include<stdio.h>
//int main()
//{
//	char a[5]={'*','*','*','*','*'};
//	int i,j,k;
//	char space=' ';
//	for(i=0;i<5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%c",space);
//		}
//		for(k=0;k<5;k++)
//		{
//			printf("%c",a[k]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}

//6.12�����������������룺
//   A->Z    a->z
//   B->Y    b->y
//   C->X    c->x
//���������ԭ��
