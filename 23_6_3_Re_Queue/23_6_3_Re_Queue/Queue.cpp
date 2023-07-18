#include"Queue.h"
#define _CRT_SECURE_NO_WARNINGS 1

void QueueInit(Queue* pq)
{
	assert(pq);
	//pq->phead = pq->ptail = NULL;
	pq->phead =  NULL;
	pq->ptail = NULL;
	pq->size = 0;
}
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = cur->next;
	}
	pq->size = 0;
}

void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc failed");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;

	if (pq->phead == NULL)
	{
		if (pq->ptail == NULL)
		{
			/*多此一举 pq->phead->next = newnode;*/
			pq->phead = pq->ptail = newnode;
		}
	}
	else {
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
	pq->size++;
}
void QueuePop(Queue* pq)
{
	assert(pq);
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	//两及以上节点
	else
	{
		QNode* cur = pq->phead;
		pq->phead = pq->phead->next;
		free(cur);
	}
	pq->size--;
}
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	return pq->phead->data;
}
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	return pq->ptail->data;
}
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return(pq->phead == NULL);
}


int PartSort3(int* a, int left, int right) {
	int prev = cur - 1;
	int midPos = GetMiddleIndex(a, left, right);
	if (midPos != right - 1) {
		Swap(&amp; a[midPos], &amp; a[right - 1]);
	}
	int key = a[right - 1];
	while (cur < right) {
		if (a[cur] < key & amp; &amp; ++prev != cur) {
			Swap(&amp; a[cur], &amp; a[prev]);
		}
		cur++;
	}
	if (++prev != right - 1) {
		Swap(&amp; a[right - 1], &amp; a[prev]);
	}
	return prev;
}