#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<assert.h>
using namespace std;
typedef int SLDatatype;
typedef struct SeqList {
	SLDatatype* a;
	int size;
	int capacity;
}SL;

void SLInit(SL* psl);
void SLDestroy(SL* psl);

void SLPrint(SL* psl);

//STL�������
void SLPushBack(SL* psl, SLDatatype x);
void SLPushFront(SL* psl, SLDatatype x);
void SLPopBack(SL* psl);
void SLPopFront(SL* psl);

void SLInsert(SL* psl, int pos, SLDatatype x);
void SLErase(SL* psl, int pos);

// �ҵ������±꣬û���ҵ�����-1
int SLFind(SL* psl, SLDatatype x);
void SLModify(SL* psl, int pos, SLDatatype x);


