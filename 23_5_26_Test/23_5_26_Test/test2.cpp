#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"
typedef int QDataType;
typedef struct QueueNode {
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}


//��ͷβ����
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc failed\n");
		return;
	}
	newnode->next = NULL;
	newnode->data = x;
	if (pq->phead == NULL)
	{
		assert(pq->ptail == NULL);
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
	pq->size--;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}

QDataType QueueGetFront(Queue* pq)
{
	assert(pq);
	return pq->phead->data;
}


void QueuePop(Queue* pq)
{
	//�����
//    1.һ���ڵ�
	assert(pq);
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	//    2.ͷɾ
	else {
		QNode* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
	}
	pq->size--;
}

// ��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	return pq->phead->data;
}
// ��ȡ���ж�βԪ��
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	return pq->ptail->data;
}
// ��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* pq)
{
	assert(pq);
	return(pq->size);
}


// ���ٶ���
void QueueDestroy(Queue* pq)
{
	assert(pq);
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	else
	{
		QNode* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
	}

	pq->size--;
}

typedef struct {
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate() {
	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
	if (obj == NULL)
	{
		perror("malloc failed");
		return NULL;
	}
	QueueInit(&obj->q1);
	QueueInit(&obj->q2);
	return obj;
}

void myStackPush(MyStack* obj, int x) {
	if (!QueueEmpty(&obj->q1))  QueuePush(&obj->q1, x);
	else QueuePush(&obj->q2, x);
}

int myStackPop(MyStack* obj) {
	Queue* pEmptyQ = &obj->q1;
	Queue* pNoEmptyQ = &obj->q2;
	if (!QueueEmpty(&obj->q1))
	{
		pEmptyQ = &obj->q2;
		pNoEmptyQ = &obj->q1;
	}
	while (QueueSize(pNoEmptyQ) > 1)
	{
		QueuePush(pEmptyQ, QueueFront(pNoEmptyQ));
		QueuePop(pNoEmptyQ);
	}
	int top = QueueFront(pNoEmptyQ);
	QueuePop(pNoEmptyQ);
	return top;
}

int myStackTop(MyStack* obj) {
	if (!QueueEmpty(&obj->q1))
	{
		return	QueueBack(&obj->q1);
	}
	else
	{
		return	QueueBack(&obj->q2);
	}

}

bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->q1) &&
		QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
	free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/



