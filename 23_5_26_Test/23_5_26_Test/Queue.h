#pragma once
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<cstdio>

typedef int QDataType;
typedef struct QueueNode {
	struct QueueNode* next;
	QDataType data;
}QNode;

struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
};

void QueueInit(Queue* pq);
void QueuePush(Queue* pq,QDataType x);
void QueuePrint(Queue* pq);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0
bool QueueEmpty(Queue* pq);

void QueuePop(Queue* q);
// 获取队列头部元素
QDataType QueueFront(Queue* q);
// 获取队列队尾元素
QDataType QueueBack(Queue* q);
// 获取队列中有效元素个数
int QueueSize(Queue* q);

// 销毁队列
void QueueDestroy(Queue* q);
