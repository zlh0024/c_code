#define _CRT_SECURE_NO_WARNINGS 1
//2.2.1��˳���Ķ���
//

//˳����ʵ��--��̬����
//#define MaxSize 10
//typedef struct
//{
//	ElemType data[MaxSize];
//	int length;
//}SqList;

//���ӣ�
//#include<stdio.h>
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];//�þ�̬������������Ԫ��
//	int length;     //˳���ĵ�ǰ����
//}SqList;  //˳�������Ͷ���
////��������--��ʼ��һ��˳���
//void InitList(SqList &L)
//{
//	for(int i=0;i<MaxSize;i++)
//		L.data[i]=0;
//	L.length=0;
//}
//bool ListInsert(SqList &L,int i,int e)
//{
//	if(i<1||i>L.length+1)
//		return false;
//	if(L.length>=MaxSize)
//		return false;
//	for(int j=L.length;j>=i;j--)
//		L.data[j]=L.data[j-1];
//	L.data[i-1]=e;
//	L.length++;
//	return true;
//}
//bool ListDelete(SqList &L,int i,int &e)
//{
//	if(i<1||i>L.length)
//		return false;
//	e=L.data[i-1];
//	for(int j=i;j<L.length;j++)
//		L.data[j-1]=L.data[j];
//	L.length--;
//	return true;
//}
////��λ����
//int GetElem(SqList L,int i)
//{
//	return L.data[i-1];
//}
//int main()
//{
//	SqList L;
//	InitList(L);
//	ListInsert(L,3,19);
//	int e=-1;
//	if(ListDelete(L,3,e))
//		printf("��ɾ����3��Ԫ�أ�ɾ��Ԫ��ֵΪ=%d\n",e);
//	else
//		printf("λ��i���Ϸ���ɾ��ʧ��\n");
//	return 0;
//}


//
//
//˳����ʵ��--��̬����
//#define InitSize 10
//typedef struct
//{
//	ElemType *data;//ָʾ��̬���������ָ��
//	int MaxSize;  
//  int length;
//}SqList;
//
//���ӣ�
//#include<stdio.h>
//#include<stdlib.h>
//#define InitSize 10
//typedef struct
//{
//	int *data;//ָʾ��̬���������ָ��
//	int MaxSize;  
//    int length;
//}SqList;
////��������--��ʼ��һ��˳���
//void InitList(SqList &L)
//{
//	L.data=(int *)malloc(InitSize*sizeof(int));
//	L.length=0;
//	L.MaxSize=InitSize;
//}
//void IncreaseSize(SqList &L,int len)
//{
//	int *p=L.data;
//	L.data=(int *)malloc((L.MaxSize+len)*sizeof(int));
//	for(int i=0;i<L.length;i++)
//	{
//		L.data[i]=p[i];
//	}
//	L.MaxSize=L.MaxSize+len;
//	free(p);
//}
//
////��λ����
//int GetElem(SqList L,int i)
//{
//	return L.data[i-1];
//}
////��ֵ����
//int LocateElem(SqList L,int e)
//{
//	for(int i=0;i<L.length;i++)
//		if(L.data[i]==e)
//			return i+1;
//}
//int main()
//{
//	SqList L; 
//	InitList(L);
//	IncreaseSize(L,5);
//	return 0;
//}

//
