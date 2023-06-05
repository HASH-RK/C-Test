#include"SeqList.h"
#define _CRT_SECURE_NO_WARNINGS 1

void SLInit(SL* psl)
{
	assert(psl);
	psl->a =(SLDatatype*) malloc(sizeof(SLDatatype)*4);
	if (psl == NULL)
	{
		perror("malloc failed");
	}
	psl->capacity = 4;
	psl->size = 0;
}

void SLDestroy(SL* psl)
{
	assert(psl);
	free(psl->a);
	psl->a = NULL;
	psl->capacity = 0;
	psl->size = 0;
}


void SLPrint(SL* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	puts("");
}


void SLCheckCapacity(SL* psl)
{
	assert(psl);
	if (psl->capacity == psl->size)
	{
		SLDatatype* tmp =(SLDatatype*)realloc(psl->a,sizeof(SLDatatype)* (psl->capacity)*2);
		if (tmp == NULL)
		{
			perror("realloc failed");
		}
		psl->a = tmp;
		psl->capacity *= 2;
	}
}

//尾插
void SLPushBack(SL* psl, SLDatatype x)
{
	assert(psl);
//非复用做法
	//SLCheckCapacity(psl);
	//psl->a[psl->size] = x;
	//psl->size++;

	//复用Insert
	SLInsert(psl, psl->size - 1, x);
}
void SLPushFront(SL* psl, SLDatatype x)
{
	SLInsert(psl, 0, x);
}

//头删
void SLPopFront(SL* psl)
{
	assert(psl);
	//覆盖做法
	int str = 0;
	while (str < psl->size-1)
	{
		//后一个覆盖前一个1
		psl->a[str] = psl->a[str + 1];
		str++;
	}
	psl->size--;
}

void SLPopBack(SL* psl)
{
	//非复用Erase
	//判空
	//assert(psl->size > 0);
	//psl->a[psl->size - 1] = 0;
	//psl->size--;
//复用
	SLErase(psl, psl->size - 1);
}

//pos下标插入
void SLInsert(SL* psl, int pos, SLDatatype x)
{
	//数据后挪
	assert(psl);
	assert(pos >= 0 && pos <= psl->size);
	SLCheckCapacity(psl);
	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end+1] = psl->a[end];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;
}
void SLErase(SL* psl, int pos)
{
	//判断pos位置
	assert(psl);
	assert(0 <= pos && pos < psl->size);
	//assert(psl->size > 0);

	int start = pos + 1;
	while (start < psl->size)
	{
		psl->a[start - 1] = psl->a[start];
		++start;
	}
	psl->size--;

}

// 找到返回下标，没有找到返回-1
int SLFind(SL* psl, SLDatatype x)
{
	assert(psl);
	int str = 0;
	while (str <= psl->size-1)
	{
		if (psl->a[str] == x)
		{
			return str;
		}
		str++;
	}
	return -1;
	//没有找到返回-1
}
void SLModify(SL* psl, int pos, SLDatatype x);
