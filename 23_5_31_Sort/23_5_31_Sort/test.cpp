#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#define MAX 31
#define MIN 31
using namespace std;

//void ShellSort(int* a, int n)
//{
//	/*int gap = 3;
//	for (int j = 0; j < gap; j++)
//	{
//		for (int i = j; i < n - gap; i += gap)
//		{
//			int end = i;
//			int tmp = a[i + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//	}*/
//
//	// gap > 1 Ԥ����
//	// gap == 1 ֱ�Ӳ�������
//	int gap = n;
//	while (gap > 1)
//	{
//		//gap /= 2;
//		gap = gap / 3 + 1;
//
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int tmp = a[i + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//		//printf("gap:%d->", gap);
//		//PrintArray(a, n);
//	}
//}
//
//
//void TestShellSort()
//{
//	int a[] = { 9,8,7,6,5,4,3,2,1,0,-1,-2,-3,-3,-4,-5,-5,-6,-7,-8,-9 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//
//	ShellSort(a, sizeof(a) / sizeof(int));
//
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//
//void PrintArray(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}


//int main()
//{
//	TestShellSort();
//	return 0;
//}



//
// Created by HASHRK on 2023/5/31.
//



//int main()
//{
//	//int a, b;
//	//b = 0;
//	//for (int z = 1; z <= 31; ++z)
//	//{
//	//	a = rand() % 3;
//	//	if (a == 0)
//	//	{
//	//		b = b + 1;
//	//	}
//	//}
//	//cout << "31�����飬ץ���εĴ���Ϊ��" << b << "��";
//	//system("pause");
//// ���� [0, max]
//	//int x = rand() % (MAX + 1);
//
//	// ���� [1, max + 1) ���� [1, max]
//	//int x = 1 + rand() % (MAX);
//
//	// ���� [min, max] ��Χ�������
//
//	int x = MIN + rand() % (MAX - MIN + 1);
//	cout << "1~31�ţ�ץ���ε�Ϊ��" << x;
//
//	return 0;
//}

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main()
{
    int a = 1;
    int b = 31;
    int acontain_bnocontain = (rand() % (b - a)) + a;
    int acontain_bcontain = (rand() % (b - a + 1)) + a;
    int anocontain_bcontain = (rand() % (b - a)) + a + 1;

 //   cout << "[a,b)���������" << acontain_bnocontain << endl;
    cout << "[a,b]���������" << acontain_bcontain << endl;
  //  cout << "(a,b]���������" << anocontain_bcontain << endl;
    return 0;
}