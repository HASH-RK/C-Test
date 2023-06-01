#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

Queue qe;

void Test1()
{
    QueueInit(&qe);
    QueuePush(&qe,1);
    QueuePush(&qe,2);
    QueuePush(&qe,3);
    QueuePush(&qe,4);
    QueuePush(&qe,5);
    while (!QueueEmpty(&qe))
    {
        printf("%d", QueueFront(&qe));
        QueuePop(&qe);
    }
//    QueueDestroy(&qe);
}

int main()
{
    Test1();
    return 0;
}