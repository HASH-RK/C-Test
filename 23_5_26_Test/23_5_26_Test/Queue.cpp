#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);

	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}


//判头尾结点空
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
		pq->size ++;
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
    //分情况
//    1.一个节点
    assert(pq);
    if(pq->phead->next == NULL)
    {
        free(pq->phead);
        pq->phead = pq->ptail = NULL;
    }
//    2.头删
    else{
        QNode* next = pq->phead->next;
        free(pq->phead);
        pq->phead = next;
    }
    pq->size--;
}

// 获取队列头部元素
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	return pq->phead->data;
}
// 获取队列队尾元素
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	return pq->ptail->data;
}
 //获取队列中有效元素个数
int QueueSize(Queue* pq)
{
	assert(pq);
	return(pq->size);
}

// 销毁队列
//void QueueDestroy(Queue* pq)
//{
//	assert(pq);
//	if (pq->phead->next == NULL)
//	{
//		free(pq->phead);
//		pq->phead = pq->ptail = NULL;
//	}
//	else
//	{
//		QueueNode* next = pq->phead->next;
//		free(pq->phead);
//		pq->phead = next;
//	}
//
//	pq->size--;
//}