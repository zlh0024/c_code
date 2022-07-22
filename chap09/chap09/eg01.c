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