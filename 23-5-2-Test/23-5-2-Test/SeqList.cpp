#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
#include <iostream>

void SLInit(SL* psl)
{
	psl->a =(int* ) malloc(sizeof(SLDatatype) * 4);
	if (psl->a == NULL)
	{
		perror("malloc failed");
	}
	psl->size = 0;
	psl->capacity = 4;
}

void SLDestroy(SL* psl)
{
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

//扩容
void SLCheckCapacity(SL* psl)
{
	if (psl->size == psl->capacity)
	{
		SLDatatype* tmp = (SLDatatype*) realloc(psl->a, sizeof(SLDatatype) * (psl->capacity) * 2);
		if (tmp == NULL)
		{
			perror("relloc failed");
		}
	}
}

void SLPrint(SL* psl)
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

//尾插
void SLPushBack(SL* psl,SLDatatype x)
{
	psl->a[psl->size++] = x;
}

//头插
void SLPushFront(SL* psl, SLDatatype x)
{	
	SLCheckCapacity(psl);
	int end = psl->size - 1;
	//1-后挪数据
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[0] = x;
	psl->size++;
}

//头删
void SLPopFront(SL* psl)
{
	assert(psl->size > 0);
	////法1
	//int start = 0;
	//while (start<psl->size-1)
	//{
	//	psl->a[start] = psl->a[start + 1];
	//  start++;
	//}
	//psl->size--;

	//法2
	int start = 1;
	while (start < psl->size)
	{
		psl->a[start-1] = psl->a[start];
		start++;
	}
	psl->size--;
}


//尾删
void SLPopBack(SL* psl)
{

	assert(psl->size > 0);
	psl->size--;
}

 //顺序表查找
int SeqListFind(SL* psl, SLDatatype x)
{

	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}
	printf("-1\n");
}
 

// 顺序表在pos位置插入x
void SeqListInsert(SL* psl, int pos, SLDatatype x)
{
	assert(pos <= psl->size && psl >= 0);
	SLCheckCapacity(psl);
	int end = psl->size - 1;
	//1-从前往后挪数据
	while (end >= pos)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;
}
// 顺序表删除pos位置的值
void SeqListErase(SL* psl, int pos)
{
	assert(psl->size > 0);
	//前覆盖后
	int end = psl->size;
	while (start < psl->size-1)
	{
		psl->a[start+1] = psl->a[start];
		start++;
	}
	psl->size--;
}