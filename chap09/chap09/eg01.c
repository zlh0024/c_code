#define _CRT_SECURE_NO_WARNINGS 1
//��9.1����һ��ѧ������Ϣ������ѧ�š��������Ա�סַ������һ���ṹ������У�Ȼ��������ѧ������Ϣ
//#include<stdio.h>
//int main()
//{
//	struct Student
//	{
//		long int num;
//		char name[20];
//		char sex;
//		char addr[30];
//	}a={10101,"Li Lin",'M',"123 Beijing Road"};
//	printf("NO.:%ld\nname:%s\nsex:%c\nadress:%s\n",a.num,a.name,a.sex,a.addr);
//	return 0;
//
//}

//��9.2����������ѧ����ѧ�š������ͳɼ�������ɼ��ϸߵ�ѧ����ѧ�š������ͳɼ�
//#include<stdio.h>
//int main()
//{
//	struct Student
//	{
//		int num;
//		char name[20];
//		float score;
//	}student1,student2;
//	printf("�ֱ���������ѧ����ѧ�š������ͳɼ�Ϊ��\n");
//	scanf("%d%s%f",&student1.num,student1.name,&student1.score);
//	scanf("%d%s%f",&student2.num,student2.name,&student2.score);
//	printf("�ɼ��ϸߵ�ѧ��Ϊ:\n");
//	if(student1.score>student2.score)
//		printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
//	else if(student1.score<student2.score)
//		printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
//	else
//	{
//		printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
//		printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
//	}
//	return 0;
//}

//��9.3����3����ѡ�ˣ�ÿ��ѡ��ֻ��ͶƱѡһ�ˣ�Ҫ���һ��ͳ��ѡƱ�ĳ����Ⱥ����뱻ѡ�˵����������������˵�Ʊ���
//#include<stdio.h>
//#include<string.h>
//struct Person
//{
//	char name[20];
//	int count;
//}leader[3]={"Li",0,"Zhang",0,"Sun",0};
//int main()
//{
//	int i,j;
//	char leader_name[20];
//	printf("ͶƱ��\n");
//	for(i=1;i<=10;i++)
//	{
//		scanf("%s",leader_name);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader_name,leader[j].name)==0)
//				leader[j].count++;
//		}
//	}
//	printf("\nResult:\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name,leader[i].count);
//	}
//	return 0;
//}

//��9.4����n��ѧ������Ϣ������ѧ�š��������ɼ�����Ҫ���ճɼ��ĸߵ�˳�������ѧ������Ϣ

//#include<stdio.h>
//struct Student
//{
//	int num;
//	char name[20];
//	float score;
//};
//int main()
//{
//	struct Student stu[5]={{10101,"Zhang",78},{10102,"Whang",68.5},{10103,"Zng",79},{10104,"g",98},{10105,"Lhing",63.5}};
//	struct Student temp;
//	const int n=5;
//	int i,j,k;
//	/*printf("����ѧ������%d\n",n);
//	printf("�ֱ�����ѧ����Ϣ������ѧ�š��������ɼ�����\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%ld %s %f",&stu[i].num,stu[i].name,&stu[i].score);
//	}*/
//
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(stu[k].score<stu[j].score)
//			    k=j;
//		} 
//		temp=stu[k];
//		stu[k]=stu[i];
//		stu[i]=temp;
//	}
//	printf("�����ѧ������Ϣ��\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%5d %8s %4.2f\n",stu[i].num,stu[i].name,stu[i].score);
//	}
//	return 0;
//}

//����0:
//#include<stdio.h>
//#define n 2
//struct Student
//{
//	int num;
//	char name[20];
//	float score;
//};
//int main()
//{
//	struct Student stu[10]={0};
//	struct Student temp;
//	int i,j,k;
//	printf("����ѧ������%d\n",n);
//	printf("�ֱ�����ѧ����Ϣ������ѧ�š��������ɼ�����\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%ld %s %f",&stu[i].num,stu[i].name,&stu[i].score);
//	}
//
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(stu[k].score<stu[j].score)
//			    k=j;
//		} 
//		temp=stu[k];
//		stu[k]=stu[i];
//		stu[i]=temp;
//	}
//	printf("�����ѧ������Ϣ��\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%5d %8s   %4.2f\n",stu[i].num,stu[i].name,stu[i].score);
//	}
//	return 0;
//}

//����1��
//#include <stdio.h>
//#include <stdlib.h>
//struct Student{                                    //����ṹ������Student
//	int num;
//	char name[20];
//	float score;
//};
//int main()
//{
//	void input(Student *st, int n);                    //�������뺯��
//    void print(Student *st, int n);                    //�����������
//    void sort(Student *st, int n);                     //����������
//	Student *stu;                                  //����ṹ��ָ��stu
//	int n;
//	printf("Please enter Student number: ");       //����ѧ������
//	scanf("%d", &n);
//	stu=(Student*)malloc(n*sizeof(Student));       //Ϊstu�����ڴ�ռ�
//	input(stu, n);                                 //�������뺯��
//	sort(stu, n);                                  //����������
//	print(stu, n);                                 //�����������
//	system("pause");
//	return 0;
//}
////���뺯��
//void input(Student *st, int n)
//{
//	int i;
//	for (i=0; i<n; i++)
//	{
//		printf("Please enter No.%d student info: ", i+1);
//		scanf("%d %s %f", &st[i].num, st[i].name, &st[i].score);
//	}
//}
////�������
//void print(Student *st, int n)
//{
//	Student *p;
//	for (p=st, printf("Sort by:\n"); p<st+n; printf("%d %-7s %.2f\n", p->num, p->name, p->score), p++);
//}
////������
//void sort(Student *st, int n)
//{
//	int i, j;
//	Student temp;
//	for (i=0; i<n; i++)
//		for (j=i+1; j<n; j++)
//			if (st[i].score>st[j].score)
//			{
//				temp=st[i], st[i]=st[j], st[j]=temp;
//			}
//}

