#define _CRT_SECURE_NO_WARNINGS 1
#include"SGL.h"

void Test1()
{
	SLTNode* SLT = NULL;
	SLTPushFront(&SLT, 1);
	SLTPushFront(&SLT, 2);
	SLTPushFront(&SLT, 3);
	SLTPushFront(&SLT, 4);
	SLTPushFront(&SLT, 5);
	SLTPushBack(&SLT, 8);
	SLTPushBack(&SLT, 8);
	SLTPrint(SLT);

	SLFind(SLT,8);
}

void Test2()
{
	SLTNode* SLT = NULL;
	SLTPushFront(&SLT, 1);
	SLTPushFront(&SLT, 2);
	SLTPushFront(&SLT, 3);
	SLTPushFront(&SLT, 4);
	SLTPushFront(&SLT, 5);

	SLTNode* pos = SLFind(SLT, 3);
	SLInsertAfter(pos, 999);
	SLTPrint(SLT);

	//删后一个
	SLTNode* pos2 = SLFind(SLT, 5);
	SLEraseAfter(pos2);
	SLTPrint(SLT);

	//删当前
	SLTNode* pos3 = SLFind(SLT, 1);
	SLErase(&SLT, pos3);
	SLTPrint(SLT);

}

int main()
//{
//	//Test1();
//	Test2();
//	return 0;
//}