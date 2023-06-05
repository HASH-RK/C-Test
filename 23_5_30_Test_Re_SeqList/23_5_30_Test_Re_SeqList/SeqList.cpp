#include"SeqList.h"
#define _CRT_SECURE_NO_WARNINGS 1

void SLInit(SL* psl)
{
	assert(psl);
	psl->a =(SLDatatype*) malloc(sizeof(SLDatatype)*4);
	if (psl == NULL)
	{
		perror("malloc failed");
	}
	psl->capacity = 4;
	psl->size = 0;
}

void SLDestroy(SL* psl)
{
	assert(psl);
	free(psl->a);
	psl->a = NULL;
	psl->capacity = 0;
	psl->size = 0;
}


void SLPrint(SL* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	puts("");
}


void SLCheckCapacity(SL* psl)
{
	assert(psl);
	if (psl->capacity == psl->size)
	{
		SLDatatype* tmp =(SLDatatype*)realloc(psl->a,sizeof(SLDatatype)* (psl->capacity)*2);
		if (tmp == NULL)
		{
			perror("realloc failed");
		}
		psl->a = tmp;
		psl->capacity *= 2;
	}
}

//β��
void SLPushBack(SL* psl, SLDatatype x)
{
	assert(psl);
//�Ǹ�������
	//SLCheckCapacity(psl);
	//psl->a[psl->size] = x;
	//psl->size++;

	//����Insert
	SLInsert(psl, psl->size - 1, x);
}
void SLPushFront(SL* psl, SLDatatype x)
{
	SLInsert(psl, 0, x);
}

//ͷɾ
void SLPopFront(SL* psl)
{
	assert(psl);
	//��������
	int str = 0;
	while (str < psl->size-1)
	{
		//��һ������ǰһ��1
		psl->a[str] = psl->a[str + 1];
		str++;
	}
	psl->size--;
}

void SLPopBack(SL* psl)
{
	//�Ǹ���Erase
	//�п�
	//assert(psl->size > 0);
	//psl->a[psl->size - 1] = 0;
	//psl->size--;
//����
	SLErase(psl, psl->size - 1);
}

//pos�±����
void SLInsert(SL* psl, int pos, SLDatatype x)
{
	//���ݺ�Ų
	assert(psl);
	assert(pos >= 0 && pos <= psl->size);
	SLCheckCapacity(psl);
	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end+1] = psl->a[end];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;
}
void SLErase(SL* psl, int pos)
{
	//�ж�posλ��
	assert(psl);
	assert(0 <= pos && pos < psl->size);
	//assert(psl->size > 0);

	int start = pos + 1;
	while (start < psl->size)
	{
		psl->a[start - 1] = psl->a[start];
		++start;
	}
	psl->size--;

}

// �ҵ������±꣬û���ҵ�����-1
int SLFind(SL* psl, SLDatatype x)
{
	assert(psl);
	int str = 0;
	while (str <= psl->size-1)
	{
		if (psl->a[str] == x)
		{
			return str;
		}
		str++;
	}
	return -1;
	//û���ҵ�����-1
}
void SLModify(SL* psl, int pos, SLDatatype x);