//����1��
 /*��n��ѧ������Ϣ������ѧ�š��������ɼ�����Ҫ���ճɼ��ĸߵ�˳�������ѧ������Ϣ��*/
//#include<stdio.h>
//struct student
//{
//    int number;
//    char name[20];
//    float score;
//};
//int main()
//{
//	struct student stu[5]={{001,"wang",80},{002,"zhang",89},{003,"wang",60},{004,"zhao",97},{005,"sun",100}};
//    struct student temp;
//    const int n=5;
//    int i,j,k;
//    for (i=0;i<n-1;i++)
//	  {
//       k=i;
//       for (j=i+1;j<n;j++)
//	     {
//		      if(stu[j].score>stu[k].score)
//                k=j;
//            temp=stu[k];stu[k]=stu[i];stu[i]=temp;
//       }
//    }
//   for (i=0;i<n;i++)
//   {
//        printf("%5d %8s %4.2f\n",stu[i].number,stu[i].name,stu[i].score);
//   }
//   return 0;
//}

//��9.5��ͨ��ָ��ṹ�������ָ���������ṹ������еĳ�Ա����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	struct Student
//	{
//		long num;
//		char name[20];
//		char sex;
//		float score;
//	};
//	struct Student stu_1;
//	struct Student * p;
//	p=&stu_1;
//	stu_1.num=10101;
//	strcpy(stu_1.name,"Li Lin");
//	stu_1.sex='M';
//	stu_1.score=89.5;
//	printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
//	printf("\nNo.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",(* p).num,(* p).name,(* p).sex,(* p).score);
//	return 0;
//}

//��9.6:��3��ѧ������Ϣ�����ڽṹ�������У�Ҫ�����ȫ��ѧ������Ϣ
//#include<stdio.h>
//struct Student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//};
//struct Student stu[3]={10101,"Li Lin",'M',18,10102,"Zhang Fang",'M',19,10103,"Li Si",'F',20};
//int main()
//{
//	struct Student * p;
//	printf("  No.     name             sex    age\n");
//	for(p=stu;p<stu+3;p++)
//	{
//		printf("%5d %-20s %2c  %4d\n",p->num ,p->name,p->sex,p->age);
//	}
//	return 0;
//}

//��9.7����n���ṹ��������ں���ѧ��ѧ�š�������3�ſγ̵ĳɼ���Ҫ�����ƽ���ɼ���ߵ�ѧ������Ϣ������ѧ�š�������3�ſγ̳ɼ���ƽ���ɼ���
//#include<stdio.h>
//#define N 3
//struct Student
//{
//	int num;
//	char name[20];
//	float score[3];
//	float aver;
//};
//int main()
//{
//	void input(struct Student stu[]);
//	struct Student max(struct Student stu[]);
//	void print(struct Student stud);
//	struct Student stu[N],*p=stu;
//	input(p);
//	print(max(p));
//	return 0;
//}
//void input(struct Student stu[])
//{
//	int i;
//	printf("�������ѧ������Ϣ��ѧ�š�������3�ſγɼ���\n");
//	for(i=0;i<N;i++)
//	{
//		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/(N*1.0);
//	}
//}
//struct Student max(struct Student stu[])
//{
//	int i,m=0;
//	for(i=0;i<N;i++)
//	{
//		if(stu[i].aver>stu[m].aver)
//			m=i;
//	}
//	return stu[m];
//}
//void print(struct Student stud)
//{
//	printf("\n�ɼ���ߵ�ѧ����:\n");
//	printf("ѧ�ţ�%d\n������%s\n���ſγɼ���%5.1f,%5.1f,%5.1f\nƽ���ɼ���%6.2f\n",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
//}

//��9.8������һ������������3��ѧ�����ݵĽ����ɣ�Ҫ��������ڵ��е�����
//#include<stdio.h>
//struct Student
//{
//	int num;
//	float score;
//	struct Student * next;
//};
//int main()
//{
//	struct Student a,b,c,*head,*p;
//	a.num=10101;
//	a.score=89.5;
//	b.num=10103;
//	b.score=88.5;
//	c.num=10105;
//	c.score=85;
//	head=&a;
//	a.next=&b;
//	b.next=&c;
//	c.next=NULL;
//	p=head;
//	do
//	{
//		printf("%ld %5.1f\n",p->num,p->score);
//		p=p->next;
//	}while(p!=NULL);
//	return 0;
//	return 0;
//}

//��9.9��дһ����������һ����3��ѧ�����ݵĵ���̬����
/*#include<stdio.h>

int main()
{
	return 0;
} */    