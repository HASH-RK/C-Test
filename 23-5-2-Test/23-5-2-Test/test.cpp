#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdlib.h>

int main()
{
	SL sl;
	SLInit(&sl);
	//SLPushBack(&sl, 1);
	//SLPushBack(&sl, 2);
	//SLPushBack(&sl, 3);
	//SLPushBack(&sl, 4);3
	//SLPushBack(&sl, 5);

	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPrint(&sl);

	//SLPopFront(&sl);
	//SLPrint(&sl);

	//SLPopFront(&sl);
	//SLPrint(&sl);

	//SLPopFront(&sl);
	//SLPopFront(&sl);
	//SLPrint(&sl);
	//顺序表查找
	SeqListFind(&sl,3);
	SeqListInsert(&sl, 2, 999);
	SLPrint(&sl);
	SeqListErase(&sl, 2);
	SLPrint(&sl);

	return 0;
}
