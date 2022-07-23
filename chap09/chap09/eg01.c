#define _CRT_SECURE_NO_WARNINGS 1
//例9.1：把一个学生的信息（包括学号、姓名、性别、住址）放在一个结构体变量中，然后输出这个学生的信息
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

//例9.2：输入两个学生的学号、姓名和成绩，输出成绩较高的学生的学号、姓名和成绩
//#include<stdio.h>
//int main()
//{
//	struct Student
//	{
//		int num;
//		char name[20];
//		float score;
//	}student1,student2;
//	printf("分别输入两个学生的学号、姓名和成绩为：\n");
//	scanf("%d%s%f",&student1.num,student1.name,&student1.score);
//	scanf("%d%s%f",&student2.num,student2.name,&student2.score);
//	printf("成绩较高的学生为:\n");
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

//例9.3：有3个候选人，每个选民只能投票选一人，要求编一个统计选票的程序，先后输入被选人的姓名，最后输出个人得票结果
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
//	printf("投票：\n");
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

//例9.4：有n个学生的信息（包括学号、姓名、成绩），要求按照成绩的高低顺序输出各学生的信息

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
//	/*printf("输入学生数：%d\n",n);
//	printf("分别输入学生信息（包括学号、姓名、成绩）：\n");
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
//	printf("输出各学生的信息：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%5d %8s %4.2f\n",stu[i].num,stu[i].name,stu[i].score);
//	}
//	return 0;
//}

//更改0:
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
//	printf("输入学生数：%d\n",n);
//	printf("分别输入学生信息（包括学号、姓名、成绩）：\n");
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
//	printf("输出各学生的信息：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%5d %8s   %4.2f\n",stu[i].num,stu[i].name,stu[i].score);
//	}
//	return 0;
//}

//更改1：
//#include <stdio.h>
//#include <stdlib.h>
//struct Student{                                    //定义结构体类型Student
//	int num;
//	char name[20];
//	float score;
//};
//int main()
//{
//	void input(Student *st, int n);                    //定义输入函数
//    void print(Student *st, int n);                    //定义输出函数
//    void sort(Student *st, int n);                     //定义排序函数
//	Student *stu;                                  //定义结构体指针stu
//	int n;
//	printf("Please enter Student number: ");       //输入学生个数
//	scanf("%d", &n);
//	stu=(Student*)malloc(n*sizeof(Student));       //为stu分配内存空间
//	input(stu, n);                                 //调用输入函数
//	sort(stu, n);                                  //调用排序函数
//	print(stu, n);                                 //调用输出函数
//	system("pause");
//	return 0;
//}
////输入函数
//void input(Student *st, int n)
//{
//	int i;
//	for (i=0; i<n; i++)
//	{
//		printf("Please enter No.%d student info: ", i+1);
//		scanf("%d %s %f", &st[i].num, st[i].name, &st[i].score);
//	}
//}
////输出函数
//void print(Student *st, int n)
//{
//	Student *p;
//	for (p=st, printf("Sort by:\n"); p<st+n; printf("%d %-7s %.2f\n", p->num, p->name, p->score), p++);
//}
////排序函数
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

//更改1：
 /*有n个学生的信息（包括学号、姓名、成绩），要求按照成绩的高低顺序输出各学生的信息。*/
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

//例9.5：通过指向结构体变量的指针变量输出结构体变量中的成员变量
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

//例9.6:有3个学生的信息，放在结构体数组中，要求输出全部学生的信息
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

//例9.7：有n个结构体变量，内含有学生学号、姓名和3门课程的成绩。要求输出平均成绩最高的学生的信息（包括学号、姓名、3门课程成绩和平均成绩）
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
//	printf("请输入各学生的信息：学号、姓名、3门课成绩：\n");
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
//	printf("\n成绩最高的学生是:\n");
//	printf("学号：%d\n姓名：%s\n三门课成绩：%5.1f,%5.1f,%5.1f\n平均成绩：%6.2f\n",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
//}

//例9.8：建立一个简单链表，它由3个学生数据的结点组成，要求输出各节点中的数据
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

//例9.9：写一个函数建立一个有3名学生数据的单向动态链表
/*#include<stdio.h>

int main()
{
	return 0;
} */    