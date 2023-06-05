#include"SeqList.h"
#define _CRT_SECURE_NO_WARNINGS 1

SL sl;
void Test1()
{
	SLInit(&sl);

	//SLPushBack(&sl, 0);
	//SLPushBack(&sl, 0);
	//SLPushBack(&sl, 0);
	//SLPushBack(&sl, 0);
	//SLPushBack(&sl, 0);

	SLPushFront(&sl, 4);
	SLPrint(&sl);

	SLPushFront(&sl, 4);
	SLPrint(&sl);

	SLPushFront(&sl, 4);
	SLPrint(&sl);

	SLPushFront(&sl, 4);
	SLPushFront(&sl, 4);

	//SLInsert(&sl, 0, 1);
	//SLInsert(&sl, 0, 2);
	//SLInsert(&sl, 0, 3);
	//SLInsert(&sl, 0, 4);
	//SLInsert(&sl, 0, 5);

	SLPrint(&sl);
}

void Test2()
{
	SLPushFront(&sl, 50);
	SLPushFront(&sl, 50);
	SLPushFront(&sl, 50);
	SLPushFront(&sl, 50);
	SLPushFront(&sl, 50);
	SLPrint(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);
	//SLFind(&sl, 50);
}
int main()
{
	Test2();
	return 0;
}
