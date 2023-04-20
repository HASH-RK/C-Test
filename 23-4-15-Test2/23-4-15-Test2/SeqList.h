#pragma once
#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<assert.h>

using namespace std;

#define INIT_CAPACITY 4;
typedef int SLDatatype;

typedef struct SeqList {
	SLDatatype* a;
	int capacity;
	int size;

}SL;

void PushFront(SL* ps, SLDatatype);
void PushBack(SL* ps,  SLDatatype);

void PopFront(SL* ps);
void PopBack(SL* ps);
