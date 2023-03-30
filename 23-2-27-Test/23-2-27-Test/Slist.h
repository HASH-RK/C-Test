#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data; // val
	struct SListNode* next; //
}SListNode;//

void SListPrint(SListNode* phead);
void SListPushBack(SListNode** pphead, SLTDataType x);
void SListPushFront(SListNode** pphead, SLTDataType x);