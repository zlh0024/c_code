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