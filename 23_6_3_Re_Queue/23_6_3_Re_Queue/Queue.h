#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<stdio.h>
using namespace std;

typedef int QDataType;
typedef struct QueueNode {
	QDataType data;
	struct QueueNode* next;
}QNode;

typedef struct QueueList {
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDataType x);
void QueuePop(Queue* pq);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);


