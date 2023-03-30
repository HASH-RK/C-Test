#define _CRT_SECURE_NO_WARNINGS 1
#include "Slist.h"
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


SListNode* BuySListNode(SLTDataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;            
	}
}

