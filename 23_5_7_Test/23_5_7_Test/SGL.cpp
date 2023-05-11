#define _CRT_SECURE_NO_WARNINGS 1
#include "SGL.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d ->", cur->data);
		cur = cur->next;
	}
	printf(" NULL");
}

SLTNode* BuySLNode(SLDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc failed");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushFront(SLTNode** phead, SLDataType x)
{
	SLTNode* newnode = BuySLNode(x);
	newnode->next = *phead;
	*phead = newnode;
}



//void SLTPushBack(SLTNode* phead, SLDataType x)//err没连上
//{
//	SLTNode* tail = phead;
//	while (tail != NULL)
//	{
//		tail = tail->next;
//	}
//	SLTNode* newnode = BuySLNode(x);
//	tail = newnode;
//}



void SLTPushBack(SLTNode** pphead, SLDataType x)
{
	SLTNode* tail = *pphead;
	while (tail->next!=NULL)
	{
		tail = tail->next;
	}
	SLTNode* newnode = BuySLNode(x);
	tail->next = newnode;
}


void SLTPopFront(SLTNode** pphead)
{
	//若空
	assert(*pphead);

	SLTNode* cur = *pphead;
	*pphead = (*pphead)->next;
	free(cur);
}

void SLTPopBack(SLTNode** pphead)
{
	assert(*pphead);

	//单节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
	}
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next->next != NULL)
		{
			cur = cur->next;
		}
		free(cur->next);
		cur->next = NULL;
	}

}
//err尾结点被忽略
//   cur->next为null跳过尾结点
// 
//SLTNode* SLFind(SLTNode* phead, SLDataType x)
//{
//	SLTNode* cur = phead;
//	while (cur->next!=NULL)
//	{
//		if (cur->data == x)
//		{
//			puts("");
//			printf("%p\n", cur);
//			return cur;
//		}
//		cur = cur->next;
//	}
//	puts("");
//	printf("not found\n");
//	return NULL;
//}

SLTNode* SLFind(SLTNode* phead, SLDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			puts("");
			printf("%p\n", cur);
			return cur;
		}
		cur = cur->next;
	}
	puts("");
	printf("not found\n");
	return NULL;
}



void SLInsertAfter(SLTNode* pos, SLDataType x)
{
	SLTNode* newnode = BuySLNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

//删pos位置
void SLErase(SLTNode** pphead, SLTNode* pos)
{
	assert(*pphead);
	assert(pos);
	if (pos == *pphead)
		SLTPopFront(pphead);
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next!=pos)
		{
			prev = prev->next;
		}
		prev->next =prev->next->next;
		free(pos);
	}
}

void SLEraseAfter(SLTNode* pos)
{
	//漏了判断空
	assert(pos);
	//单节点删什么删
	assert(pos->next);
	SLTNode* cur = pos->next;
	pos->next = pos->next->next;
	free(cur);
}

void SLDestroy(SLTNode* phead)
{
	phead->next = NULL;
	free(phead);
}


