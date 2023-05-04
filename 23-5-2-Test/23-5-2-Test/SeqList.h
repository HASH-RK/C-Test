#pragma once
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <iostream>
using namespace std;

typedef int SLDatatype;

typedef struct SeqList
{
	SLDatatype* a;
	int size;//有效数据个数
	int capacity;
}SL;

void SLInit(SL* sl);
void SLPushBack(SL* psl, SLDatatype x);
void SLPushFront(SL* psl, SLDatatype x);

//
void SLPopFront(SL* psl);

void SLPopBack(SL* psl);
void SLDestroy(SL* psl);
void SLCheckCapacity(SL* psl);
void SLPrint(SL* psl);

// 顺序表查找
int SeqListFind(SeqList* ps, SLDatatype x);
int SLFind(SL* psl, SLDatatype x);
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDatatype x);
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos);