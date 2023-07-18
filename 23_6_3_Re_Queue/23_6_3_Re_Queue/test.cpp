#include"Queue.h"
#define _CRT_SECURE_NO_WARNINGS 1

Queue qe;

void TestQueue()
{
	QueueInit(&qe);
	QueuePush(&qe, 1);
	QueuePush(&qe, 2);
	QueuePush(&qe, 3);
	QueuePush(&qe, 4);
	while (!QueueEmpty(&qe))
	{
		printf("%d ", QueueFront(&qe));
		QueuePop(&qe);
	}

	return;
}

int main()
{
	TestQueue();
	return 0;
}