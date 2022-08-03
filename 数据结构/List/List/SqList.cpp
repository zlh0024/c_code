#define _CRT_SECURE_NO_WARNINGS 1
//2.2.1：顺序表的定义
//

//顺序表的实现--静态分配
//#define MaxSize 10
//typedef struct
//{
//	ElemType data[MaxSize];
//	int length;
//}SqList;

//例子：
//#include<stdio.h>
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];//用静态的数组存放数据元素
//	int length;     //顺序表的当前长度
//}SqList;  //顺序表的类型定义
////基本操作--初始化一个顺序表
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
////按位查找
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
//		printf("已删除第3个元素，删除元素值为=%d\n",e);
//	else
//		printf("位序i不合法，删除失败\n");
//	return 0;
//}


//
//
//顺序表的实现--动态分配
//#define InitSize 10
//typedef struct
//{
//	ElemType *data;//指示动态分配数组的指针
//	int MaxSize;  
//  int length;
//}SqList;
//
//例子：
//#include<stdio.h>
//#include<stdlib.h>
//#define InitSize 10
//typedef struct
//{
//	int *data;//指示动态分配数组的指针
//	int MaxSize;  
//    int length;
//}SqList;
////基本操作--初始化一个顺序表
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
////按位查找
//int GetElem(SqList L,int i)
//{
//	return L.data[i-1];
//}
////按值查找
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
