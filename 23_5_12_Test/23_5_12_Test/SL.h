#pragma once
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<assert.h>
using namespace std;
typedef int SLDataType;
typedef struct SLT
{
	SLDataType data;
	struct SLT* next;
}SLTNode;

//
void SLTPrint(SLTNode* phead);
void SLTPushFront(SLTNode** phead, SLDataType x);
void SLTPushBack(SLTNode** phead, SLDataType x);
// 单链表头删
void SLTPopFront(SLTNode** pphead);
// 单链表的尾删
void SLTPopBack(SLTNode** pplist);
SLTNode* SLFind(SLTNode* phead, SLDataType x);

// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SLInsertAfter(SLTNode* pos, SLDataType x);

void SLEraseAfter(SLTNode* pos);
void SLErase(SLTNode** pphead, SLTNode* pos);

void SLDestroy(SLTNode* phead);

SLTNode* reverseList(SLTNode* head);









